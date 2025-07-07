#include<bits/stdc++.h>
using namespace std;

    int solve(vector<int>&vt)
    {
        int ans = 1;
        int maxi = vt[0];
        int n = vt.size();
        for(int i = 1;i<n;i++)
        {
            if(vt[i] > maxi)
            {
                ans++;
                maxi = max(maxi,vt[i]);
            }
        }
        return ans;
    }

int main()
{
    int n;
    cin>>n;
    vector<int>vt(n);

    for(int i=0;i<n;i++)
    {
        cin>>vt[i];
    }

    int result = solve(vt);
    cout<<result;

return 0;
}