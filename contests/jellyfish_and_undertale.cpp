#include<bits/stdc++.h>
using namespace std;

int solve1(long long int mini,long long int count)
{
    while(mini>1)
    {
        count++;
        --mini;
    }
    return count;
}

void solve()
{
    int n;
    long long int a,b,x[n],count=0,mini,sum=0,ans,anss=0;
    cin>>a>>b>>n;
    for(int i=0;i<n;i++)
    {
        cin>>x[i];
    }
    mini=b;
    for(int i=0;i<n;i++)
    {
        mini=mini+x[i];
        if(a<=mini)
        {
            ans=solve1(a,count);
            anss=anss+ans;
        }
    }
    cout<<(anss+1)<<endl;

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