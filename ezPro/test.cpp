#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<string>
#include<unordered_set>
#include<climits>
using namespace std;

bool containsDuplicate(vector<int>& nums)
{
    unordered_set<int> ownSet;
    for(auto i:nums)
    {
        if(ownSet.find(i)!=ownSet.end())
            return false;
        ownSet.insert(i);
    } 
    return true;
}

int main()
{
    return 0;
}