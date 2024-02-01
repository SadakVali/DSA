#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node* next;
        Node* prev;
        Node(int _data=INT32_MIN, Node* _prev=NULL, Node* _next=NULL) : data(_data), prev(_prev), next(_next) {};
        ~Node() = default;
};


class LinkedList {
    private:
        Node* head = NULL;
        Node* tail = NULL;
        int length = 0;
    public:
        ~LinkedList() {
            Node* curr = head;
            while (curr) {
                Node* next = curr->next;
                delete curr;
                curr = next;
            }
        };
        void insert_as_head(int _data) {
            head = new Node(_data, NULL, head);
            if (length++ == 0) tail = head; 
        };
        void insert_as_tail(int _data) {
            Node* new_node = new Node(_data, tail, NULL);
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
                Node* new_node = new Node(_data, previous, previous->next);
                previous->next->prev = new_node;
                previous->next = new_node;
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
                head->prev = NULL;
                delete target;
                if(length == 1) tail = NULL; 
            } else {
                Node* previous = get_node_at_position(_position-1);
                Node* target = previous->next;
                previous->next = target->next;
                target->next->prev = previous;
                if (_position == length) tail = previous;
                delete target;
            }
            length--;
        };
        void reverseLL() {
            Node* current = head;
            Node* previous = NULL;
            while (current) {
                Node* forward = current->next;
                current->prev = forward;
                current->next = previous;
                previous = current;
                current = forward;
            }
            swap(head, tail);
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
};


int main() {
    // // LL creation V1
    // Node* head = new Node(0);
    // Node* second = new Node(1);
    // Node* third = new Node(2);
    // Node* fourth = new Node(3);
    // head->next = second;
    // second->next = third;
    // third->next = fourth;

    // // LL creation V2
    // Node* head = new Node(0);
    // insert_as_head(head, 1);
    // insert_as_head(head, 2);
    // insert_as_head(head, 3);

    // LL creation V3
    LinkedList* LL = new LinkedList();
    LL->insert_at_position_p(1, 2);
    LL->insert_at_position_p(3, 4);
    LL->insert_at_position_p(4, 5);
    LL->insert_at_position_p(0, -10);
    LL->insert_at_position_p(2, 3);
    LL->insert_at_position_p(5, 10);

    LL->printLL();
    LL->delete_at_position(3);
    LL->printLL();
    LL->reverseLL();
    LL->printLL();

    cout << endl << endl << endl;
    return 0;
};
