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
        vector<long long>a(2*n);
        for(int i=0;i<2*n;i++)cin>>a[i];
        map<long long,long long>mp;
        for(int i=0;i<2*n;i++)
        {
            if(mp.find(a[i])==mp.end())
            {
                mp[a[i]]=i;
            }
        }
        vector<long long>dp(2*n,0);
        dp[0]=1;
        for(int i=1;i<2*n;i++)
        {
            long long k=dp[i-1]+1;
            if(mp[a[i]]<i)
            {
              if(mp[a[i]]==0)
              {
                  long long ans=1LL*(i+1)*(i+1);
                   k=max(ans,k);
              }
              else{
                long long ans=1LL *(i-mp[a[i]]+1)*(i-mp[a[i]]+1);
                ans+=dp[mp[a[i]]-1];
                k=max(k,ans);
              }
                
            }
            dp[i]=k;
        }
         cout<<dp[2*n-1]<<endl;
    }
}