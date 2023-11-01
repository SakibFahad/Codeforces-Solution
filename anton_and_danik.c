#include<stdio.h>
int main()
{
    int n,i,a=0,d=0;
    scanf("%d",&n);
    char s[n];
    scanf("%s",s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='A')
            a++;
        else if(s[i]=='D')
            d++;
    }
    if(a>d)    printf("Anton\n");
    else if(a<d)    printf("Danik\n");
    else if(a==d)   printf("Friendship\n");
    return 0;
}