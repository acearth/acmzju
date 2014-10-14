#include<cstring>
#include<fstream>
#include<cstdio>
#include<iostream>
using namespace std;
char s[10002],str[5001];
int p[5001],res,n,i,k,pos;
int main()
{
	ifstream cin("in");
	while(~scanf("%s",str))
	{
		//init
		n=strlen(str);
		s[0]='$';
		s[1]='#';
		for(i=n;i>0;i--)
		{
			s[2*i]=str[i-1];
			s[2*i+1]='#';
		}
		s[2*n+2]='\0';
		
		//
		//manacher()
		k=0;
		for(i=1;i<n;i++)
		{
			if(k>i)
				p[i]=p[2*pos-i]<k-i?p[2*pos-i]:k-i;
			else
				p[i]=1;
			while(s[i+p[i]]==s[i-p[i]])
				p[i]++;
			if(p[i]+i>k)
				k=p[pos=i]+i;
		}
		res=0;
		for(i=n-1;i>0;i--)
			res+=p[i]/2;
		printf("%d\n",res);
		}
}
