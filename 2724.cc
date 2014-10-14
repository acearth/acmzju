#include<fstream>
#include<iostream>
#include<string>
#include<queue>
using namespace std;
struct Message
{
	char Name[100];
	int Param;
	int Priority;
	bool operator < (const Message &a) const
	{
		return a.Priority<Priority;
	}
};
int main()
{
	priority_queue<Message> p;
	Message message;
	char command[100];
	while(scanf("%s",command)!=EOF)
	{
		string s=command;
		if(s=="GET")
		{
			if(p.size()==0)
				cout<<"EMPTY QUEUE!"<<endl;
			else
			{
				printf("%s %d\n",p.top().Name,p.top().Param);
				p.pop();
			}
		}
		else if(s=="PUT")
		{
			scanf("%s%d%d",&message.Name,&message.Param,&message.Priority);
			p.push(message);
		}
	}
}
