#include<iostream>
#include<string>
using namespace std;

int main()
{
	int linecount;
	string st[100];
	cin>>linecount;
	for(int i=0;i<linecount;i++)
	{
		cin>>st[i];
	}

	for(int i=0;i<linecount;i++)
	{
		int charsum[26]={0};
		int cur;
		for(int j=0;j<st[i].length();j++)
		{
			cur=st[i][j]-'A';
			charsum[cur]++;
		}
		for(int k=0;k<26;k++)
		{
			if(charsum[k]==1)
			{
				cout<<char(k+'A');
			}
			if(charsum[k]>1)
			{
				cout<<charsum[k]<<char(k+'A');
			}
		}
		cout<<endl;
	}
}
