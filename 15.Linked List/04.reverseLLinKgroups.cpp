// 2 pointer approach, tortoise, fast and slow pointer algorithm
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
        void reverse_every_k_sub_group_in_LL(int k) {
            if (k > 0) 
                head = _reverse_every_k_sub_group_in_LL(k, head);
        };
    private:
        Node* get_node_at_position(int _position) {
            Node* curr = head;
            for (int i=1; i<_position; i++) curr = curr->next;
            return curr;
        };
        int is_next_sub_group_exists(Node* temp, int k) {
            while (k--) {
                if (!temp) return false;
                temp = temp->next;
            }
            return true;
        };
        Node* _reverse_every_k_sub_group_in_LL(int k, Node*& _head, int count = 0) {
            if (length == 0) return NULL;
            if (!is_next_sub_group_exists(_head, k)) return _head;
            Node *previous=NULL, *current=_head, *next = current->next;
            while(count++ < k) {
                next = current->next;
                current->next = previous;
                previous = current;
                current = next;
            }
            if (next) _head->next = _reverse_every_k_sub_group_in_LL(k, next);
            return previous;
        };
};


int main() {
    LinkedList* LL = new LinkedList();
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->insert_as_tail(3);
    LL->insert_as_tail(4);
    LL->insert_as_tail(5);
    LL->insert_as_tail(6);
    LL->printLL();

    LL->reverse_every_k_sub_group_in_LL(4);
    LL->printLL();

    cout << endl << endl << endl;
    return 0;
};
