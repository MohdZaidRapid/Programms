#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int value) : val(value), next(NULL){};

    void print()
    {
        Node *current = this;
        while (current != NULL)
        {
            cout << current->val << " ";
            current = current->next;
        }
        cout << endl;
    }

    Node * reverse(Node *node1)
    {
        if (node1 == NULL)
        {
            return NULL;
        }

        Node *curr = node1;
        Node *prev = NULL;
        while (curr != NULL)
        {
            Node *temp = curr->next;
            curr->next = prev;
            prev = curr;
            curr = temp;
        }
        return prev;
    }
   
};

int main()
{

    Node *node1 = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);

    node1->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;

    node1->print();
   node1= node1->reverse(node1);
    node1->print();
    return 0;
}
