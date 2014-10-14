#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int round=0;
		while(n>1)
		{
			int r=n%2;
			n/=2;
			n+=r;
			round++;
		}
		cout<<round<<endl;
	}
}
