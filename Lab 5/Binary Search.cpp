#include <iostream>
using namespace std;

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int value, low = 0, high = 4, mid;
    int found = 0;

    cout << "Enter value to search: ";
    cin >> value;

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(arr[mid] == value)
        {
            cout << "Value found at position " << mid + 1;
            found = 1;
            break;
        }
        else if(value > arr[mid])
        {
            low = mid + 1;
        }
        else
        {
            high = mid - 1;
        }
    }

    if(found == 0)
    {
        cout << "Value not found";
    }

    return 0;
}
