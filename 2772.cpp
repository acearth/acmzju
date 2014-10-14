#include<iostream>
using namespace std;
int main()
{
	int casenum;
	int seq=0;
	cin>>casenum;
	while(seq<casenum)
	{
		int  money;
		cin>>money;
		seq++;
		int q=money/25;
		money=money%25;
		int d=money/10;
		money=money%10;
		int ni=money/5;
		money=money%5;
	cout<<seq<<" "<<q<<" QUARTER(S), "<<d<<" DIME(S), "<<ni<<" NICKEL(S), "<<money<<" PENNY(S)"<<endl;
	}
}	
