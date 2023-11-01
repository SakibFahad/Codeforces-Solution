#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int t;
    cin>>t;
    while(t--)
    {
    long long int m,n,b,c,d,i,j,k,x,y,z,l,q,r;
    string s,s1, s2, s3, s4;

    long long int cnt=0,cn=0,ans=0,sum=0 ;


    long long int a;
    cin>>a>>b>>c>>d;
    long long int dif=c-d;

    if(b>=a)ans=b;
    else if(dif<=0)ans=-1;
    else
    {
        a-=b;
        long long int tmp=a/dif ;
        if(a%dif)tmp++;

        ans=b+ c*tmp;
    }

    cout<<ans<<endl;
    }

return 0;
}