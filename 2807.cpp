#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	int casenum;
	ifstream cin("a.txt");
	cin>>casenum;
	for(int i=0;i<casenum;i++)
	{
		int k;
		cin>>k;
		int a[k];
		int count=0;
		for(int i=0;i<k;i++)
		{
			cin>>a[i];
			count+=a[i];
		}
	//	cout<<count<<"count"<<endl;
		cout<<count-k+1<<endl;
	}
}
