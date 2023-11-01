#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k,r,i=1,p;
    cin>>k>>r;
   for (i=1; ; i++)
    {
        p = k*i;
        if (p % 10 == 0 || p % 10 == r)
        {                
            cout<<i;
            break;
        }
    }
    return 0;
}