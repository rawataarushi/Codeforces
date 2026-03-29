#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;cin>>n;
        vector<int>vec(n);
        for(int i=0;i<n;i++)cin>>vec[i];
        if(n==1)cout<<1<<endl;
        else{
            for(int i=0;i<n;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
        
    }
}