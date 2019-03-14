#include<bits/stdc++.h>
using namespace std;
main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test,len;
	cin>>test;
	while(test--)
	{
		char s[100000];
		int a=0,b=0,k=0,temp=0;
		cin>>s;
		len=strlen(s);
		for(int i=0;i<len;i++)
		{
			if(s[i]=='A')
			{
				if(k==1)
				{
					a=a+temp;
				}
				a++;
				k=1;
				temp=0;
			}
			else if(s[i]=='B')
			{
				if(k==2)
				{
					b=b+temp;
				}
				b++;
				k=2;
				temp=0;
			}
			else if(s[i]=='.')
			{
				if(k!=0)
				{
					temp++;
				}
			}
		}
		cout<<a<<" "<<b<<endl;
	}
}
