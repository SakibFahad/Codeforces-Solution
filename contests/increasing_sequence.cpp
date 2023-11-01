#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long int a[n],b[n];
    for(int i=0;i<n;i++)
    {
        cin>>a[i];
    }
    b[0]=1;
    for(int i=0;i<n;i++)
    {
        if(b[i]==a[i]) b[i]=b[i]+1;
        b[i+1]=b[i]+1;
    }
    cout<<b[n-1]<<endl;
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