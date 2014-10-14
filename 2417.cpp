#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n,num;
	while(cin>>n)
	{
		num=0;
		if(n==0)break;
		while(n%2!=1)
		{
			num++;
			n=n/2;
		}
		cout<<pow(2.0,num*1.0)<<endl;
	}
}
