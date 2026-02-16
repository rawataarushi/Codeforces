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
        vector<int>vec(n+1);
        for(int i=1;i<=n;i++)
        {
           cin>>vec[i];
        }
        vector<int>visited(n+1,false);
        for(int i=1;i<=n;i++)
        {
            if(visited[i])continue;
               vector<int>ans;
               vector<int>indices;
               long long ch=i;
               while(ch<=n)
               {
                 visited[ch]=true;
                 ans.push_back(vec[ch]);
                 indices.push_back(ch);
                 ch*=2;
               }
               sort(ans.begin(),ans.end());
              for(int j=0;j<indices.size();j++)
              {
                vec[indices[j]]=ans[j];
              }
        }
        bool flag=false;
        for(int i=2;i<=n;i++)
        {
            if(vec[i]<vec[i-1])flag=true;
        }
        if(flag)cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
    }
}