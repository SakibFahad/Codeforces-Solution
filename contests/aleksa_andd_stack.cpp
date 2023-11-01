#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int n;
    cin>>n;
    long long int a[n];
    a[0]=1;
    a[1]=2;
    for(int i=2;i<n;i++)
    {
        for(long long int k=a[1]+1;;k++)
        if((3*k)%(a[i-2]+a[i-1])!=0) 
        {
            a[i]=k;
            break;
        }
    }
    for(int i=0;i<n;i++)
    {
        cout<<a[i]<<" ";
    }
    cout<<endl;
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