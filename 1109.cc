#include<fstream>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	string mean,entry,s;
	map<string,string> m;
	ifstream cin("a.txt");
	while(getline(cin,s))
	{
		mean.clear();
		entry.clear();
		if(s[0]=='\0')
			break;
		int i;
		for(i=0;s[i]!=' ';i++)
			mean+=s[i];
			mean[i]='\0';
		for(i++;i<s.length();i++)
			entry+=s[i];
			entry[i]='\0';
		m[entry]=mean;
	}
	while(cin>>s)
	{
		if(m[s].empty()==false)
			cout<<m[s]<<endl;
		else
			cout<<"eh"<<endl;
	}
	return 0;
}
