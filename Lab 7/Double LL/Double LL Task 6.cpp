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

    head->data = 10;
    head->prev = NULL;
    head->next = second;

    second->data = 20;
    second->prev = head;
    second->next = third;

    third->data = 30;
    third->prev = second;
    third->next = NULL;

    int value;

    cout << "Enter value to search: ";
    cin >> value;

    Node* temp = head;
    bool found = false;

    while (temp != NULL)
    {
        if (temp->data == value)
        {
            found = true;
            break;
        }

        temp = temp->next;
    }

    if (found == true)
    {
        cout << "Value Found!";
    }
    else
    {
        cout << "Value Not Found!";
    }

    return 0;
}
