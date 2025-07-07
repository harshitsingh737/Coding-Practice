#include<bits/stdc++.h>
using namespace std;
int main()
{
    string st;
    cin>>st;
    int ans = 1;
    for(auto it:st)
    {
        ans = ans * (it-'0') ;
    }
    cout<<ans;

return 0;
}