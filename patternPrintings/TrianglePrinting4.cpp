#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter The Number of Rows & col : - ";
    cin>>row;
    // int num = 1;
    for(int i=1;i<=row;i++){
        for(int j=1;j<=i;j++){
            cout<<j<<" ";
          
        }
        //   num++;
        cout<<"\n";
    }

}

// Enter The Number of Rows & col : - 5
// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 