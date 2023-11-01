#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while (t--)
    {
        int n;
        cin>>n;
        int a[n];
        for (int i = 0; i < n; ++i) 
        {
            cin>>a[i];
        }
        int found=false;
        for (int i = 1; i <n-1 ; ++i) {
            if (a[i]!=a[i-1] && a[i]!=a[i+1])
            {
                cout<<i+1<<"\n";
                found=true;
            }
        }
        if (!found){
            if (a[0]!=a[1]){
                cout<<1<<"\n";
            } else{
                cout<<n<<"\n";
            }
        }
    }
    return 0;
}