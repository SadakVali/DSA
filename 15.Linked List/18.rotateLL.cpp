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
        Node *head = NULL, *tail = NULL;
        int length = 0;
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

Node* rotateLL(Node *head, int positions) {
    // if sinlge node or NULL node only LL
    if (!head || !head->next) return head;
    // adjusting the position wrt length of the LL because rotating LL 
    // of size 5 by 6 positions is = rotating it by 1 position.
    int length = find_length_of_LL(head);
    positions %= length;
    // if position is a multiple of LL length
    if (positions == 0) return head;
    // reach the tail of the new LL
    int num_of_hops = length - positions - 1;
    Node *new_tail = head;
    while (num_of_hops--)
        new_tail = new_tail->next;
    // next node to tail of new LL is head of new LL
    Node *new_head = new_tail->next;
    // making tail point to NULL
    new_tail->next = NULL;
    // making old tail point to old head
    Node *old_tail = new_head;
    while (old_tail->next) 
        old_tail = old_tail->next;
    old_tail->next = head;
    return new_head;
};

void printLL(Node *head) {
    for (Node* curr=head; curr; curr = curr->next) 
        cout << curr->data << " ";
    cout << endl;
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

    Node *head = rotateLL(LL->get_head(), 2);
    printLL(head);

    cout << endl << endl << endl;
    return 0;
};
