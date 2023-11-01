#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    cin>>n;
    string a,b;
    cin>>a>>b;
    int count=0;
    for(int i=0;i<n;i++)
    {
        count=count+ min(10 - abs(a[i] - b[i]), abs(a[i] - b[i]));
    }
    cout<<count<<endl;
    return 0;
}