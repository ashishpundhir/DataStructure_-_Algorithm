#include <iostream>
using namespace std;
int main(){

int arr[8] = {9,7,-4,-3,8,-6,-7,-9};
int curr_sum = 0;
int max_val = INT_MIN;
for(int st=0; st<8;st++){
    curr_sum += arr[st];
    max_val= max(curr_sum,max_val);
    if(curr_sum<0){
        curr_sum = 0;
    }

    
}

cout<<max_val;
    return 0;
}