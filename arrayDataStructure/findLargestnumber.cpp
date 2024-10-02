#include <iostream>
using namespace std;

int main()

{
    cout << "Choose the option : \n 1.) press 'S' for small \n 2.) press 'L' for large";
    char option;
    cin >> option;
    cout << "enter the Size of the array";
    int size;
    cin >> size;

    int largeNum = INT_MIN;
    int smallNum = INT_MAX;
    int arr[size];
    for (int i = 0; i <= size; i++)
    {
        cin >> arr[i];
    }

    for (int i = 0; i <= size; i++)
    {

        if (option == 'S' || 's')

            if (arr[i] <= smallNum)
            {
                smallNum = arr[i];
            }

        if (arr[i] >= largeNum)
        {
            largeNum = arr[i];
        }
    }

    if (option == 'S' || option == 's')
    {
        cout << "the small number is " << smallNum << endl;
    }
    else if (option == 'L' || option == 'l')
    {
        cout << "the large number is " << largeNum << endl;
    }
    else
    {
        cout << "Choose option correct";
    }

    return 0;
}