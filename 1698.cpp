#include<iostream>
#include<fstream>
#include<set>
using namespace std;
int main()
{
	int vcount,ccount;
	set<char> vowel;
	set<char>::iterator it;
	vowel.insert('a');
	vowel.insert('e');
	vowel.insert('i');
	vowel.insert('o');
	vowel.insert('u');
	string passcode;
	ifstream cin("a.txt");
	while(cin>>passcode)
	{
		if(passcode=="end")
			break;
//		cout<<"---------------------------"<<endl;
		int tag=-1;//default 1::consonant
		int len;
		bool isbad=false;
		for(int i=0;i<passcode.length();i++)
		{
			it=vowel.find(passcode[i]);
			if(it!=vowel.end())
			{
				if(tag==0)//0--vowel
				{
					len++;
					if(len>2)
					{
						isbad=true;
//						cout<<"isbad is true"<<endl;
					}
				}
				if(tag==1)
				{
					tag=0;
					len=1;
				}	
				if(tag==-1)
				{
					tag=0;
					len=1;
				}
			}
			else
			{
				if(tag==1)
				{
					len++;
					if(len>2)
					{
						isbad=true;
//						cout<<"is bad is true"<<endl;
					}
				}
				if(tag==0)
				{
					tag=1;
					len=1;
				}
				if(tag==-1)
				{
					tag=1;
					len=1;
				}
			}   
//			cout<<passcode[i]<<"::"<<len<<endl;
 
		}
		bool hasv=false;
		for(int i=0;i<passcode.length();i++)
		{
			it=vowel.find(passcode[i]);
			if(it!=vowel.end())
			{
				hasv=true;
//				cout<<"hasv is true"<<endl;
			}
		}
		
		bool isduplicate=false;
		for(int i=1;i<passcode.length();i++)
		{
			if(passcode[i]==passcode[i-1])
			{
				if(passcode[i]=='e'||passcode[i]=='o')
					continue;
				else
				{
					isduplicate=true;
//					cout<<"isdup is true"<<endl;
				}
	

			}
		}
		
		if(isduplicate==false&&hasv==true&&isbad==false)
			cout<<"<"<<passcode<<"> is acceptable."<<endl;
		else
			cout<<"<"<<passcode<<"> is not acceptable."<<endl;
		len=0;
		tag=-1;
	}
}
