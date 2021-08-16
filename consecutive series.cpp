#include<stdio.h>
int main()
{
    int x,i,j;
    int s=0,c=0,k=0;
    int a[100],p[100];
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
    	s=s+i;
	}
	for(i=0;i<s;i++)
	{
		scanf("%d",&a[i]);
	}
	
    for(i=1;i<=x;i++)
    {
        for(j=1;j<=i;j++)
        {
            p[k]=i;
            k++;
        }
    }
    for(i=0;i<s;i++)
    {
    	if(a[i]==p[i])
    	{
    		c++;
		}
	}
	if(c==s)
	{
		printf("Valid for input(%d)",x);
	}
	else
	{
		printf("Invalid for input(%d)",x);
	}
    return 0;
    
}
