#include <iostream>
using namespace std;

int main(){
        cout<<"enter the Size of the array";
    int size;
    cin>>size;
    int arr[size];
    for(int i=0;i<=size;i++){
        cin>>arr[i];

    }
    cout<<"and the array is[ ";
     for(int i=0;i<=size;i++){
        cout<<arr[i]<<" ";

    }
     cout<<" ] ";

    return 0;
}