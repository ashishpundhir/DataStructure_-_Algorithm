#include <iostream>
using namespace std;
int factorial(int a)
{
    int result = 1;
    for (int i = 1; i <= a; i++)
    {
        result = result * i;
    }
    return (result);
}

int ncr(int a, int b)
{
    int fact_a = factorial(a);
    int fact_b = factorial(b);
    int fact_ncr = factorial(a - b);
    int result = fact_a / (fact_b * fact_ncr);
    return result;
}

int main()
{

    cout << ncr(6, 3) << endl;
    cout << factorial(6) << endl;
    cout << factorial(3) << endl;
    cout << factorial(3) << endl;
}