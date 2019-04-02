#include<bits/stdc++.h>
using namespace std;
using ll=long long;

main()
{
	ios::sync_with_stdio(0);
	cin.tie(0);
	int test,n,mul,ans;
	cin>>test;
	while(test--)
	{
		ans=0;
		cin>>n;
		mul=5;
		while(n/mul>=1)
		{
			ans=ans+n/mul;
			mul=mul*5;
		}
		cout<<ans<<"\n";
	}
}
