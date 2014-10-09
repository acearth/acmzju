#include<iostream>
using namespace std;

int main()
{
	char ch[80];
	string str;
	while(cin.getline(ch,80))
	{
		str=ch;
		int len=str.length();
		int t;
		if(ch[0]=='#')
			break;
		for(int i=0;i<len;i++)
		{
			t=str[i];
			t=t>>4;
			if(t==2)
			{
				int tt;
				tt=(int)str[i];
//				cout<<"*"<<tt<<endl;
				if(tt==32||tt==33||tt==36||tt==37||tt==40||tt==41||tt==42)
					cout<<hex<<"%"<<(int)str[i];	
				else
					cout<<str[i];
			}
			else
				cout<<str[i];
		}
		cout<<endl;
	}
}

