#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node *next;
        Node(int _data, Node *_next=NULL) : data(_data), next(_next) {};
        ~Node() = default;
};

// https://leetcode.com/problems/merge-nodes-in-between-zeros/description/
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

Node* remove_zeros_and_sum_nodes(Node *head) {
    if (!head) return NULL;
    if (!head->next) return NULL;
    if (!head->next->next) return NULL;
    Node *prev = head, *curr = head->next;
    while (curr) {
        int sum = 0;
        while (curr->data != 0) {
            sum += curr->data;
            Node *temp = curr;
            curr = curr->next;
            delete temp;
        }
        curr->data = sum;
        prev->next = curr;
        prev = curr;
        curr = curr->next;
    }
    Node *temp = head;
    head = head->next;
    delete temp;
    return head;
};



int main() {
    LinkedList *LL = new LinkedList();
    LL->insert_as_tail(0);
    LL->insert_as_tail(3);
    LL->insert_as_tail(1);
    LL->insert_as_tail(0);
    LL->insert_as_tail(4);
    LL->insert_as_tail(5);
    LL->insert_as_tail(2);
    LL->insert_as_tail(0);
    LL->printLL();

    Node *head = remove_zeros_and_sum_nodes(LL->get_head());
    printLL(head);

    cout << endl << endl << endl;
    return 0;
};
