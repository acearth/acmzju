#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("a.txt");
	int m,n;
	while(cin>>m>>n)
	{
		if(m==0&&n==0)
			break;
//		cout<<m<<n<<"mn"<<endl;
		int i,j;
		int a[m][n];
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					cin>>a[i][j];
//		cout<<i<<":"<<j<<endl;
			bool adj=false;// false means its not good, we assumed its good.
			bool mowed=true;

// judge the main area is beautiful or not.
			for(i=0;i<m-1;i++)
				for(j=0;j<n-1;j++)
					if(a[i][j]==0)
						if(a[i+1][j]==0||a[i][j+1]==0)
						{
							adj=true;//found the bad point, marked it as false	
							//cout<<i<<":1:"<<j<<endl;
						}
//          judge the last column
			for(i=0;i<n-1;i++)
				if(a[i][n-1]==0)
					if(a[i+1][n-1]==0)
						{
							adj=true;//found the bad point, marked it as false	
						//	cout<<i<<":2:"<<j<<endl;
						}
//			judge the last row
			for(j=0;j<m-1;j++)
				if(a[m-1][j]==0)
					if(a[m-1][j+1]==0)
						{
							adj=true;//found the bad point, marked it as false	
						//	cout<<i<<":3:"<<j<<endl;
						}

// judge: Is the meadow mowed?
			for(i=0;i<m;i++)
				for(j=0;j<n;j++)
					if(a[i][j]==0)
						break;
			if(i==m&&j==n)
				mowed=false; 
			if(mowed==true)
				{
					if(adj==false)
						cout<<"Yes"<<endl;
					else
						cout<<"No"<<endl;
				}

			if(mowed==false)
				cout<<"No"<<endl;

	}
}		
