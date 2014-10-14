#include<iostream>
using namespace std;
int main()
{
	int a[100000];
	int k=1;
	int i=3;
	while(k<100001)
	{
		if(i%3==0||i%5==0)
		{
			a[k]=i;
			k++;
			i++;
		}
		else
			i++;
	}
	int t;
	while(cin>>t)
		cout<<a[t]<<endl;
}
		
		
		
