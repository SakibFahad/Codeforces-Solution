#include<bits/stdc++.h>
using namespace std;
const int N = 109;

int n;
int s[N],e[N];

void solve()
{
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>s[i]>>e[i];
    }
    int ok=0;
    for(int i=1;i<n;i++)
    {
        if(s[i]>=s[0] && e[i]>=e[0])
        {
            ok = 0;
            break;
        }
        else 
        {
            ok=1;
        }
    }
    if(ok==0)
    {
        cout<<"-1\n";
    }
    else cout<<s[0]<<endl;
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