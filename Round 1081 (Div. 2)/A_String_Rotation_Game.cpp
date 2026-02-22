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
        string s;
        cin>>s;
          s=s+s;
          vector<int>vec(2*n,1);
          for(int i=1;i<2*n;i++)
          {
            if(s[i]!=s[i-1])vec[i]=vec[i-1]+1;
            else vec[i]=vec[i-1];
          }
          int i=0;
          int j=0;
          int mx=0;
          
          while(j<2*n)
          {
            if(j-i+1==n){
                mx=max(mx,vec[j]-vec[i]+1);
                i++;
            }
            j++;
          }
cout<<mx<<endl;
    }
}