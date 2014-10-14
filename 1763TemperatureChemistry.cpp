#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
	double a[2];
	bool flag=false;
	int i=0;
	while(cin>>a[i])
	{
//		cout<<i<<"<"<<endl;
		if(a[i]==999)
			break;
		if(flag==false)
		{
			i=1-i;
			flag=true;
			//cout<<"init"<<endl;
			continue;
		}
		else
		{
			cout.precision(2);
//			cout<<a[i]<<"now i"<<endl;
//			cout<<a[1-i]<<"reversed i"<<endl;
//			cout<<fixed<<a[i]-a[1-i]<<endl;
			printf("%.2f\n",a[i]-a[1-i]);
			i=1-i;
		}
		
//		cout<<i<<":"<<endl;
	}
	cout<<"End of Output"<<endl;
	return 0;
}		
