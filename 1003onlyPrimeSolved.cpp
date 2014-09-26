#include<iostream>
using namespace std;
int p[25]={2,3,5,7,11, 13,17,19,23,29, 31,37,41,43,47, 53,59,61,67,71, 73,79,83,89,97};

int factor(int num, int f[])
{
	int	fcount=0;
	for(int i=0;i<25;i++)
	{
		if(num%p[i]==0)
		{
			num=num/p[i];
			f[fcount]=p[i];
			fcount++;
			cout<<p[i]<<"(factor) ";
		}
	}
	cout<<"Finished"<<endl;
	return fcount;
}

int main()
{
	int m,n;
	int mfcount,nfcount;
	int mf[100],nf[100];
	int flag=0;

	while(cin>>m>>n)
	{
		int publicFactor[100]={0};
		int currentKey;
		mfcount=factor(m,mf);
		nfcount=factor(n,nf);
		cout<<"Factors have been calculated!"<<endl;
		for(int i=0;i<mfcount;i++)
		{
			currentKey=mf[i];
			publicFactor[currentKey]=999;
			cout<<publicFactor[currentKey]<<" ";
		}
		for(int i=0;i<nfcount;i++)
		{
			currentKey=nf[i];
			if(publicFactor[currentKey]==999)
			{
				flag=1;
			}
		}
		if(flag==1)
		{
			cout<<(m>n?n:m)<<endl;
		}
		else
			cout<<(m>n?m:n)<<endl;
	}
}
