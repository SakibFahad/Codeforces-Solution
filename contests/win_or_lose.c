#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int m,n;
        scanf("%d %d",&m,&n);
        if(m>(n*6*6))
        {
            printf("NO\n");
        }
        else if(m<=(n*6*6))
        {
            printf("YES\n");
        }
    }
    return 0;
}