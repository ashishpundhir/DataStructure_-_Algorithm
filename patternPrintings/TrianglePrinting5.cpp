#include <iostream>
using namespace std;
int main(){
    cout<<"Enter Number of rows  : - "<<endl;  
    int row;
     cin>>row;
    char alph;
    cout<<"Enter The starting Character  : - "<<endl;
     cin>>alph;
   
    

   


    for(int i=1;i<=row;i++){
        char ch = alph;
        for(int j=1;j<=i;j++){
            cout<<ch<<" ";
            ch += 1;

           
        }
        cout<<"\n";
    }

}



// Enter Number of rows  : - 
// 5
// Enter The starting Character  : - 
// P
// P 
// P Q 
// P Q R 
// P Q R S 
// P Q R S T 