#include <iostream>
using namespace std;
int main(){
    int value;
    cout<<"enter the value:-   ";
    cin>>value;
    int sum = 1;

    for(int i=2;i<=value;i++){
        if (i%2!=0){
           sum =i+sum;
        }

       
    }
     cout<<"The sum of Odd value till [ "<<value<<" ]is "<<sum<<endl;
        return 0;
}