#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
    int n,m;
    cin>>n>>m;
    vector<int>a(n),b(m);

for(int i = 0; i < n; i++) cin >> a[i];
for(int i = 0; i < m; i++) cin >> b[i];
    if(m>n){
        cout<<"NO"<<endl;
    }
    else{
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int i=n-m-1,las=n-1;
        int j=m-1;
        bool flag=true;
        bool flag2=false;
        while(i>=0 && las>n-m-1 && j>=0)
        {
            while(i>=0 && a[i]>b[j]){
                i--;
            }
            if(a[las]<b[j])
            {
                flag=false;break;
            }
            if(i>=0){
                i--;
                j--;
                las--;
            }

           
        }
        if(j<0)flag2=true;
        if(flag && flag2)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
        
    }
    }
}