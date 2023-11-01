#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,j=0;
        cin>>n;
        string s;
        cin>>s;
        char a[5];
        for(int i=0;i<n;i++)
        {
            if(s[i]=='m' || s[i]=='M')
            {
                for(int j=0;j<5;j++)
                {
                if(a[j]!=s[i])
                {
                    a[j]=s[i];
                    break;
                }
                }
            }
            else if(s[i]=='e' || s[i]=='E')
            {
                 if(a[j]!=s[i])
                {
                    a[j]=s[i];
                    j++;
                }
            }
        }
    }
}