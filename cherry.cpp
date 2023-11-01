#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
        long long n;
        cin>>n;
        long long int prev=0,res=0,i;
        for(i=0;i<n;i++)
        {
            long long int x;
            cin>>x;
            long long prod=x*prev;
            res=(res>prod)?res:prod;
            prev=x;
        }
        cout<<res<<endl;
    }
}