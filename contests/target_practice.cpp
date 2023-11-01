#include<bits/stdc++.h>
using namespace std;

void solve()
{
    int sum=0,a[10],summ=0;
    for(int i=1;i<=10;i++)
    {
        string s;
        cin>>s;
        if(s[0]=='X') sum=sum+1;
        if(s[1]=='X') sum=sum+2;
        if(s[2]=='X') sum=sum+3;
        if(s[3]=='X') sum=sum+4;
        if(s[4]=='X') sum=sum+5;
        if(s[5]=='X') sum=sum+5;
        if(s[6]=='X') sum=sum+4;
        if(s[7]=='X') sum=sum+3;
        if(s[8]=='X') sum=sum+2;
        if(s[9]=='X') sum=sum+1;
        a[i-1]=sum;
        sum=0;
    }
    for(int i=0;i<10;i++)
    {
        summ=summ+a[i];
    }
    cout<<summ<<endl;
}

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        solve();
    }
}