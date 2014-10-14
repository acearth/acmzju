#include<iostream>
#include<algorithm>
#include<fstream>
using namespace std;
int main()
{
	ifstream cin("a.txt");
	int n;
	while(cin>>n)
	{
		if(n==0)
			break;
		string s;
		long dsum;
		long sum=0;;
		for(int i=0;i<n;i++)
		{
			cin>>s;
			dsum=0;
			for(int j=0;j<s.length();j++)
			{
				if(s[j]<='9'&&s[j]>='0')
				{
					dsum+=s[j]-'0';
					if(j!=s.length()-1)
						dsum*=10;
				}
			}
			sum+=dsum;
		}
		string sr;
		if(sum==0)
			sr="000";
		while(sum!=0)
		{
			sr+='0'+sum%10;
			sum/=10;
		}
		if(sr.length()<2)
			sr+="00";
		if(sr.length()<3)
			sr+='0';
		string res;
		for(int i=0;i<sr.length();i++)
		{
			if(i==2)
				res+='.';
			if(i>3&&(i%3==2))
				res+=',';
			res+=sr[i];
		}
		res+='$';
		reverse(res.begin(),res.end());
		cout<<res<<endl;
	}
}
