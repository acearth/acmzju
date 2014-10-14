#include<iostream>
#include<fstream>
#include<algorithm>
#include<vector>
#include<string>
using namespace std;

bool comp(const string &s1,const string &s2)
{
	int c1=0,c2=0;
	for(int i=0;i<s1.length();i++)
		for(int j=i+1;j<s1.length();j++)
			if(s1[i]>s1[j])
				c1++;
	for(int i=0;i<s2.length();i++)
		for(int j=i+1;j<s2.length();j++)
			if(s2[i]>s2[j])
				c2++;
	return c1<c2;//modify this sentence
}

int main()
{
	ifstream cin("a.txt");
	string s;
	vector<string>v;
	int n,a,b;
	cin>>n;
	int i,j,k;
	int p=0;
	for(i=0;i<n;i++)
	{
		cin.clear();
		cin>>a>>b;
		v.clear();
		p++;
		for(j=0;j<b;j++)
		{
			cin>>s;
			v.push_back(s);
		}
		sort(v.begin(),v.end(),comp);
		if(p!=1)
			cout<<endl;
		for(k=0;k<v.size();k++)
			cout<<v[k]<<endl;
	}
}
