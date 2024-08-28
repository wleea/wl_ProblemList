//只是一个蒟蒻
#include<bits/stdc++.h>
using namespace std;
int main()
{
	long long i=0,n,m,s=0;
	cin>>n>>m;
	if(m<=n)
	{
	  cout<<0;
	  return 0;
	}
	if(m%n==0)
	{
	  cout<<m/n;
	  return 0;
	}
	while(m>=s)
	{
	  i++;
	  s=s+n;  
	}
	 
	cout<<i;
	return 0;
}
