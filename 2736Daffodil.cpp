#include<iostream>
using namespace std;
int main()
{
	string s;
	while(cin>>s)
	{
		int cubsum=0;
		int t;
		int realsum=0;
		for(int i=0;i<s.length();i++)
		{
			realsum*=10;
			t=s[i]-'0';
			cubsum+=t*t*t;
			realsum+=t;
		}
	//	cout<<realsum<<":"<<cubsum<<endl;
		if(realsum==cubsum)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
}		
		
			
