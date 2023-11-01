#include<stdio.h>
#include<string.h>
int main()
{
	char s[101];
	scanf("%s",s);
	int flag1=0,flag2=0,flag3=0;
	if(strlen(s)>=5)
	{
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]>='A' && s[i]<='Z' && flag1==0)
		{
			flag1=1;
		}
		else if(s[i]>='a' && s[i]<='z' && flag2==0)
		{
			flag2=1;
		}
		else if(s[i]>='0'  && s[i] <='9' && flag3==0)
		{
			flag3=1;
		}
		if(flag1==1 && flag2==1 && flag3==1)
			break;
	}
	}
	if(strlen(s)>4 && flag1==1 && flag2==1 && flag3==1)
		printf("Correct\n");
	else
		printf("Too Weak\n");
	return 0;
}