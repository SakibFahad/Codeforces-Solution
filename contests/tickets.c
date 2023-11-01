#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        if(m>n)
        {
            printf("%d\n",m-n);
        }
        else if(m<=n)
        {
            printf("%d\n",0);
        }
    }
    return 0;
}