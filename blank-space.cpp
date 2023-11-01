#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int maxx=0,p=0;
        for(int i=0;i<n;i++)
        {
            if(a[i]==0)
            {
                p++;
            }
            else
            {
                maxx=max(maxx,p);
                p=0;
            }
        }
        cout<<max(maxx,p)<<endl;
    }
    return 0;
}