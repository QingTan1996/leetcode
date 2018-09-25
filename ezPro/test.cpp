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
    int count=0;
    for(auto i=nums.begin();i!=nums.end();)
    {
        if(*i==0)
        {
            nums.erase(i);
            ++count;
        }    
        else
            ++i;
    }
    for(int i=0;i<count;++i)
        nums.push_back(0);
}

int main()
{
    vector<int> nums={0,1,0,3,12};
    moveZeroes(nums);
    for(auto i:nums)
        cout<<i<<" ";
    cout<<endl;
    return 0;
}