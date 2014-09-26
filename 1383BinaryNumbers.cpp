#include<iostream>
using namespace std;

void printbin(int b[10][32],int d)
{
	for(int i=0;i<d;i++)
	{
		bool flag=false;
		for(int j=0;j<32;j++)
		{
			if(b[i][j]==1)
			{
				if(flag==true)
				{
					cout<<" "<<j;
				}
				else
				{
					cout<<j;
					flag=true;
				}
			}
			if(b[i][i]==9)
			{
				break;
			}
		}
		cout<<endl;
	}
}

int main()
{
	int d;
	int num[10]={0};
	int bin[10][32]={9};  //9 stands for unused
	cin>>d;
	for(int i=0;i<d;i++)
	{
		cin>>num[i];
	}
	
	for(int i=0;i<d;i++)
	{
		int cur=0;
		while(num[i]!=1)
		{
			bin[i][cur]=num[i]%2;
			num[i]=num[i]/2;
			cur++;
		}
		bin[i][cur]=1;
	}
	printbin(bin,d);
}
