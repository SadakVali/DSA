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
        void sort_012() {
            Node *zeros_head = new Node(-1);
            Node *zeros_tail = zeros_head;
            Node *ones_head = new Node(-1);
            Node *ones_tail = ones_head;
            Node *twos_head = new Node(-1);
            Node *twos_tail = twos_head;
            Node *curr = head;
            while (curr) {
                Node *temp = curr->next;
                curr->next = NULL;
                if (curr->data == 0) {
                    zeros_tail->next = curr;
                    zeros_tail = curr;
                } else if (curr->data == 1) {
                    ones_tail->next = curr;
                    ones_tail = curr;
                } else {
                    twos_tail->next = curr;
                    twos_tail = curr;
                }
                curr = temp;
            }
            zeros_head = zeros_head->next ? zeros_head->next : NULL;
            ones_head = ones_head->next ? ones_head->next : NULL;
            twos_head = twos_head->next ? twos_head->next : NULL;
            if (zeros_head) head = zeros_head;
            else if (ones_head) head = ones_head;
            else if (twos_head) head = twos_head;
            if (twos_tail) tail = twos_tail;
            else if (ones_tail) tail = ones_tail;
            else if (zeros_tail) tail = zeros_tail;
            if (zeros_head) {
                if (ones_head) zeros_tail->next = ones_head;
                else if (twos_head) zeros_tail->next = twos_head;
            }
            if (ones_head) {
                if (twos_head) ones_tail->next = twos_head;
            }
        }
    private:
        Node* get_node_at_position(int _position) {
            Node* curr = head;
            for (int i=1; i<_position; i++) curr = curr->next;
            return curr;
        };
};


int main() {
    LinkedList* LL = new LinkedList();
    LL->insert_as_tail(2);
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->insert_as_tail(1);
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);

    LL->sort_012();
    LL->printLL();

    cout << endl << endl << endl;
    return 0;
};
