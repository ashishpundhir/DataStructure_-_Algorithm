#include <iostream>
using namespace std;
int main(){

 int number;
 cout<<"Enter the value the of number ";
 cin>>number;



 for(int i=1;i<=number;i++){
    for(int j=1; j<=number-i;j++){
        cout<<" ";
    }

    for(int k=1; k<=i;k++){
        cout<<k;
    }

    for(int l=1; l<=i-1;l++){
        cout<<l;
        
    }

cout<<"\n";
 }

 

     return 0;

}


// Enter the value the of number 5
//     1
//    121
//   12312
//  1234123
// 123451234