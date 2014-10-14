#include<iostream>
#include<fstream>
#include<set>
using namespace std;
int main()
{
	int deg;
	//ifstream cin("a.txt");
	
	int seq=0;
	while(cin>>deg)
	{
		if(deg==0)
			break;
		seq++;
		set<int> s;
		bool eq=true;
		int a[deg][deg];
		int lsum=0;
		for(int i=0;i<deg;i++)
		{
			for(int j=0;j<deg;j++)
			{
				cin>>a[i][j];
				if(j==i)
					lsum+=a[i][j];	
			}
		}
//		cout<<lsum<<"LSUM"<<endl;
		for(int i=0;i<deg;i++)
			for(int j=0;j<deg;j++)
				s.insert(a[i][j]);
//		cout<<"size"<<s.size()<<endl;
		bool isrep;
		if(s.size()!=deg*deg)
			isrep=true;
		else
			isrep=false;
		for(int i=0;i<deg;i++)
		{
			int test=0;
			for(int j=0;j<deg;j++)
			{
				test+=a[i][j];
			}
			if(test!=lsum)
				eq=false;
		}
		
		for(int i=0;i<deg;i++)
		{
			int test=0;
			for(int j=0;j<deg;j++)
			{
				test+=a[j][i];
			}			
			if(test!=lsum)
				eq=false;
		}
		int testc=0;
		for(int i=0;i<deg;i++)
		{
			int k=deg-i-1;
			testc+=a[i][k];
		}
		if(testc!=lsum)
			eq=false;
/*		if(eq==false)
			cout<<"eq is false"<<endl;
		if(isrep==true)
			cout<<"repeated"<<endl;*/
		//cout<<seq<<"---------------------"<<endl;
		if(eq==true&&isrep==false)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
}
}				

