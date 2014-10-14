#include<iostream>
#include<algorithm>
#include<vector>
#include<fstream>
using namespace std;
struct Book
{
	string n;
	int y;
	int p;
};
bool cmpn(const Book &a,const Book &b)
{
	if(a.n!=b.n)return a.n<b.n;
	else if(a.y!=b.y)return a.y<b.y;
	else return a.p<b.p;
}
bool cmpy(const Book &a,const Book &b)
{
	if(a.y!=b.y)return a.y<b.y;
	else if(a.n!=b.n)return a.n<b.n;
	else return a.p<b.p;
}
bool cmpp(const Book &a,const Book &b)
{
	if(a.p!=b.p)return a.p<b.p;
	else if(a.n!=b.n)return a.n<b.n;
	else return a.y<b.y;
}
int main()
{
	ifstream cin("in");
	vector<Book> v;
	Book book;
	string name,sortm;
	int year,price;
	int n;
	int blank=0;
	while(cin>>n)
	{
		blank++;
		if(n==0)break;
		v.clear();
		for(int i=0;i<n;i++)
		{
			cin>>book.n>>book.y>>book.p;
			v.push_back(book);
		}
		cin>>sortm;
		if(sortm=="Name")
			sort(v.begin(),v.end(),cmpn);
		if(sortm=="Year")
			sort(v.begin(),v.end(),cmpy);
		if(sortm=="Price")
			sort(v.begin(),v.end(),cmpp);
		if(blank!=1)
			cout<<endl;
		for(int i=0;i<v.size();i++)
			cout<<v[i].n<<" "<<v[i].y<<" "<<v[i].p<<endl;
	}
}

