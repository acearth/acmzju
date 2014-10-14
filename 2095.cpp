#include<cstdio>
using namespace std;

int main()
{
	int a[500001];
	a[1]=0;//1 doesn't have proper divisor
	for(int i=2;i<500001;i++)
		a[i]=1;

//	cout<<a[4]<<" "<<a[10]<<" "<<a[20]<<endl;
	for(int i=2;i<=707;i++)// 707=sqrt(500000)
	{
		a[i*i]+=i;
		for(int j=i+1;j<=500000/i;j++)
			a[i*j]+=(i+j);
	}

//	cout<<a[4]<<" "<<a[10]<<" "<<a[20]<<endl;
	int casenum;
	scanf("%d",&casenum);
	int seq=0;
	while(seq<casenum)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",a[n]);
		seq++;
	}
}
