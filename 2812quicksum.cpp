#include<iostream>
using namespace std;

int main()
{
	char ch[256];
	int i=1;
	int qsum=0;

	while(cin.getline(ch,256))
	{
		if(ch[0]=='#')
		{
			break;
		}
		for(i=0;ch[i]!='\0';i++)
		{
			if(ch[i]!=' ')
			{
				qsum=qsum+(i+1)*(ch[i]-'A'+1);
			}
		}
		cout<<qsum<<endl;
		qsum=0;
		
	}
	return 0;
}
