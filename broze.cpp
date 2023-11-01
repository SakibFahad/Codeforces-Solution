#include<bits/stdc++.h>
using namespace std;
int main()
{
    char s[201];
    cin>>s;
    for(int i=0;i<strlen(s);i++)
    {
        if(s[i]=='.')
        {
            cout<<0;
        }
        else if(s[i]=='-' && s[i+1]=='.')
        {
            cout<<1;
            i++;
        }
        else if(s[i]=='-' && s[i+1]=='-')
        {
            cout<<2;
            i++;
        }
    }
    return 0;
}