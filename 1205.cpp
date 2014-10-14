#include<iostrream>
#include<map>
#include<algorithm>
using namespace std;
int main()
{
	string stra,strb;
	map<char,int> m;
	for(int i=0;i<10;i++)
	{
		m['a'+i]=10+i;
		m['0'+i]=i;
	}
	while(cin>>stra)
	{
		cin>>strb;
		int sum;
		if(strb.length()>stra.length())
		{
			string t;
			t=strb;
			strb=stra;
			stra=t;
		}
		int tag=0;
		int i;
		for(i=strb.length()-1;i>=0;i--)
		{
			sum=tag+m[stra[i]]+m[strb[i]];
			tag=0;
			if(sum>19)
			{
				sum-=20;
				tag=1;
			}
		}
		for(;i<stra.length();i++)
		{
			
			
			
