#include<iostream>
using namespace std;
int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int gamenum=0;
		int t,r;
		while(n>0)
		{
			if(n==1)
				break;
			if(n==2)
			{
				gamenum++;
				break;
			}
			
			t=n/3;
			r=n%3;
			gamenum+=t;
			n=t+r;
		}
		cout<<gamenum<<endl;
	}
}
