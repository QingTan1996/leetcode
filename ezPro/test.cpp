#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<string>
#include<map>
#include<climits>
using namespace std;

void moveZeroes(vector<int>& nums) 
{
    if(nums.empty())    return;
    int index=0;
    for(int i=0;i<nums.size();++i)
        if(nums[i]!=0)
            nums[index++]=nums[i];
    for(int i=index;i<nums.size();++i)
        nums[i]=0;
}

int main()
{
    vector<int> nums={};
    moveZeroes(nums);
    for(auto i:nums)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}