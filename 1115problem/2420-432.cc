#include<iostream>
#include<vector>
#include<map>
using namespace std;
struct Info
{
	int y;
	int m;
	int d;
	int w;
};
bool rr(int y)
{
	if(y%400==0||(y%100!=0&&y%4==0))
		return true;
	return false;
}

int main()
{
	map<int,string> m;
	m[1]="Monday";
	m[2]="Tuesday";
	m[3]="Wednesday";
	m[4]="Thursday";
	m[5]="Friday";
	m[6]="Saturday";
	m[7]="Sunday";
	vector<Info> v;
	int i,j,k;
	int p=0;
	Info info;
	int flag;
	int week=5;
	for(i=2000;i<10000;i++)
	{
		flag=rr(i);
		for(j=1;j<13;j++)
			for(k=1;k<32;k++)
			{
				if(j==1||j==3||j==5||j==7||j==8||j==10||j==12)
					p++;
				else if(j==4||j==6||j==9||j==11)
				{
					if(k!=31)
						p++;
					else
						break;
				}
				else if(j==2)
				{
					if(flag)
					{
						if(k!=30&&k!=31)
							p++;
						else
							break;
					}
					else
					{
						if(k<29)
							p++;
						else
							break;
					}
				}
				info.y=i;
				info.m=j;
				info.d=k;
				week++;
				if(week==8)
					week=1;
				info.w=week;
				v.push_back(info);
			}
		int n;
		while(cin>>n)
		{
			if(n==-1)break;
			cout<<v[n].y<<"-";
			if(v[n].m<10)cout<<"0";
			cout<<v[n].m<<"-";
			if(v[n].d<10)cout<<"0";
			cout<<v[n].d<<" ";
			cout<<m[v[n].w]<<endl;
		}
	}
}
			
