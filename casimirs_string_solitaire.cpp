#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int a=0,b=0,c=0;
        for(int i=0;i<50;i++)
        {
            if(s[i]=='A') a++;
            else if(s[i]=='B') b++;
            else if(s[i]=='C') c++;
            else if(s[i]=='\0')
            {
                break;
            }
        }
        if(b==(a+c))
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