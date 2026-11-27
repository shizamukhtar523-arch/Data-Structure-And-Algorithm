#include <iostream>
using namespace std;

struct Node
{
    int data;
    Node* prev;
    Node* next;
};

int main()
{
    Node* head = new Node;
    Node* second = new Node;
    Node* third = new Node;
    Node* fourth = new Node;
    Node* fifth = new Node;

    cout << "Enter 5 values: ";
    cin >> head->data >> second->data >> third->data
        >> fourth->data >> fifth->data;

    // Connect first node
    head->prev = NULL;
    head->next = second;

    // Connect second node
    second->prev = head;
    second->next = third;

    // Connect third node
    third->prev = second;
    third->next = fourth;

    // Connect fourth node
    fourth->prev = third;
    fourth->next = fifth;

    // Connect fifth node
    fifth->prev = fourth;
    fifth->next = NULL;

    // Forward traversal
    cout << "\nForward Traversal:\n";
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }
    cout << "NULL";

    // Backward traversal
    cout << "\n\nBackward Traversal:\n";
    temp = fifth;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->prev;
    }
    cout << "NULL";

    // Count nodes
    int count = 0;
    temp = head;

    while (temp != NULL)
    {
        count++;
        temp = temp->next;
    }

    cout << "\n\nTotal Nodes: " << count;

    // Delete memory
    delete head;
    delete second;
    delete third;
    delete fourth;
    delete fifth;

    return 0;
}
