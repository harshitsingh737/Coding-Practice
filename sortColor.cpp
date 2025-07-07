#include<iostream>
using namespace std;

void solve(int *arr,int n)
{
    int left = 0;
    int right = n-1;
    int index = 0;

    while(index<=right)
    {
        if(arr[index]==2)
        {
            swap(arr[index],arr[right]);
            right--;
        }
        else if (arr[index]==0)
        {
            swap(arr[left],arr[index]);
            left++;
            index++;
        }
        else{
            index++;
        }
        
    }
}

int main()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i =0;i<n;i++)
    {
        cin>>arr[i];
    }

    solve(arr,n);

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";
    }
return 0;
}