#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,count=0,i=0;
        cin>>n;
        string s;
        cin>>s;
        while(i<n && s[i]=='m' || s[i]=='M')
        {
            count=1;
            i++;
        }
        if(count!=1)
        {
            cout<<"NO\n";
            return;
        }
        while(i<n && (s[i]=='e' || s[i]=='E'))
        {
            count=2;
            i++;
        }
        if(count!=2)
        {
            cout<<"NO\n";
            return;
        }
        while(i<n && (s[i]=='o' || s[i]=='O'))
        {
            count=3;
            i++;
        }
        if(count!=3)
        {
            cout<<"NO\n";
            return;
        }
        while(i<n && (s[i]=='w' || s[i]=='W'))
        {
            count=4;
            i++;
        }
        if(count!=4)
        {
            cout<<"NO\n";
            return;
        }

    }
}