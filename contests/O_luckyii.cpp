#include<bits/stdc++.h>
using namespace std;
int main()
{
	char str[100];
    cin>>str;
    int i=0;
	while(1)
    {
		int count1=0,count2=0;
		for(i=0;str[i]!='\0';i++)
			if(str[i]=='4')
				count1++;
			else if(str[i]=='7')
				count2++;
		if(count1==0&&count2==0)
        {
			cout<<"-1"<<endl;
            break;
        }
		else if(count1>=count2)
        {
        	cout<<"4"<<endl;
            break;
        }
        else
        {
        	cout<<"7"<<endl;
            break;
        }
        i++;
        count1=0,count2=0;
	}
	return 0;
}