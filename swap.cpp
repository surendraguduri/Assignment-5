#include<stdio.h>
void swap(int ,int);
int main()
{
	int a,b;
	scanf("%d %d\n",&a,&b);
	swap(a,b);
	return 0;
}
void swap(int a,int b)
{
	int *p,*q;
	p=&a;q=&b;
	int *t;
	t=p;
	p=q;
	q=t;
	printf("%d %d",*p,*q);
}
