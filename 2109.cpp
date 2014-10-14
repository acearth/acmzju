#include<fstream>
#include<iostream>
#include<queue>
using namespace std;
struct Info
{
	double ratio;
	int f;
	int j;
};

int main()
{
	priority_queue<Info> pq;
	int m,n;
	ifstream cin("a.txt");
	cin>>m>>n;
	for(int i=0;i<n;i++)
	{
		Info ino;
		cin>>ino.f>>ino.j;
		ino.ratio=ino.f*1.00/ino.j;
		pq.push(ino);
	}
	while(pq.empty()!=true)
	{
		cout<<pq.top().ratio<<endl;
		pq.pop();
	}
}
	
