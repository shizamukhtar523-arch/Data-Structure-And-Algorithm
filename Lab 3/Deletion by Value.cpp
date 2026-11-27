#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int n = 5, value, pos = -1;

    cout << "Enter value to delete: ";
    cin >> value;

    for(int i = 0; i < n; i++)
    {
        if(arr[i] == value)
        {
            pos = i;
            break;
        }
    }

    if(pos != -1)
    {
        for(int i = pos; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        cout << "Array after deletion: ";

        for(int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
    }
    else
    {
        cout << "Value not found";
    }

    return 0;
}
