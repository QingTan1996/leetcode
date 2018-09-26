#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<string>
#include<map>
#include<climits>
using namespace std;

int removeDuplicates(vector<int>& nums) 
{
       
}

int main()
{

    vector<int> nums={0,0,1,1,1,2,2,3,3,4};
    int res=removeDuplicates(nums);
    for(int i=0;i<res;++i)
        cout<<nums[i]<<" ";
    cout<<endl;
    return 0;
}