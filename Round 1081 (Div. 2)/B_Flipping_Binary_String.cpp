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
        int c=0;
        vector<int>vec;
        vector<int>vec2;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='1'){c++;
            vec.push_back(i);}
            else vec2.push_back(i);

        }
        if(c%2==0)
           {
               cout<<vec.size()<<endl;
               for(int i=0;i<vec.size();i++)cout<<vec[i]+1<<" ";
             if(vec.size())cout<<endl;
           }
        else if(vec2.size()%2!=0){
            cout<<vec2.size()<<endl;
               for(int i=0;i<vec2.size();i++)cout<<vec2[i]+1<<" ";
           if(vec2.size())cout<<endl;
        }
        else cout<<-1<<endl;
    }
}