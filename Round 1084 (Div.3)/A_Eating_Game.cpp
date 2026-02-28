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
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        int mx=*max_element(vec.begin(),vec.end());
        int c=0;
        for(int i=0;i<n;i++){
            if(vec[i]==mx) c++;
        }
        cout<<c<<endl;
    }
}