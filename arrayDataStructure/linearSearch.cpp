#include <iostream>
using namespace std;

int linearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }

    return -1;
}

int main()
{
    cout << "enter the Size of the array" << endl;
    int size;
    cin >> size;
    int target;
    cout << "enter the Target value of array" << endl;
    cin >> target;
    int arr[size];
    for (int i = 0; i < size; i++)
    {
        cin >> arr[i];
    }
    cout << endl
         << endl
         << endl;

    cout << linearSearch(arr, size, target);

    return 0;
}