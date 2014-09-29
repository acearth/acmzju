#include<iostream>
using namespace std;

int main()
{
	int casenum;
	cin>>casenum;
	for(int i=0;i<casenum;i++)
	{
		int wca,wcb;
		string abbra,abbrb;
		string stri;
		cin>>wca;
		for(int j=0;j<wca;j++)
		{
			cin>>stri;
			abbra+=stri[0];
		}
		cin>>wcb;
		for(int k=0;k<wcb;k++)
		{
			cin>>stri;
			abbrb+=stri[0];
		}
		
//		cout<<abbra<<":::"<<abbrb<<endl;
		if(abbra==abbrb)
			cout<<"SAME"<<endl;
		else
			cout<<"DIFFERENT"<<endl;

	}
}

		
