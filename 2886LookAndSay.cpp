#include<iostream>
using namespace std;

int main()
{				
	int linesum;
	string linenumber;
	cin>>linesum;
	for(int i=0;i<linesum;i++)
	{
		cin>>linenumber;
		string linechar;
		int charcount[1000]={0};
		int linelen;
		linelen=linenumber.length();
		int cursor=-1;
		for(int j=0;j<linelen;j++)
		{
			if(linechar[cursor]!=linenumber[j])
			{
				cursor++;
				linechar[cursor]=linenumber[j];
				charcount[cursor]=1;
			}
			else
				charcount[cursor]++;
		}
		for(int k=0;k<=cursor;k++)
		{
			cout<<charcount[k]<<linechar[k];
		}
		cout<<endl;
	}
}
	
