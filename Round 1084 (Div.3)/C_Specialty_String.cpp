#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        string s;
        cin>>s;
        stack<char>st;
        int i=0;
        while(i<n)
        {
            if(st.empty()) st.push(s[i]);
            else if(!st.empty() && st.top()==s[i])st.pop();
            else st.push(s[i]);
            i++;
        }
        if(st.empty())cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}