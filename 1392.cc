#include<iostream>
#include<fstream>
#include<map>
using namespace std;

int main()
{
	ifstream cin("a.txt");
	//map<char,char> m;
	string istr;
	while(cin>>istr)
	{
		if(istr=="START")
		{
			char cstr[255];
			string str;
			cin.ignore(10,'\n');
			cin.getline(cstr,255,'\n');
			str=cstr;
			for(int i=0;i<str.length();i++)
			{
				if(str[i]>64&&str[i]<91)
				{
					int offs;
					offs=(str[i]-'A'+21)%26;
					str[i]='A'+offs;
				}
			}
			cout<<str<<endl;
		}
		if(istr=="END")
			continue;
		if(istr=="ENDOFINPUT")
			break;
	}
}
