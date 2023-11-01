#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int ans=0;
        char letter;
        cin>>letter;
        char str[100]={"codeforces"};
        for(int i=0;i<strlen(str);i++)
        {
            if(letter==str[i])
            {
                ans=1;
                break;
            }
        }
        if(ans==1) cout<<"YES\n";
        else if(ans==0) cout<<"NO\n";
    }
    return 0;
}