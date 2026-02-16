#include<bits/stdc++.h>
using namespace std;
bool helper(int a, int b)
{
   if(a==-1)return true;
   return (a+b!=7&& a!=b);
             
}
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)
        {
           cin>>vec[i];
        }
        int c=0;
        for(int i=1;i<n;i++)
        {
            if(!helper(vec[i-1],vec[i])){
                vec[i]=-1;
                c++;
            }
        }
        cout<<c<<endl;
    }
}