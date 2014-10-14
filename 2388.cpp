#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;
	int seq=0;
	cin>>n;
	{
		for(int i=0;i<n;i++)
		{
			int rp,rn,rr;
			cin>>rp>>rn;
			rr=abs(rp-rn);
			if(rp<rn)
			{
				cout<<"impossible"<<endl;
				continue;
			}
			if((rp+rn)%2!=0||rr%2!=0)
			{
				cout<<"impossible"<<endl;
				continue;
			}
			
			int ra,rb;
			ra=(rp+rn)/2;
			rb=rr/2;
			cout<<(ra>rb?ra:rb)<<" ";
			cout<<(ra>rb?rb:ra)<<endl;
		}
	}
}
