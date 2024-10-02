#include <iostream>
using namespace std;

void swapArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;

    while (start < end)
    {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main()
{
    cout << "enter the Size of the array";
    int size;
    cin >> size;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << endl
         << endl;

    swapArray(arr, size);

    for (int i = 0; i < size; i++)
    {

        cout << arr[i] << endl;
    }

    return 0;
}