#include<fstream>
#include<cmath>
#include<iostream>
using namespace std;
int main()
{
	int b,n;
	int a;
	ifstream cin("a.txt");
	while(cin>>b>>n)
	{
		if(b==0)
			break;
		a=pow(b,1.0/n);
		int d1=abs(pow(a,n)-b);
		int d2=abs(pow(a+1,n)-b);
		if(d1>d2)
			cout<<a+1<<endl;
		else
			cout<<a<<endl;
	}
}	
