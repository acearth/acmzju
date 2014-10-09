#include<map>
#include<algorithm>
#include<iostream>
#include<fstream>
using namespace std;
int main()
{
	map<char,int>m;
	for(int i=0;i<10;i++)
		m['0'+i]=i;
	int n;
//	ifstream cin("a.txt");
	while(cin>>n)
	{
		if(n==0)
			break;
		string s[n];
		int a[n];
		int sum=0;
		for(int i=0;i<n;i++)
		{
			cin>>s[i];
			a[i]=0;
			for(int j=0;j<s[i].length();j++)
			{
				if(m.find(s[i][j])!=m.end())
				{
					a[i]+=m[s[i][j]];
					if(j!=s[i].length()-1)
						a[i]*=10;
				}
			}
	//		cout<<"a"<<i<<"::"<<a[i]<<endl;
			sum+=a[i];	
		}
	//	cout<<sum<<endl;
		string sr;
		while(sum!=0)
		{
			sr+='0'+sum%10;
			sum/=10;
		}
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
