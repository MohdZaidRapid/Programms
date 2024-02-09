#include <iostream>
using namespace std;

class Node
{
public:
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
        
        Node *slow = node1;
        Node *fast = node1;
        
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
        }
        cout << "Middle Node: " << slow->val << endl;
        
        return slow;
    }

    Node *removeLoopInLL(Node *node1)
    {
        if (node1 == NULL || node1->next == NULL)
            return NULL;
        
        Node *slow = node1;
        Node *fast = node1;
        
        // Detect the loop
        while (fast != NULL && fast->next != NULL)
        {
            slow = slow->next;
            fast = fast->next->next;
            if (slow == fast)
            {
                break;
            }
        }
        
        // If no loop is found
        if (slow != fast)
        {
            return NULL;
        }
        
        // Move one pointer to the head and keep the other at the meeting point
        Node *p1 = node1;
        Node *p2 = slow;
        
        // Move both pointers at the same pace; they will meet at the loop start
        while (p1 != p2)
        {
            p1 = p1->next;
            p2 = p2->next;
        }
        
        // p2 now points to the start of the loop
        // Find the last node in the loop
        while (p2->next != slow)
        {
            p2 = p2->next;
        }
        
        // Remove the loop by breaking the last node's next pointer
        p2->next = NULL;
        
        return node1;
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
    node4->next = node2; // Creating a loop, node4 points back to node2

    // Detect and remove the loop
    Node *result = node1->removeLoopInLL(node1);

    if (result == NULL)
    {
        cout << "No loop found or removed." << endl;
    }
    else
    {
        cout << "Loop detected and removed." << endl;
    }

    return 0;
}
