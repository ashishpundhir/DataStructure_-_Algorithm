#include <iostream>
using namespace std;

int main()
{

    int arr[8] = {2, 7, 9, 9, 7, 6, 9, 9};
    int answer = 0, freq = 0;

    for (int i = 1; i < 8; i++)
    {

        if (arr[i] == arr[i - 1])
        {
            freq++;
        }

        else
        {
            freq = 1;
            answer = arr[i];
        }
    }
    cout << answer;
    return 0;
}