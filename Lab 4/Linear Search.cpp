#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int value, found = 0;

    cout << "Enter value to search: ";
    cin >> value;

    for(int i = 0; i < 5; i++)
    {
        if(arr[i] == value)
        {
            cout << "Value found at position " << i + 1;
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        cout << "Value not found";
    }

    return 0;
}
