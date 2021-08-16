#include<stdio.h>
void copy(int a[],int n);
int main()
{
	int n,i;
	int a[n];
	int b[n];
	scanf("%d\n",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	copy(a,n);
	return 0;
}
void copy(int a[],int n)
{
	int *p;
	int *q;
	int i;
	int b[n];
	p=&a[0];
	q=&b[0];
	for(i=0;i<n;i++)
	{
		*(q+i)=*(p+i);
		printf("%d ",*(q+i));
	}
}
