#include <stdio.h>


int main()
{
    int sum =0;

    printf("enter number of rows and matrices for matrix1 \n");
    int r1,c1;
    scanf("%d%d",&r1,&c1);
    int a[r1][c1];

    printf("enter number of rows and matrices for matrix2 \n");
    int r2,c2;
    scanf("%d%d",&r2,&c2);
    int b[r2][c2];
    
    if(c1!=r2)
    {
        return 0;
    }

    printf("enter elements of matrix 1 \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c1;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("enter elements of matrix 2 \n");
    for(int i=0;i<r2;i++)
    {
        for(int j=0;j<c2;j++)
        {
            scanf("%d",&b[i][j]);
        }
        
    }
    
    int ans[r1][c2];

    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            sum=0;
            for(int k =0;k<r1;k++)
            {
                sum+=a[i][k]*b[k][j];
            }
            ans[i][j]=sum;
        }
    }
    
    printf("\nmultiplication of the given matrices is \n");
    for(int i=0;i<r1;i++)
    {
        for(int j=0;j<c2;j++)
        {
            printf("%d ",ans[i][j]);
        }
        printf("\n");
    }
}
