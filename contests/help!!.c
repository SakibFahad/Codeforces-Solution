#include<stdio.h>
int main()
{
    int q;
    scanf("%d",&q);
    while(q--)
    {
        int n,t,i,j;
        scanf("%d %d",&n,&t);
        int a[n],b[n];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&a[i]);
        }
        for(i=1;i<=n;i++)
        {
            scanf("%d",&b[i]);
        }
        int p=-1;
        int r=0;
        for(i=1;i<=n;i++)
        {
            if(a[i]+(i-1)<=t)
            {
                if(b[i]>r)
                {
                    p=i;
                    r=b[i];
                }
            }
        }
        printf("%d\n",p);
    }
    return 0;
}