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
        int temp,count=0;
        for(int i=0;i<n;++i)
        {
            if(a[i]==(i+1))
            {
                count++;
            }
        }
        cout<<(count/2)+(count%2)<<endl;
    }
}