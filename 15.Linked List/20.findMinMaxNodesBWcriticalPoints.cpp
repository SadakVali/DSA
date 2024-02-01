#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node *next;
        Node(int _data, Node *_next=NULL) : data(_data), next(_next) {};
        ~Node() = default;
};


// https://leetcode.com/problems/find-the-minimum-and-maximum-number-of-nodes-between-critical-points/description/
class LinkedList {
    private:
        Node *head=NULL, *tail=NULL;
        int length=0;
    public:
        void insert_as_tail(int _data) {
            Node* new_node = new Node(_data);
            length++ ? tail->next = new_node : head = new_node;
            tail = new_node;
        };
        void printLL() {
            cout << "Printing " << length << " num of elements..." << endl;
            for (Node *curr=head; curr; curr = curr->next) 
                cout << curr->data << " ";
            cout << endl;
        };
        void reverseLL() {
            Node *previous=NULL, *current=head;
            tail = head;
            while (current) {
                Node *forward = current->next;
                current->next = previous;
                previous = current;
                current = forward;
            }
            head = previous;
        };
        int size() {
            return length;
        };
        Node* get_head() {
            return head;
        };
};

int find_length_of_LL(Node *iter) {
    int count = 0;
    while (iter) {
        iter = iter->next;
        ++count;
    }
    return count;
};

void printLL(Node *head) {
    for (Node* curr=head; curr; curr = curr->next) 
        cout << curr->data << " ";
    cout << endl;
};

void update_CP_and_min_dis(int &firstCP, int &lastCP, int &index, int &min_dis) {
    if (firstCP == -1) {
        firstCP = index;
        lastCP = index;
    } else {
        min_dis = min(min_dis, index-lastCP);
        lastCP = index;
    }
};

vector<int> find_min_max_distances(Node *head) {
    vector<int> vec = {-1, -1};
    Node *prev = head;
    if (!prev) return vec;
    Node *curr = prev->next;
    if (!curr) return vec;
    Node *next = curr->next;
    if (!next) return vec;
    int firstCP = -1, lastCP = -1, index = 1, min_dis = INT32_MAX;
    while (next) {
        if ((prev->data > curr->data) && (next->data > curr->data)) 
            update_CP_and_min_dis(firstCP, lastCP, index, min_dis);
        else if ((prev->data < curr->data) && (next->data < curr->data)) 
            update_CP_and_min_dis(firstCP, lastCP, index, min_dis);
        ++index;
        prev = curr;
        curr = next;
        next = next->next;
    }
    if (lastCP == firstCP) return vec;
    else {
        vec[1] = lastCP - firstCP;
        vec[0] = min_dis;
    }
    return vec;
};

void print_vec(vector<int> &vec) {
    for (auto ele : vec) 
        cout << ele << " ";
    cout << endl;
};


int main() {
    LinkedList *LL = new LinkedList();
    LL->insert_as_tail(5);
    LL->insert_as_tail(3);
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->insert_as_tail(5);
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->printLL();

    vector<int> vec = findMinMaxDistances(LL->get_head());
    print_vec(vec);

    cout << endl << endl << endl;
    return 0;
};
