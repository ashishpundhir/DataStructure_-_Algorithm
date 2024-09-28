#include <iostream>
using namespace std;
int main(){
    char row,col;
    cout<<"Enter The starting Character  : - ";
    cin>>row;
    cout<<"Enter The Ending Character  :- ";
    cin>>col;

    int ascii_one = row;
    int ascii_two = col;
    int lines = col - row;

    for(int i=0;i<=lines;i++){
        for(int j=ascii_one;j<=ascii_two;j++){
            cout<<char(j);

           
        }
        cout<<"\n";
    }

}