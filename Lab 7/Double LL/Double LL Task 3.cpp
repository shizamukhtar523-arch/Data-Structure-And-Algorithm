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

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = NULL;

    // New node
    Node* newNode = new Node;

    cout << "Enter value to insert at end: ";
    cin >> newNode->data;

    newNode->next = NULL;

    // Find last node
    Node* temp = head;

    while (temp->next != NULL)
    {
        temp = temp->next;
    }

    // Connect new node
    temp->next = newNode;
    newNode->prev = temp;

    // Display
    temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL";

    return 0;
}
