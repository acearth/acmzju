#include<iostream>
//#include<fstream>
using namespace std;

int main()
{
//	ifstream cin("a.txt");
	int m,n;
	int seq=0;
	while(cin>>m>>n)
	{
		if(m==0&&n==0)
			break;
		seq++;
		int a[4][m][n];
		for(int k=0;k<3;k++)
			for(int i=0;i<m;i++)
				for(int j=0;j<n;j++)
					cin>>a[k][i][j];

		for(int i=0;i<m;i++)
			for(int j=0;j<n;j++)
				a[3][i][j]=0;
	/*	
		for(int k=0;k<3;k++)
		{
			cout<<"page #"<<k<<endl;	
			for(int i=0;i<m;i++)
			{
				for(int j=0;j<n;j++)
					cout<<a[k][i][j]<<" ";
				cout<<endl;
			}
		}
	*/
		for(int k=0;k<3;k++)
			for(int i=0;i<m;i++)
				for(int j=0;j<n;j++)
					a[3][i][j]+=a[k][i][j];

	
		cout<<"Case "<<seq<<":"<<endl;
		for(int i=0;i<m;i++)
		{
			bool tag=false;
			for(int j=0;j<n;j++)
			{
				if(tag==false)
				{
					tag=true;
					cout<<a[3][i][j]/3;
				}
				else
				cout<<","<<a[3][i][j]/3;		
			}
			cout<<endl;
		}
	}
}		
