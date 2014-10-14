#include<iostream>
using namespace std;

int getRoot(string st)
{
	int len=st.length();
	int result=0;
	for(int i=0;i<len;i++)
		result+=st[i]-'0';
	cout<<":::"<<result<<endl;
	if(result<=9)
		return result;
	else
	{
		string resultpro;
		int t=result/10;
		char tempchar='0';
		while(t>0)
		{
			cout<<"t:"<<t<<endl;
			resultpro+=(tempchar+t);
			result-=(t*10);
			cout<<"<"<<result<<endl;
			cout<<resultpro<<endl;
			t=result/10;
		}
		
		return getRoot(resultpro);

	}
}	
		
int main()
{
	string str;
	while(cin>>str)
	{
		cout<<str<<endl;

		if(str[0]=='0')
			return 0;
		int result;
		result=getRoot(str);
		std::cout<<result<<endl;
	}
	return 0;
}
