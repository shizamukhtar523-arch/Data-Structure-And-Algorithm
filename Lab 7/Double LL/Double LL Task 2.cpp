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

    cout << "Enter value to insert at beginning: ";
    cin >> newNode->data;

    newNode->prev = NULL;
    newNode->next = head;

    head->prev = newNode;
    head = newNode;

    // Display
    Node* temp = head;

    while (temp != NULL)
    {
        cout << temp->data << " <-> ";
        temp = temp->next;
    }

    cout << "NULL";

    delete newNode;
    delete head;
    delete second;

    return 0;
}
