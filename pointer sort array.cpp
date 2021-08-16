#include<stdio.h>
void sort(int *p,int n)
{
    int i,j,k=0;
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(*(p+i)>*(p+j))
            {
               int t;
               t=*(p+i);
               *(p+i)=*(p+j);
               *(p+j)=t; 
            }
        }
    }
    /*while(k<n)
    {
    printf("%d\n",*p);
    p++;
    k++;
    }*/
}
void main()
{
    int n,i;
    scanf("%d",&n);
    int a[n];
    for(i=0;i<n;i++)
    {
    scanf("%d",&a[i]);
    }
    sort(a,n);
    for(i=0;i<n;i++)
    {
    printf("\n%d",a[i]);
    }
    
}
