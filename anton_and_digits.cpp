#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int k1,k2,k3,k4,ans=0;
    cin >> k1 >> k2 >> k3 >> k4;
    long long int one = min(k1 , min(k3 , k4));
    long long int two = min(k1-one , k2);
    for(long long int i = 1 ; i <= one ; i++)
    {
        ans = ans + 256;
    }
    for(long long int i = 1 ; i <= two ; i++)
    {
        ans = ans + 32;
    }
    cout << ans << endl ;

}