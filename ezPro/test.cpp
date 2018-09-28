#include<iostream>
#include<algorithm>
#include<vector>
#include<unordered_map>
#include<string>
#include<unordered_set>
#include<cmath>
using namespace std;

bool isHappy(int n) 
{
    unordered_set<int> ownSet;
    do
    {
        int tmp=0;
        while(n)
        {
            tmp+=pow((n%10),2);
            n/=10;
        }
        if(tmp==1)
            return true;
        ownSet.insert(tmp);
    }while(ownSet.find(n)!=ownSet.end()); 
    return false;
}

int main()
{
    return 0;
}