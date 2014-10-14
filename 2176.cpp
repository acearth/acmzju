#include<iostream>
#include<fstream>

using namespace std;
int main()
{
	int n,i;
	fstream cin("a.txt");
	while(cin>>n)
	{
		if(n==-1)
			break;
		int speed[n],total[n];
		int d=0;
		for(i=0;i<n;i++)
		{
			cin>>speed[i]>>total[i];
			if(i==0)
				d=total[i]*speed[i];
			else
				d+=speed[i]*(total[i]-total[i-1]);
		}
		cout<<d<<" miles"<<endl;
	}
}
