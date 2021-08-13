#include<stdio.h>
int main()
{
	int n,i;
	int a[n];
	int b[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d ",&a[i]);
	}
	int *p;
	p=&a[0];
	for(i=0;i<n;i++)
	{
		b[i]=*(p+i);
		printf("%d ",b[i]);
	}
	
	
	return 0;
}
