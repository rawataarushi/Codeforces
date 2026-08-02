#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int ind=-1;
         for(int i=0;i<s.length();i++)
         {
            if(s[i]=='1'){
                ind=i;
                break;
            }
         }
         bool find=false;
         for(int i=ind-1;i>=0;i--)
         {
            if(s[i]=='0'){
                s.erase(s.begin()+i);
                find=true;
                break;
            }
         }
        
        if(!find){
            for(int i=ind+1;i<s.length();i++)
            {
                if(s[i]=='0'){
                    s.erase(s.begin()+i);
                    break;
                }
            
         }
        }
         for(int i=0;i<s.length();i++)
        {
            if(s[i]=='1'){
                s.erase(s.begin()+i);break;
            }
        }
        cout<<s<<endl;
    }
}