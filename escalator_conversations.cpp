#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,k,H;
        cin>>n>>m>>k>>H;
        int ans=0;
        for(int i=1;i<=n;++i)
        {
            int x;
            cin>>x;
            if(H!=x && (abs(H-x)%k==0) && (abs(H-x)<=(m-1)*k))
            {
                ans=ans+1;
            }
        }
        cout<<ans<<endl;
    }
}