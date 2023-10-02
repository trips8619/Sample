/Armstrong Number/
#include<stdio.h>
int main()
{
	int n,s=0,r,t;
	printf("Enter a number");
	scanf("%d",&n);
	t=n;
	while (n>0)
	{
		r=n%10;
		s=s+r*r*r;
		n=n/10;
	}
	if (s==t)
		printf("Armstrong");
	else
		printf("Not Armstrong");
}
