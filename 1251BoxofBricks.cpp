#include<iostream>
using namespace std;

int main()
{
	int boxnum;
	int seq=0;
	while(cin>>boxnum)
	{
		if(boxnum==0)
			break;
		
		int box[50]={0};
		int avrnum=0;
		int movestep=0;
		for(int i=0;i<boxnum;i++)
		{
			cin>>box[i];
			avrnum+=box[i];
		}
		avrnum/=boxnum;
		for(int i=0;i<boxnum;i++)
		{
			int t;
			t=box[i]-avrnum;
			if(t>0)
				movestep+=t;
		}
		seq++;
		cout<<"Set #"<<seq<<endl;
			  // Set #1
			  //The minimum number of moves is 5.
		cout<<"The minimum number of moves is "<<movestep<<"."<<endl;
		cout<<endl;
	}
	return 0;
}
