#include<cstdio>
int main()
{
	char s[10]="abc";
	int k=0;
	while(s[k])
		k++;
	printf("%d\n",k+1);
}

