#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    cin>>n>>k;
    int a[n],count=0;
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    for(int i=0;i<n;i++)
    {
        if(a[i]==k) count=1;
    }
    if(count==0) cout<<"NO\n";
    else cout<<"YES\n";
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