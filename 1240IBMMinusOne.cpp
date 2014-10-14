#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	int n;
	cin>>n;
    string st; 
	int len;
	int stringseq=1;
	while(n>0)
	{
		cin>>st;
		len=st.length();
		int change;
		for(int i=0;i<len;i++)
		{
			change=st[i]-'A';
			change=(change+1)%26;
			st[i]='A'+change;
		}
		cout<<"String #"<<stringseq<<endl;	
		cout<<st<<endl<<endl;
		n--;
		stringseq++;
	}
	return 0;
}
