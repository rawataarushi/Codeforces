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
        bool flag=false;
        for(int i=1;i<n;i++)
        {
            if(vec[i-1]>vec[i]){
                flag=true;
                break;
            }
        }
        if(!flag)cout<<n<<endl;
        else cout<<1<<endl;
}
}