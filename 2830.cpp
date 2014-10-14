#include<iostream>
#include<cmath>
using namespace std;

int main()
{
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		int ceiln,restn;
		int cxpn;
		cxpn=ceil(log(n)/log(3));
		restn=pow(3,cxpn)-n;
//		cout<<"rest"<<restn<<endl;
			
		
		int fullnumc;
		fullnumc=(pow(3,cxpn)-1)/2;
//		cout<<"fullnumc="<<fullnumc<<endl;
		int hyponumc=0;
		while(restn>0)
		{
			int remain=restn;
			restn/=3;
			hyponumc+=restn;
			if((remain-restn*3)>1)
				hyponumc++;
//			cout<<"hyponumc="<<hyponumc<<endl;
		}
		cout<<fullnumc-hyponumc<<endl;
	}
}


