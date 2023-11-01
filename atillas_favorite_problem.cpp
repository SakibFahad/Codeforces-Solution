#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,max=0,i;
        cin>>n;
        char s[n];
        cin>>s;
        max=s[0];
        for(i=1;i<n;i++)
        {
            if(max<s[i])
            {
                max=s[i];
            }
        }
        cout<<max-96<<endl;
    }
    return 0;
}