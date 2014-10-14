#include<iostream>
#include<fstream>
#include<set>

using namespace std;

int main()
{
	ifstream cin("a.txt");
	set<int> s;
	set<int>::iterator it,itt;
	int a;
	while(cin>>a)
	{
		if(a==-1)
			break;
		if(a!=0)
			s.insert(a);
		else
		{
			int count=0;
			for(it=s.begin();it!=s.end();it++)
			{
				if(s.find(2*(*it))!=s.end())
					count++;
			}
			cout<<count<<endl;
			s.clear();
		}
	}
}
					
