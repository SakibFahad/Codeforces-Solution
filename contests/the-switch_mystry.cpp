#include<bits/stdc++.h>
using namespace std;
int main() 
{
    int t;
    cin>>t;
    while (t--) 
    {
        long long int n;
        cin>>n;
        long long int c=0;
        if(n%2==0)
        {
            cout<<(n/2)<<endl;
        }
        else
        {
            cout<<(n/2)+1<<endl;
        }
    }
    return 0;
}






