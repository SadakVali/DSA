#include<bits/stdc++.h>
using namespace std;


class Node {
    public:
        int data;
        Node *next;
        Node *random;
        Node(int _data, Node *_next=NULL, Node *_random=NULL) : data(_data), next(_next), random(_random) {};
        ~Node() = default;
};


class LinkedList {
    private:
        Node* head = NULL;
        Node* tail = NULL;
        int length = 0;
    public:
        void insert_as_tail(int _data) {
            Node* new_node = new Node(_data);
            length++ ? tail->next = new_node : head = new_node;
            tail = new_node;
        };
        void printLL() {
            cout << "Printing " << length << " num of elements..." << endl;
            for (Node* curr=head; curr; curr = curr->next) cout << curr->data << " ";
            cout << endl;
        };
        void printLLrandomNodes() {
            for (Node* curr=head; curr; curr = curr->next) 
                if (curr->random) cout << curr->random->data << " ";
                else cout << "  ";
            cout << endl;
        };
        void connect_node_from_posi_p_to_node_q(int p, int q) {
            Node *from = head, *to = head;
            while (--p) from = from->next;
            while (--q) to = to->next;
            from->random = to;
        };
        int size() {
            return length;
        };
        Node* get_head() {
            return head;
        };
};

void printLL(Node *head) {
    for (Node* curr=head; curr; curr = curr->next) 
        cout << curr->data << " ";
    cout << endl;
};

void printLLrandomNodes(Node *head) {
    for (Node* curr=head; curr; curr = curr->next) 
        if (curr->random) cout << curr->random->data << " ";
        else cout << "  ";
    cout << endl;
};

// Node* helper(Node *curr, unordered_map<Node*, Node*> &mp) {
//     if (!curr) return NULL;
//     Node* node = new Node(curr->data);
//     mp[curr] = node;
//     node->next = helper(curr->next, mp);
//     if (curr->random) node->random = mp[curr->random];
//     return node;
// };
// Node* deepCopyLL(Node *head) {
//     unordered_map<Node*, Node*> mp; // old node ---> new node
//     return helper(head, mp);
// };

Node* deepCopyLL(Node *head) {
    if (!head) return head;
    Node *iter = head;
    while (iter) {
        Node *node = new Node(iter->data);
        node->next = iter->next;
        iter->next = node;
        iter = iter->next->next;
    }
    iter = head;
    while (iter) {
        iter->next->random = iter->random ? iter->random->next : NULL;
        iter = iter->next->next;
    }
    iter = head;
    Node *cloned_head = iter->next;
    while (iter) {
        Node *cloned = iter->next;
        iter->next = iter->next->next;
        cloned->next = cloned->next ? cloned->next->next : NULL;
        iter = iter->next;
    }
    return cloned_head;
};


int main() {
    LinkedList *LL = new LinkedList();
    LL->insert_as_tail(7);
    LL->insert_as_tail(13);
    LL->insert_as_tail(11);
    LL->insert_as_tail(10);
    LL->insert_as_tail(1);

    LL->connect_node_from_posi_p_to_node_q(1, 6);
    LL->connect_node_from_posi_p_to_node_q(2, 1);
    LL->connect_node_from_posi_p_to_node_q(3, 4);
    LL->connect_node_from_posi_p_to_node_q(4, 3);
    LL->connect_node_from_posi_p_to_node_q(5, 1);

    LL->printLL();
    LL->printLLrandomNodes();
    cout << LL->get_head() << endl;
    cout << endl << endl << endl;

    Node *head = deepCopyLL(LL->get_head());
    printLL(head);
    printLLrandomNodes(head);
    cout << head << endl;

    cout << endl << endl << endl;
    return 0;
};
