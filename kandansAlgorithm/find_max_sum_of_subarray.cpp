#include <iostream>
using namespace std;
int main(){
    
int n= 5;
int arr[5] ={ 2,-4,-7,6,7};

int max_sum = INT_MIN;

for(int st=0;st<n;st++){
    int curr_sum = 0;
    for(int end = st; end<n;end++){
        curr_sum += arr[end];
        max_sum = max(curr_sum,max_sum);
    }
}

cout<<max_sum;




    return 0;
}