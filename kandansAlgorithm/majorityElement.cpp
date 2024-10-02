#include <iostream>
using namespace std;
int main()
{

    int arr[8] = {2, 7, 9, 9, 7, 6, 9, 9};
    int max_value = 0;

    for (int i = 0; i < 8; i++)
    {
        int freq = 0;
        for (int j = 0; j < 8; j++)
        {
            if (arr[i] == arr[j])
            {
                freq++;
            }
        }
        if (freq >= 4)
        {
            max_value = arr[i];
        }
    }

    cout << "majority number is " << max_value;

    return 0;
}
