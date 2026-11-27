#include <iostream>
using namespace std;

int main()
{
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5, value;

    cout << "Enter value to insert: ";
    cin >> value;

    arr[n] = value;
    n++;

    cout << "Array after insertion: ";

    for(int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }

    return 0;
}
