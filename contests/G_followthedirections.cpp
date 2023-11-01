#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x=0,y=0,ans=0;
        cin>>n;
        char A[n];
        for(int i=0;i<n;i++)
        {
            cin>>A[i];
        }
        for(int i=0;i<n;i++)
        {
            if(A[i]=='U')
            {
                x=x+1;
            }
            else if(A[i]=='D')
            {
                x=x-1;
            }
            else if(A[i]=='L')
            {
                y=y-1;
            }
            else if(A[i]=='R')
            {
                y=y+1;
            }
            if(x==1 && y==1)
            {
                ans=1;
                break;
            }
            else
            {
                ans=0;
            }
        }
        if(ans==1)
        {
            cout<<"YES\n";
        }
        else 
        {
            cout<<"NO\n";
        }
    }
    return 0;
}