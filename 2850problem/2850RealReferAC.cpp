#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("a.txt");
	int n,m;
	int i,j,k;
	int seq=1;
	while(cin>>n>>m)
	{
		int a[n][m];
		if(n==0&&m==0)
			break;
		//cout<<seq<<"::"<<m<<n<<endl;
		int flag=1;//1 stands for grass
		for(i=0;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				cin>>a[i][j];
				if(a[i][j]==0)
					flag=0;
			}
		}
		if(flag==1)
		{
			cout<<"No"<<endl;
			continue;
		}
		
		for(k=1;k<m;k++)
		{
			if(a[0][k]==0&&a[0][k-1]==0)
			{
				cout<<"No"<<endl;
				goto RL;
			}
		}
		
		for(i=1;i<n;i++)
		{
			for(j=0;j<m;j++)
			{
				if(a[i][j]==0&&a[i-1][j]==0)
				{
					cout<<"No"<<endl;
					goto RL;
				}
				if(j!=0)
				{
					if(a[i][j]==0&&a[i][j-1]==0)
					{
						cout<<"No"<<endl;
						goto RL;
					}
				}
			}
		}
		cout<<"Yes"<<endl;
		continue;
	RL:
		continue;
	}
	return 0;
}
