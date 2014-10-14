#include<cstdio>
int main()
{
	char str[5001],s[10002];
	int p[5001],n,i;
	while(~scanf("%s",str))
	{
		n=0;
		while(str[n])
			n++;
		s[0]='$';
		s[1]='#';
		for(i=1;i<=n;i++)
		{
			s[i*2]=str[i-1];
			s[i*2+1]='#';
		}
		n=n*2+2;
//		s[n]='\0';
		int k=0;
		int pos;
		int res=0;
		for(i=1;i<n;i++)
		{
			if(k>i)
				p[i]=p[2*pos-i]<=k-i?p[2*pos-i]:k-i;
			else
				p[i]=1;
			while(s[i+p[i]]==s[i-p[i]])
				p[i]++;
			if(p[i]+i>k)
				k=p[pos=i]+i;
			res+=p[i]/2;
		}
		printf("%d\n",res);
	}
}
