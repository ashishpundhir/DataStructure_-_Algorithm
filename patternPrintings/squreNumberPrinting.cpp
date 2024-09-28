#include <iostream>
using namespace std;
int main(){
    int row,col;
    cout<<"Enter The Number of Rows : - ";
    cin>>row;
    cout<<"Enter The Numebr of Col.  :- ";
    cin>>col;

    for(int i=0;i<=row;i++){
        for(int j=1;j<=col;j++){
            cout<<j<<" ";
        }
        cout<<"\n";
    }

}