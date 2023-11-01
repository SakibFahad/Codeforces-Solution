#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0;
        cin>>n;
        char a[n],b[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        for(int j=0;j<n;j++)
        {
            cin>>b[j];
        }
        for(int i=0,j=0;i<n,j<n;i++,j++)
        {
            if(a[i]==b[j] || a[i]=='G'&& b[j]=='B' || a[i]=='B' && b[j]=='G')
            {
                count++;
            }
        }
        if(count==n) cout<<"YES\n";
        else cout<<"NO\n";
        count=0; 
    }
    return 0;
}