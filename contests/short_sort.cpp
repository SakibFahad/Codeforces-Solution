#include<bits/stdc++.h>
using namespace std;

void solve()
{
    string s;
    cin>>s;
    if(s[0]=='a' && s[1]=='b' && s[2]=='c') cout<<"YES\n";
    else if(s[0]=='a' && s[1]=='c' && s[2]=='b') cout<<"YES\n";
    else if(s[0]=='b' && s[1]=='a' && s[2]=='c') cout<<"YES\n";
    else if(s[0]=='b' && s[1]=='c' && s[2]=='a') cout<<"NO\n";
    else if(s[0]=='c' && s[1]=='a' && s[2]=='b') cout<<"NO\n";
    else if(s[0]=='c' && s[1]=='b' && s[2]=='a') cout<<"YES\n";
}    


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}