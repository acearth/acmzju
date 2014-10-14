#include<bitset>
#include<cstdio>
#include<map>
#include<iostream>
using namespace std;
int main()
{
	int n,i;
	map<bool,string> m;
	m[false]="no\n";
	m[true]="yes\n";
	bitset<1000000> b;
	for(i=2;i<1000000;i+=4)
		b[i]=true;
	while(~scanf("%d",&n))
	{
		cout<<m[b[n]];
	//	printf("%s\n",m[b[n]]);
	}
}

