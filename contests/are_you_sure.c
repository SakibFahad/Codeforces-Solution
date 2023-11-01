#include<stdio.h>
int main()
{
    int n,count=0,c=0;
    scanf("%d",&n);
    while(n--)
    {
        int p,t,v;
        scanf("%d %d %d",&p,&t,&v);
        if((p==1&&t==1)||(p==1&&v==1)||(t==1&&v==1)||(p==1&&t==1&&v==1))
        {
            count=1;
        }
        if(count==1)
        {
            c++;
        }
        count=0;
    }
    printf("%d\n",c);
    return 0;
}