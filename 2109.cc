#include<queue>
#include<fstream>
#include<iostream>
using namespace std;
struct Item
{
	int f;
	int j;
	double ratio;
	bool operator < (const Item &a) const
	{
		return a.ratio>ratio;
	}
};
int main()
{
	int m,n;
	ifstream cin("in");
	while(cin>>m>>n)
	{
		priority_queue<Item> p;
		if(m==-1&&n==-1)
			break;
	//	cout<<"m n"<<m<<n<<endl;

		for(int i=0;i<n;i++)
		{
			Item item;
			cin>>item.j>>item.f;
			item.ratio=item.j*1.0/item.f;
			p.push(item);
		}
		double result=0.0;
		//cout<<result<<" result inited"<<endl;
		while((p.empty()==false)&&m>0)
		{
			if(m>=p.top().f)
			{
				result+=p.top().j;
				m-=p.top().f;
				p.pop();
			}
			else
			{
				result+=m*p.top().ratio;
				m=0;
			}
		}
		cout.precision(3);
		cout<<fixed<<result<<endl;
	}
}
