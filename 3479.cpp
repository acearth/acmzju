#include<fstream>
#include<iostream>
#include<map>
using namespace std;
int main()
{
	map<int,string> m;
	m[0]="Rabbit";
	m[1]="Dragon";
	m[2]="Snake";
	m[3]="Horse";
	m[4]="Ram";
	m[5]="Monkey";
	m[6]="Rooster";
	m[7]="Dog";
	m[8]="Pig";
	m[9]="Rat";
	m[10]="Ox";
	m[11]="Tiger";
	fstream cin("a.txt");
	int t;
	cin>>t;
	int r;
	int age;
	for(int i=0;i<t;i++)
	{
		cin>>age;
		r=(1-age)%12;
		r+=12;
		r%=12;
		cout<<m[r]<<endl;
	}
}
