#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,p=0,h;
        scanf("%d",&n);
        for(int i=0;i<n;i++)
        {
            scanf("%d",&h);
            if(h==1)
                p++;
        }
        printf("%d\n",n-(p/2));
    }
    return 0;
}