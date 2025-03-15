#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    long long ans;
    cin>>t;
    while(t--)
    {
        int n;
        cin >>n;
        int arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        long long mn=INT_MAX;
        for(int i=0; i<n-1; i++)
        {
            for(int j=i+1; j<n; j++)
            {
                ans= arr[i]+arr[j]+j-i;
                mn=min(mn,ans);
            }
        }
        cout<<mn<<endl;
    }
}
