#include<stdio.h>
int main()
{
    int i,j,m,n;
    int a[10][10],b[10][10],c[10][10];
    printf("enter order of matrix :");
    scanf("%d%d",&m,&n);
    printf("enter elements of first  matrix :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(a+i)+j));//(*(a+i)+j)=a[i][j]
        }
        
    }
    printf("enter elements of second matrix :");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",(*(b+i)+j));
            
        }
        
    }
    printf("addition of two matrix :\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            *(*(c+i)+j)=*(*(a+i)+j)+ *(*(b+i)+j);
            printf("%d\t", *(*(c+i)+j));
            
        }
        printf("\n");
        
    }
}

