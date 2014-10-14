#include<map>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("a.txt");
	map<string,int>m;
	string s;
	map<string,int>::iterator it1,it2;
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		m.clear();
		
		for(int i=0;i<n;i++)
		{
			cin>>s;
			if(m.find(s)!=m.end())
				m[s]++;
			else
				m[s]=1;
		}
		it2=m.begin();
		for(it1=m.begin();it1!=m.end();it1++)
		{
			if(it2->second<it1->second)
				it2=it1;
		}
		cout<<it2->first<<endl;
	}
}
