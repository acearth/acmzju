#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	fstream cin("a.txt");
	int degree;
	while(cin>>degree)
	{
		cout<<"degree:"<<degree<<endl;
		if(degree==0)
			continue;
		
		int a[degree][degree];
		for(int i=0;i<degree;i++)
			for(int j=0;j<degree;j++)
				cin>>a[i][j];
		int mean=0;
		int test=0;
		for(int i=0;i<degree;i++)
			mean+=a[i][i];
		cout<<mean<<"mean"<<endl;
		for(int i=0;i<degree;i++)
			test+=a[i][degree-i];
		
		cout<<test<<"test"<<endl;
		if(test!=mean)
		{
			cout<<"No"<<endl;
			continue;
		}
		
		for(int i=0;i<degree;i++)
		{
			test=0;
			for(int j=0;j<degree;j++)
				test+=a[i][j];	
		cout<<test<<"test"<<endl;
			if(test!=mean)
			{
				cout<<"No"<<endl;
				continue;	
			}
		}
		for(int j=0;j<degree;j++)
		{
			test=0;
			for(int i=0;i<degree;i++)
				test+=a[i][j];	
		cout<<test<<"test"<<endl;
			if(test!=mean)
			if(test!=mean)
			{
				cout<<"No"<<endl;
				continue;	
			}
		}
		if(test==mean)
			cout<<"Yes"<<endl;
	}
	return 0;
}
