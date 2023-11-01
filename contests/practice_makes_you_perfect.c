#include<stdio.h>
int main()
{
    int p1,p2,p3,p4,count=0;
    scanf("%d %d %d %d",&p1,&p2,&p3,&p4);
    if(p1>=10)
    {
        count=count+1;
    }
    if(p2>=10)
    {
        count=count+1;
    }
    if(p3>=10)
    {
        count=count+1;
    }
    if(p4>=10)
    {
        count=count+1;
    }
    printf("%d\n",count);
    return 0;
}