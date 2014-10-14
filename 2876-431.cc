#include<iostream>
#include<vector>
#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("in");
	int t;
	string st;
	cin>>t;
	vector<string> v;
	for(int k=0;k<t;k++)
	{
		int n;
		cin>>n;
		v.clear();
		for(int i=0;i<n;i++)
		{
			cin>>st;
			v.push_back(st);
		}
		sort(v.begin(),v.end());
		bool exist=false;
		for(int i=0;i<n-1;i++)
			if(v[i+1].find(v[i])==0)
				exist=true;
		if(exist)
			cout<<"NO"<<endl;
		else
			cout<<"YES"<<endl;
	}
	return 0;
}
