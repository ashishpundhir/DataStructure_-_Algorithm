#include <iostream>
#include <vector>
using namespace std;
int main(){
int i = 0;
vector<int> vec;

vec.push_back(35);
vec.push_back(25);
vec.push_back(29);
vec.push_back(29);
vec.push_back(25);

//opt+shift+cmd copy , shift+cmd+arrow sellect , shift+arrow single sllect

for(int value: vec){
    i ^= value;

}
cout<<i<<" "<<endl;


    return 0;
}