#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,q;
        cin>>n>>q;
        int l[q],r[q],sum[100];
        long long int x[q];
        int min=1,max2=0;
        for(int i=0;i<n;i++)
        {
            cin>>l[i]>>r[i]>>x[i];
            for(int j=l[i];j<=r[i];j++)
            {
                sum[i]=sum[i]+x[i];
            }
            if(r[i]>=max2) max2=r[i];
        }
        for(int k=0;k<max2;k++)
        {
            cout<<sum[k]<<" ";
        }
        cout<<endl;
    }
}