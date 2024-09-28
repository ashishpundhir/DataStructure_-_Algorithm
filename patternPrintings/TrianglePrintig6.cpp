#include <iostream>
using namespace std;
int main(){

int n = 5;


for(int i=1; i<=n;i++){
    for(int j=1; j<=i;j++){
        cout<<" ";
    }
    for(int k=1;k<=n-i;k++){
        cout<<i<<" ";
    }
    cout<<"\n";
}



    return 0;

}


//  1 1 1 1 
//   2 2 2 
//    3 3 
//     4 