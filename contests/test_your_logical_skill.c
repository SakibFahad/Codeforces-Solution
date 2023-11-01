#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int n,i,count=0,result;
        scanf("%d",&n);
        int A[n];
        for(i=1;i<=n;i++)
        {
            scanf("%d",&A[i]);
        }
        for(i=1;i<=n;i++)
        {
            if(A[i]<=7)
            {
                count=count+1;
            }
            result=i;
            if(count==7)
            {
                break;
            }
        }
        printf("%d\n",i);
    }
    return 0;
}