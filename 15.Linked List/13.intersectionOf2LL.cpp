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
    friend void create_intersection_at_p(LinkedList* LL1, LinkedList* LL2, int position);
    friend Node* find_intersection_point(LinkedList* LL1, LinkedList* LL2);
};

void create_intersection_at_p(LinkedList* LL1, LinkedList* LL2, int position) {
    Node* curr = LL1->head;
    int temp = position;
    while (--temp) curr = curr->next;
    LL2->tail->next = curr;
    LL2->tail = LL1->tail;
    LL2->length += LL1->length - position + 1; // NOTE : + 1 you gonna miss
};

Node* position_offset(Node* _curr, int offset) {
    if (++offset < 0) return _curr; // NOTE : + 1 you gonna miss this
    while (--offset) _curr = _curr->next;
    return _curr;
};

Node* find_intersection_point(LinkedList* LL1, LinkedList* LL2) {
    if (LL1->tail != LL2->tail) return NULL;
    Node* curr_LL1 = position_offset(LL1->head, LL1->length - LL2->length);
    Node* curr_LL2 = position_offset(LL2->head, LL2->length - LL1->length);
    while (curr_LL1 != curr_LL2) {
        curr_LL1 = curr_LL1->next;
        curr_LL2 = curr_LL2->next;
    }
    return curr_LL1;
};


int main() {
    LinkedList* LL1 = new LinkedList();
    LL1->insert_as_tail(2000);
    LL1->insert_as_tail(6);
    LL1->insert_as_tail(1);
    LL1->insert_as_tail(100);
    LL1->insert_as_tail(2);
    LL1->insert_as_tail(9);
    LL1->insert_as_tail(9);
    LL1->insert_as_tail(9);
    LL1->insert_as_tail(9);
    LL1->insert_as_tail(9);
    LL1->insert_as_tail(9);

    LinkedList* LL2 = new LinkedList();
    LL2->insert_as_tail(1);
    LL2->insert_as_tail(2);
    LL2->insert_as_tail(3);
    LL2->insert_as_tail(4);
    LL2->insert_as_tail(5);
    LL2->insert_as_tail(6);
    LL2->insert_as_tail(7);

    cout << "sizes of the LLs : " << LL1->size() << " " << LL2->size() << endl;
    create_intersection_at_p(LL1, LL2, 4);
    cout << "sizes of the LLs : " << LL1->size() << " " << LL2->size() << endl;
    LL1->printLL();
    LL2->printLL();
    Node* ans = find_intersection_point(LL1, LL2);
    if (ans) cout << ans->data << endl;

    cout << endl << endl << endl;
    return 0;
};
