#include<vector>
#include<algorithm>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	int m;
	vector<string> v,vs;
	string s,left,right;
	ifstream cin("in");
	int line=0;
	while(cin>>m)
	{
		v.clear();
		for(int i=0;i<m;i++)
		{
			cin>>s;
			v.push_back(s);
		}
		int n,k;
		cin>>n;
		vs.clear();
		for(int i=0;i<n;i++)
		{
			cin>>s;
			int j=0;
			if(s[j]!='*')
				j++;
			for(k=0;k<j;k++)
				left+=s[k];
			for(k=s.length()-1;k>j;k--)
				right+=s[k];
			for(k=0;k<v.size();k++)
			{
				if(v[k].find(left)==0)
				{
					reverse(v[k].begin(),v[k].end());
					if(v[k].find(right)==0)
					{
						reverse(v[k].begin(),v[k].end());
						vs.push_back(v[k]);
					}
				}
			}
		}
		line++;
		if(line>1)
			cout<<endl;
		if(vs.size()==0)
			cout<<"FILE NOT FOUND"<<endl;
		else
		{
			for(k=0;k<vs.size();k++)
			{
				cout<<vs[k];
				if(k<vs.size()-1)
				cout<<", ";
			}
			cout<<endl;
		}
	}
}
