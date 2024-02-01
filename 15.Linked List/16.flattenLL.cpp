#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node* next;
        Node* bottom;
        Node(int _data, Node *_next=NULL, Node *_bottom=NULL) : data(_data), next(_next), bottom(_bottom) {};
        ~Node() = default;
};


class LinkedList {
    private:
        Node* head;
        Node* tail;
    public:
        LinkedList(Node *node=NULL) : head(node), tail(node) {};
        void insert_as_tail(int _data) {
            Node* new_node = new Node(_data);
            head ? tail->next = new_node : head = new_node;
            tail = new_node;
        };
        void insert_as_tail_bottom(int _data) {
            tail->bottom = new Node(_data);
            tail = tail->bottom;
        };
        void printLLright() {
            for (Node* curr=head; curr; curr = curr->next) 
                cout << curr->data << " ";
            cout << endl;
        };
        void printLLbottom() {
            for (Node* curr=head; curr; curr = curr->bottom) 
                cout << curr->data << " ";
            cout << endl;
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
        Node* get_head() {
            return head;
        };
};

Node* merge(Node *left, Node *right) {
    if (!left) return right;
    if (!right) return left;
    Node *head = new Node(-1);
    Node *tail = head;
    while (left && right) {
        if (left->data <= right->data) {
            tail->bottom = left;
            tail = left;
            left = left->bottom;
        } else {
            tail->bottom = right;
            tail = right;
            right = right->bottom;
        }
        tail->bottom = NULL;
    }
    if (left) tail->bottom = left;
    if (right) tail->bottom = right;
    return head->bottom;
};

Node* flatten(Node *root) {
    if (!root) return NULL;
    return merge(root, flatten(root->next));
};


int main() {
    LinkedList *LL = new LinkedList();
    LL->insert_as_tail(1);
    LL->insert_as_tail(2);
    LL->insert_as_tail(3);
    LL->insert_as_tail(4);
    LL->insert_as_tail(5);

    LinkedList *LL1 = new LinkedList(LL->get_head());
    LL1->insert_as_tail_bottom(10);
    LL1->insert_as_tail_bottom(20);
    LL1->insert_as_tail_bottom(30);
    LL1->insert_as_tail_bottom(40);
    LL1->insert_as_tail_bottom(50);

    LinkedList *LL2 = new LinkedList(LL->get_head()->next);
    LL2->insert_as_tail_bottom(20);
    LL2->insert_as_tail_bottom(30);
    LL2->insert_as_tail_bottom(400);
    LL2->insert_as_tail_bottom(500);

    LinkedList *LL3 = new LinkedList(LL->get_head()->next->next);
    LL3->insert_as_tail_bottom(1000);
    LL3->insert_as_tail_bottom(2000);
    LL3->insert_as_tail_bottom(3000);
    LL3->insert_as_tail_bottom(4000);
    LL3->insert_as_tail_bottom(5000);
    LL3->insert_as_tail_bottom(50000);
    LL3->insert_as_tail_bottom(50000);

    LinkedList *LL4 = new LinkedList(LL->get_head()->next->next->next);
    LL4->insert_as_tail_bottom(40);
    LL4->insert_as_tail_bottom(50);

    LinkedList *LL5 = new LinkedList(LL->get_head()->next->next->next->next);
    LL5->insert_as_tail_bottom(10);
    LL5->insert_as_tail_bottom(20);
    LL5->insert_as_tail_bottom(30);
    LL5->insert_as_tail_bottom(40);
    LL5->insert_as_tail_bottom(50);

    LL->printLLright();
    LL->printLLbottom();
    LL1->printLLbottom();
    LL2->printLLbottom();
    LL3->printLLbottom();
    LL4->printLLbottom();
    LL5->printLLbottom();
    cout << endl;

    flatten(LL->get_head());
    LL->printLLbottom();
    LL1->printLLbottom();
    LL2->printLLbottom();
    LL3->printLLbottom();
    LL4->printLLbottom();
    LL5->printLLbottom();

    cout << endl << endl << endl;
    return 0;
};
