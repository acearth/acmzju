#include<queue>
#include<fstream>
#include<iostream>
using namespace std;
struct Item
{
	int price;
	int money;
	int count;
	bool operator < (const Item &a) const
	{
		return a.price>price;
	}
};

int main()
{
	int t;
	ifstream cin("in");
	cin>>t;
	int seq=0;
	while(++seq<=t)
	{
	//	cout<<seq<<"loop start------------"<<endl;
		priority_queue<Item> p;
		Item item;
		char s[4];
		cin>>item.count;
		cin>>s[0]>>s[1]>>s[2];
		s[3]='\0';
		int base=0;	
		for(int i=0;i<3;i++)
		{
			base+=s[i]-'0';
			base*=10;
		}			
		for(int i=1;i<10;i++)
			for(int j=1;j<10;j++)
				if((i*10000+j+base)%item.count==0)
				{
					item.money=i*10000+j+base;
					item.price=item.money/item.count;
					p.push(item);
				}
		if(p.empty()==false)
			cout<<p.top().money/10000<<" "<<p.top().money%10<<" "<<p.top().price<<endl;
		else
			cout<<"0"<<endl;	
	//	cout<<seq<<"          -------------------------loop end"<<endl;

	}
	return 0;
}
