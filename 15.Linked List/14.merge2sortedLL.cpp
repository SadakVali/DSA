#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node* next;
        Node(int _data=INT32_MIN, Node* _next=NULL) : data(_data), next(_next) {};
        ~Node() = default;
};


class LinkedList {
    private:
        Node* head = NULL;
        Node* tail = NULL;
        int length = 0;
    public:
        void insert_as_head(int _data) {
            head = new Node(_data, head);
            if (length++ == 0) tail = head; 
        };
        void insert_as_tail(int _data) {
            Node* new_node = new Node(_data);
            length++ ? tail->next = new_node : head = new_node;
            tail = new_node;
        };
        Node* search(int _val) {
            Node* curr = head;
            while (curr && (curr->data != _val)) curr = curr->next;
            return curr;
        };
        void insert_at_position_p(int _data, int _position) {
            if ((length == 0) || (_position <= 1)) {
                insert_as_head(_data);
            } else if (_position >= (length+1)) {
                insert_as_tail(_data);
            } else {
                Node* previous = get_node_at_position(_position-1);
                previous->next = new Node(_data, previous->next);
                length++;
            }
        };
        void printLL() {
            cout << "Printing " << length << " num of elements..." << endl;
            for (Node* curr=head; curr; curr = curr->next) cout << curr->data << " ";
            cout << endl;
        };
        void delete_at_position(int _position) {
            if ((_position > length) || (_position < 1) || (length == 0)) return;
            if (_position == 1) {
                Node* target = head;
                head = head->next;
                delete target;
                if(length == 1) tail = NULL; 
            } else {
                Node* previous = get_node_at_position(_position-1);
                Node* target = previous->next;
                previous->next = target->next;
                if (_position == length) tail = previous;
                delete target;
            }
            length--;
        };
        void reverseLL() {
            Node* previous = NULL;
            Node* current = head;
            tail = head;
            while (current) {
                Node* forward = current->next;
                current->next = previous;
                previous = current;
                current = forward;
            }
            head = previous;
        };
        int size() {
            return length;
        };
    private:
        Node* get_node_at_position(int _position) {
            Node* curr = head;
            for (int i=1; i<_position; i++) curr = curr->next;
            return curr;
        };
    friend Node* merge(LinkedList *&LL1, LinkedList *&LL2);
};

void printLL(Node* curr) {
    while (curr) {
        cout << curr->data << " ";
        curr = curr->next;
    }
    cout << endl;
};

Node* merge(LinkedList *&LL1, LinkedList *&LL2) {
    Node *left = LL1->head, *right = LL2->head, *head;
    if (!left) return right;
    if (!right) return left;
    if (left->data <= right->data) {
        head = left;
        left = left->next;
    } else {
        head = right;
        right = right->next;
    }
    head->next = NULL;
    Node *tail = head;
    while (left && right) {
        if (left->data <= right->data) {
            tail->next = left;
            tail = left;
            left = left->next;
        } else {
            tail->next = right;
            tail = right;
            right = right->next;
        }
        tail->next = NULL;
    }
    if (left) {
        tail->next = left;
        tail = LL1->tail;
    }
    if (right) {
        tail->next = right;
        tail = LL2->tail;
    }
    return head;
};


int main() {
    LinkedList *LL1 = new LinkedList();
    LL1->insert_as_tail(1);
    LL1->insert_as_tail(2);
    LL1->insert_as_tail(3);
    LL1->insert_as_tail(4);
    LL1->insert_as_tail(5);

    LinkedList *LL2 = new LinkedList();
    LL2->insert_as_tail(2);
    LL2->insert_as_tail(3);
    LL2->insert_as_tail(8);
    LL2->insert_as_tail(9);
    LL2->insert_as_tail(10);

    Node* head = merge(LL1, LL2);
    printLL(head);

    cout << endl << endl << endl;
    return 0;
};
