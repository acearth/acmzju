#include<fstream>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	int t,n;
	ifstream cin("a.txt");
	cin>>t;
	for(int i=0;i<t;i++)
	{
		cin>>n;
		for(int j=0;j<n;j++)
		{
			string t,u,strr;
			getline(cin,t);
			if(t.empty())
			{
				getline(cin,t);
			}
			int ds=0;
			int de=0;
			for(int k=0;k<t.length()+1;k++)
			{
				if(t[k]==' '||k==t.length())
				{
					u.clear();
					for(int v=ds;v<k;v++)
						u+=t[v];
					reverse(u.begin(),u.end());
					u+=' ';
					strr+=u;
					ds=k+1;
				}
				
			}
			string result;
			for(int cur=0;cur<strr.length()-1;cur++)
				result+=strr[cur];
			cout<<result<<endl;
			}
			if(i!=t-1)
				cout<<endl;
		}}	
