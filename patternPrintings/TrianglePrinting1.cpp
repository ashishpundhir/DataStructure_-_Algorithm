#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter The Number of Rows & col : - ";
    cin>>row;
    int num = 1;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=i+1;j++){
            cout<<num<<" ";
            num++;
        }
        cout<<"\n";
    }

}


// Enter The Number of Rows & col : - 4
// 1 2 
// 3 4 5 
// 6 7 8 9 
// 10 11 12 13 14 
// 15 16 17 18 19 20 