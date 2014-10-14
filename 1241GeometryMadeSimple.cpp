#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	double a[3];
	string b="abc";
	int seq=0;
	int i;
	while(cin>>a[0]>>a[1]>>a[2])
	{
		if(a[0]==0&&a[1]==0&&a[2]==0)
			break;
		seq++;
/*
		if(a[0]*a[1]*a[2]==0)
		{
			cout<<"Triangle #"<<seq<<endl;
			cout<<"Impossible."<<endl;
			cout<<endl;
			continue;
		}
*/
		for(i=0;i<3;i++)
			if(a[i]==-1)
				break;
		if(i==2)
			a[i]=a[1]*a[1]+a[0]*a[0];
		else
		{
			if(a[0]>a[2]||a[1]>a[2])
			{
				cout<<"Triangle #"<<seq<<endl;
				cout<<"Impossible."<<endl;
				cout<<endl;
				continue;
			}
			else
				a[i]=a[2]*a[2]-a[1-i]*a[1-i];
		}
		cout.precision(3);
		cout<<"Triangle #"<<seq<<endl;
		cout<<b[i]<<" = "<<fixed<<sqrt(a[i])<<endl;
		cout<<endl;
	}
}		
