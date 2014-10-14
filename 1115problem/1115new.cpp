#include<iostream>
using namespace std;

int getRoot(string st)
{
	int len=st.length();
	int result=0;
	for(int i=0;i<len;i++)
	{
		if(st[i]>'0'&&st[i]<='9')
				result+=st[i]-'0';
	}
	if(result<10)
		return result;
	else
	{
			while(true)
			{
			  if(result<10)//A
					return result;
			  result=result/10+result%10;//B 
			  // The order of A and B is very important.
			}	
	}
/*
	else
	{
		string pseudoresult;
		char tempchar='0';
		int tempnum;
		tempnum=result/10;
		while(tempnum>0)
		{
			pseudoresult+=tempchar+tempnum;
			result-=tempnum*10;
			if(result<10)
			{
				pseudoresult+=tempchar+result;
				break;
			}
			tempnum=result/10;
		}
		return getRoot(pseudoresult);		
	}*/
}

int main()
{
	string str;
	while(cin>>str)
	{
		if(str[0]=='0')
			return 0;
		cout<<getRoot(str)<<endl;
	}
}

