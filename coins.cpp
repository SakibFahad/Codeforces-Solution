#include<bits/stdc++.h>
using namespace std;
 
void solve()
{
    long long int n,k;
    cin>>n>>k;
    if(n%2==0) cout<<"YES\n"<<endl;
    else 
    {
        if((n-k)%2==0) cout<<"YES\n"<<endl;
        else cout<<"NO\n"<<endl;
    }
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