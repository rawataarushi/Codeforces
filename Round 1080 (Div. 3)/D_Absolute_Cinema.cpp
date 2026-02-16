#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<long long>vec(n+1);
        for(int i=1;i<=n;i++)cin>>vec[i];
        vector<int>ans(n+1,0);
        for(int i=2;i<n;i++)
        {
            long long k=vec[i-1]-2*vec[i]+vec[i+1];
            ans[i]=k/2;
        }
        long long first=0;
        long long last=0;
        for(int i=2;i<n;i++)
        {
            first+=ans[i]*(i-1);
            last+=ans[i];
        }
        ans[n]=(vec[1]-first)/(n-1);
        ans[1]=vec[2]-vec[1]+ans[n]+last;
                for(int i=1;i<=n;i++)
        {
            cout<<ans[i]<<" ";
        }
        cout<<endl;
    }
}