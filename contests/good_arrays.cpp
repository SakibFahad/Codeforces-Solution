#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long int a=0,b=0;

    for(int i=0;i<n;i++)
    {
        long long int x;
        cin>>x;
        if(x==1) a+=2;
        else a++;

        b+=x;
    }
    if(n==1) cout<<"NO\n";
    else if(a<=b) cout<<"YES\n";
    else cout<<"NO\n";
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