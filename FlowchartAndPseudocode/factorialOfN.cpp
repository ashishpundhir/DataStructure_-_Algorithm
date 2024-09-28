#include <iostream>
using namespace std;
int main(){
    int num;
    cout<<"Enter the value of numebr";
    cin>>num;
    int value = 1;

    for(int i = 1; i<=num;i++){
        value = value*i;
    }
    cout<<"The facorial of "<<num<<" is "<<value<<endl;
}