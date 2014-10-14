#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
	int casenum;
	cin>>casenum;
	cin.ignore(10,'\n');
	//cout<<casenum<<endl;
	char ch[77];
	for(int i=0;i<casenum;i++)
	{
		cin.getline(ch,77);
		
		string str=ch;
	//	cout<<str.length()<<endl;
	//	cout<<str<<endl;
		reverse(str.begin(),str.end());
		cout<<str<<endl;
	}
}
