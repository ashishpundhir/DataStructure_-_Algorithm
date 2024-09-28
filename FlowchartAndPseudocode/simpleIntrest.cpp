#include <iostream>
using namespace std;
int main(){
    cout<<"ENTER THE VALUE OF Principal ";
    int principal;
    cin>>principal;

cout<<"ENTER THE VALUE OF Rate  :  -   ";
    int rate;
cin>>rate;
cout<<"ENTER THE VALUE OF Time  :  -   ";
    int time;
cin>>time;

cout<<"For the principal value  "<<principal<<"Rs. \nAnd the rate is  "<<rate<<"% \nAnd for time is "<<time<<"months \nThe total value would be "<< ((principal*rate*time)/100)+principal<<"Rs.  \nAnd the intrest would be  "<<(principal*rate*time)/100<<endl;


}