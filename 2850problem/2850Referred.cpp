#include<iostream>
#include<fstream>
using namespace std;
int main()
{
//	ifstream cin("a.txt");
	int m,n;
	int i,j,k;
	int flag;
	int mowed;
	while(cin>>m>>n)
	{
		int a[m][n];
		if(n==0&&m==0)
			break;
		flag=1;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==0)
					flag=0;
			}
		//	if(flag==1)
			
			for(k=1;k<n;k++)
			{
				if(a[0][k]==0&&a[0][k-1]==0)
				{
					if(flag==0)
					//	cout<<"Flag has been changed"<<endl;
					flag=0;	
				}
				for(i=1;i<m;i++)
				{
					for(j=0;j<n;j++)
					{
						if(a[i][j]==0&&a[i-1][j]==0)
						{
							if(flag==0)
					//			cout<<"Flag has been changed"<<endl;
							flag=0;	
						}
						if(j!=0)
						{
							if(a[i][j]==0&&a[i][j-1]==0)
							{
								if(flag==0)
					//				cout<<"Flag has been changed"<<endl;
								flag=0;	
							}
						}
					}
				}
			}
		}
		if(flag==0)
			cout<<"No"<<endl;
		else
			cout<<"Yes"<<endl;
	}
}
