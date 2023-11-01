#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        char a[n];
        for(int i=0;i<n;i++)
        {
            cin>>a[i];
        }
        int aa=0,k=0,s=0,h=0,p=0,o=0,nn=0,b=0,u=0,r=0,e=0,v=0,z=0,i=0,f=0,d=0;
        for(int i=0;i<n;i++)
        {
           if(a[i]=='a')
           {
            aa++;
           }
           else if(a[i]=='k')
           {
            k++;
           }
           else if(a[i]=='s')
           {
            s++;
           }
           else if(a[i]=='h')
           {
            h++;
           }
           else if(a[i]=='p')
           {
            p++;
           }
           else if(a[i]=='o')
           {
            o++;
           }
           else if(a[i]=='n')
           {
            nn++;
           }
           else if(a[i]=='b')
           {
            b++;
           }
           else if(a[i]=='u')
           {
            u++;
           }
           else if(a[i]=='r')
           {
            r++;
           }
           else if(a[i]=='e')
           {
            e++;
           }
           else if(a[i]=='v')
           {
            v++;
           }
           else if(a[i]=='z')
           {
            z++;
           }
           else if(a[i]=='i')
           {
            i++;
           }
           else if(a[i]=='f')
           {
            f++;
           }
           else if(a[i]=='d')
           {
            d++;
           }
        }
        if(aa>=2 && k>=1 && s>=1 && h>=1) cout<<"Arigato akash vai\n";
        else if(aa>=1 && p>=1 && o>=1 && nn>=1) cout<<"Arigato apon vai\n";
        else if(aa>=3 && b>=2 && u>=1 && k>=1 && r>=1) cout<<"Arigato abubakar vai\n";
        else if(e>=1 && v>=1 && aa>=1 && nn>=1) cout<<"Arigato evan vai\n";
        else if(z>=1 && aa>=1 && h>=1 && i>=1 && d>=1) cout<<"Arigato zahid vai\n";
        else if(r>=1 && aa>=1 && f>=1 && i>=1) cout<<"Arigato rafi vai\n";
        else cout<<"Takaden\n";
    }
    return 0;
}