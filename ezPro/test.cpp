#include<iostream>
#include<sstream>
#include<vector>
#include<unordered_map>
#include<string>
#include<map>
#include<climits>
using namespace std;

bool isNStraightHand(vector<int>& hand, int W) 
{
    if(hand.empty()||(hand.size()%W))    return false;
    unordered_map<int,int> um;
    for(auto i:hand)    ++um[i];
    for(int i=0;i<um.size()/W;++i)
    {
        vector<int> tmp(W,0);
        for(auto j:um)
        {
            tmp.push_back(j.first);
            if(j.second==1)
                um.erase()
        }
    }
    return true;
}

int main()
{
    return 0;
}