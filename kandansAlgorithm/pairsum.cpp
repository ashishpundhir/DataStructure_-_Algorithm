#include <iostream>
#include <vector>
using namespace std;

vector<int> pairsum(vector<int> nums, int target)
{
    vector<int> answer;
    int n = nums.size();

    // 1st approch

    //   for(int i = 0; i<n;i++){
    //     for(int j = i+1; j<n; j++){
    //         if(nums[i]+nums[j]==target){
    //             answer.push_back(nums[i]);
    //             answer.push_back(nums[j]);
    //             return answer;
    //         }
    //     }
    //   }

    // 2nd approch
    int i = 0, j = n - 1;
    while (i < j)
    {
        int pairsum = nums[i] + nums[j];
        if (pairsum > target)
        {
            j--;
        }

        else if (pairsum < target)
        {
            i++;
        }

        else
        {
            answer.push_back(nums[i]);
            answer.push_back(nums[j]);
            return answer;
        }
    }

    return answer;
}

int main()
{
    vector<int> number = {1,2,3,4,5,6,7,8};
    int target = 12;

    vector<int> finalanswer = pairsum(number, target);
    cout << finalanswer[0] << endl;
    cout << finalanswer[1] << endl;

    return 0;
}