#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node *next;
        Node(int _data, Node *_next=NULL) : data(_data), next(_next) {};
        ~Node() = default;
};


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

void deleteNnodesAfterMnodes(Node *head, int n, int m) {
    if (!head) return;
    Node *iter = head;
    while (iter) {
        int _n=n, _m=m;
        while (--_m && iter)
            iter = iter->next;
        if (!iter) return;
        Node *mthNode = iter;
        iter = iter->next;
        while (_n-- && iter) {
            Node *temp = iter; // delete this node
            iter = iter->next;
            delete temp;
        }
        mthNode->next = iter;
    }
};

int main() {
    LinkedList *LL = new LinkedList();
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->insert_as_tail(3);
    LL->insert_as_tail(4);
    LL->insert_as_tail(5);
    LL->insert_as_tail(9);
    LL->insert_as_tail(8);
    LL->insert_as_tail(7);
    LL->insert_as_tail(6);
    LL->printLL();

    deleteNnodesAfterMnodes(LL->get_head(), 3, 2);
    LL->printLL();

    cout << endl << endl << endl;
    return 0;
};
