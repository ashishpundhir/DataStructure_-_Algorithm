#include <iostream>
using namespace std;
int main(){
    int row;
    cout<<"Enter The Number of Rows & col : - ";
    cin>>row;
    int num = 1;
    for(int i=0;i<=row;i++){
        for(int j=0;j<=i;j++){
            cout<<num<<" ";
          
        }
          num++;
        cout<<"\n";
    }

}


// Enter The Number of Rows & col : - 5
// 1 
// 2 2 
// 3 3 3 
// 4 4 4 4 
// 5 5 5 5 5 
// 6 6 6 6 6 6 