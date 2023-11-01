#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,k;
    cin>>n;
        if(n%2!=0) k=((n+1)/2)*(-1);
        else if(n%2==0) k=n/2;
    cout<<k<<endl;
}