#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int a,b,c;
    cin>>a>>b>>c;
    int count=0,max,min;
    if(a>=b) 
    {
        max=a;
        min=b;
    }
    else
    {
        max=b;
        min=a;
    }
    while(max>min)
    {
        max=max-c;
        min=min+c;
        count++;
        if(max==min)break;
    }
    cout<<count<<endl;
    
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
