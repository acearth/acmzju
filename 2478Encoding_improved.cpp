#include<iostream>
using namespace std;

int main()
{
	int linenum;
	string st[100];
	cin>>linenum;
	for(int i=0;i<linenum;i++)
	{
		cin>>st[i];
	}
	
	for(int i=0;i<linenum;i++)
	{
		string stsub;
		int charsum[100]={0};
		int cur=-1;
		for(int j=0;j<st[i].length();j++)
		{
			if(st[i][j]!=stsub[cur])
			{
				cur++;
				charsum[cur]=1;
				stsub[cur]=st[i][j];
			}
			else
			{
				charsum[cur]++;
			}
		}
		for(int k=0;k<=cur;k++)
		{
			if(charsum[k]==1)
			{
				cout<<stsub[k];
			}
			else
				cout<<charsum[k]<<stsub[k];
		}
		cout<<endl;
	}
}
