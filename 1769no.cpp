#include<iostream>
#include<queue>
using namespace std;

int main()
{
	priority_queue<int> pq;
	int a,b,c;
	cin>>a>>b>>c;
	pq.push(a);
	pq.push(b);
	pq.push(c);
	while(pq.empty()!=true)
	{	
		cout<<pq.top()<<" ";
		pq.pop();
	}
	int t;
	cin>>t;
	cout<<pq.find(t)<<endl;

	}
	
