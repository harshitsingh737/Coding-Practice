#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    cin>>s;
    int a ;
    cin>>a;
    unordered_map<string,int>mpp;
    mpp["mon"] = 6;
    mpp["tue"] = 5;
    mpp["wed"] = 4;
    mpp["thu"] = 3;
    mpp["fri"] = 2;
    mpp["sat"] = 1;
    mpp["sun"] = 0;

    int ans = 0;
    if(a-mpp[s] > 0)
    {
        ans = 1 + (a-mpp[s])/7;
    } 

    cout<<ans;

    return 0;
}