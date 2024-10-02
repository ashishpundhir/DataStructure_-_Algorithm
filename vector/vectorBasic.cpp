#include <iostream>
#include <vector>
using namespace std;
int main()
{

    vector<int> vec = {2, 3, 4, 5, 5, 6};
    // cout<<"the size of the vector is "<<vec.size()<<endl;
    // vec.push_back(24);
    // cout<<"the size of the vector is "<<vec.size()<<endl;
    // vec.push_back(45);
    // cout<<"the size of the vector is "<<vec.size()<<endl;
    // vec.push_back(97);
    // cout<<"the size of the vector is "<<vec.size()<<endl;

    for (int value : vec)
    {
        vec.push_back(100 + value);
        cout << value << " " << endl;
    }

    vec.pop_back();
    cout << "the size of the vector is " << vec.size() << endl;
    for (int value : vec)
    {
        // vec.push_back(100+value);
        cout << value << " " << endl;
    }

    return 0;
}