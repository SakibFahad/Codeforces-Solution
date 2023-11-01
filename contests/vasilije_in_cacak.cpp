#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n,k;
    long long int x;
    cin>>n>>k>>x;
    long long int sum=0;
    if(n>x) cout<<"NO\n";
    else
    {
    for(int i=n;i>=1;i--)
    {
        if((sum+i)<=x && k>0)
        {
            sum=sum+i;
            k--;
        }
    }
    if(sum==x && k>=0) cout<<"YES\n";
    else cout<<"NO\n";
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