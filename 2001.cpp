#include<iostream>
#include<algorithm>
using namespace std;
int getNum(string stri)
{
	int resultnum=0;
	for(int i=0;i<stri.length();i++)
	{
		resultnum*=10;
		resultnum+=stri[i]-'0';
	}
	return resultnum;
}
		

int main()
{
	int casenum;
	string stra,strb;
	cin>>casenum;
	cin.ignore(10,'\n');
	for(int i=0;i<casenum;i++)
	{
		cin>>stra>>strb;
		//cout<<stra<<":"<<strb<<endl;
		reverse(stra.begin(),stra.end());
		reverse(strb.begin(),strb.end());

//		cout<<stra<<":"<<strb<<endl;
		int sum=getNum(stra)+getNum(strb);
//		cout<<"sum="<<sum<<endl;
		bool tag=false;
		int r;
		while(sum>9)
		{
			r=sum%10;
			if(r>0)
				tag=true;
			sum=(sum-r)/10;
			if(tag==true)
			cout<<r;
		}
		cout<<sum<<endl;
	}
}
			
