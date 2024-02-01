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
        // Node* find_kth_node_from_end(int k) {
        //     int position = length - k;
        //     if ((position > 0) && (position <= length)) {
        //         Node* curr = head;
        //         while (--position) curr = curr->next;
        //         return curr;
        //     }
        //     return NULL;
        // }
        Node* find_kth_node_from_end(int posi_from_tail) {
            Node *ans = NULL;
            _find_kth_node_from_end(posi_from_tail, head, ans);
            return ans;
        };
    private:
        void _find_kth_node_from_end(int &posi_from_tail, Node *curr, Node *&ans) {
            if (curr == 0) return;
            _find_kth_node_from_end(posi_from_tail, curr->next, ans);
            if (posi_from_tail-- == 0) ans = curr;
        };
        Node* get_node_at_position(int _position) {
            Node* curr = head;
            for (int i=1; i<_position; i++) curr = curr->next;
            return curr;
        };
};


int main() {
    LinkedList* LL = new LinkedList();
    LL->insert_as_tail(2000);
    LL->insert_as_tail(6);
    LL->insert_as_tail(1);
    LL->insert_as_tail(0);
    LL->insert_as_tail(2);
    LL->insert_as_tail(9);

    Node* ans = LL->find_kth_node_from_end(5);
    if (ans) cout << ans->data << endl;

    cout << endl << endl << endl;
    return 0;
};
