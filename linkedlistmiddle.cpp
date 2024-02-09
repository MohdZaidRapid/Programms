#include <iostream>
using namespace std;

class Node
{
public: // Make members public for external access
    int val;
    Node *next;

    Node(int value) : val(value), next(NULL) {}

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

    Node *middle(Node *node1)
    {
         if (node1 == NULL)
            return NULL;
        // Node *temp = node1;
        Node *slow = node1;
        Node *fast = node1;
        while (fast->next != NULL && fast != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << slow->val;
        return slow;
    }
};

int main()
{
    Node *node = new Node(10);
    Node *node2 = new Node(20);
    Node *node3 = new Node(30);
    Node *node4 = new Node(40);
    Node *node5 = new Node(50);

    node->next = node2;
    node2->next = node3;
    node3->next = node4;
    node4->next = node5;
    node5->next = NULL;

    // node->print();
    node->middle(node);

    return 0;
}
