#include <iostream>
using namespace std;

int sum_of_digit(int value)
{
    int rem = 0;
    while (value > 0)
    {
        rem = (value % 10) + rem;
        value = value / 10;
    }
    return rem;
}

int main()
{
    int value = 258;
    cout << sum_of_digit(value);

    return 0;
}