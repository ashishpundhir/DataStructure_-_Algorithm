#include <iostream>
#include <math.h>
using namespace std;

int main() {
    int getnumber;
    cout << "Enter the value to find the prime number :- ";
    cin >> getnumber;
    int halfvalue = (getnumber)/2; // optimized loop bound

    if (getnumber == 2) {
        cout << "it is the value 2 and it is a prime number too" << endl;
    } else {
        bool isPrime = true;
        for (int i = 2; i <= halfvalue; i++) {
            if (getnumber % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << "it is a prime number" << endl;
        } else {
            cout << "it is not a prime number" << endl;
        }
    }
    return 0;
}