#include<math.h>
#include<stdio.h>
int main()
{
	int n,m,i,j,c;
	while(~scanf("%d",&n))
	{
		m=sqrt(n);
		c=0;
		for(i=2;i<m+1;i++)
		{
			while(n%i==0)
			{
				n/=i;
				c++;
			}
			if(c>1)
				break;
		}
		if(c==1||(n==1&&c==2))
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}	
