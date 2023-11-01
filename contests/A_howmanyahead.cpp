#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a[4],spam=0,count=0;
        for(int i=0;i<4;i++)
        {
            cin>>a[i];
        }
        spam=a[0];
        for(int i=1;i<4;i++)
        {
            if(spam<a[i])
            {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}