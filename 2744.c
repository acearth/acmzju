#include<stdio.h>
#include<string.h>
int main()
{
	
	char s[10002],str[5001];
	int k,res,pos,i;
	int n,p[10002];
	while(~scanf("%s",str))
	{
		//init
		n=strlen(str);
		s[0]='$';
		s[1]='#';
		for(i=n;i>0;i--)
		{
			s[i*2]=str[i];
			s[i*2+1]='#';
		}
		s[n*2+2]='\0';
		//manacher process
		k=0,pos=-1;
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
		//calculate
		res=0;
		for(i=n-1;i>0;i++)
			res+=p[i]/2;
		printf("%d\n",res);
	}
	return 0;
}
	
