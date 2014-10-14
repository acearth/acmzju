#include<fstream>
#include<map>
#include<iostream>
#include<algorithm>
using namespace std;
int main()
{
	map<char,int> m;
	map<int,char> mr;
	for(int i=0;i<10;i++)
	{
		m['0'+i]=i;
		m['a'+i]=i+10;
		mr[i]='0'+i;
	}
	for(int i=10;i<20;i++)
		mr[i]='a'+i-10;
	ifstream cin("a.txt");
	string a,b;
	while(cin>>a>>b)
	{
		reverse(a.begin(),a.end());	
		reverse(b.begin(),b.end());	
		if(a.length()<b.length())
		{
			string t;
			t=a;a=b;b=t;
		}
		int i,t,sum=0,tag=0;
		string r,re;
		for(i=0;i<a.length();i++)
		{
			if(i>=b.length())
				t=m[a[i]]+tag;
			else
				t=m[a[i]]+m[b[i]]+tag;
			r+=mr[t%20];
			tag=t/20;
		}
		if(tag==1)
			r+='1';
		reverse(r.begin(),r.end());
		cout<<r<<endl;
	}
}		
