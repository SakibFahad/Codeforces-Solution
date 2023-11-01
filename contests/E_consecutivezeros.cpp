
#include<bits/stdc++.h>
using namespace std;
long long int mclimbs(long long int n) 
{
    long long int f= 5;
    long long int c=0;
    while (n>f)
     {
        c=c+2;
        n=n-f;
    }
    if (n > 0)
        c=c+1;
    return c;
}
int main() 
{
    int t;
    scanf("%d", &t);
    while (t--) 
    {
        long long int n;
        scanf("%lld", &n);
        long long int minimumclimb=mclimbs(n);
        printf("%lld\n", minimumclimb);
    }
    return 0;
}