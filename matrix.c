#include<stdio.h>
int main()
{
        int A[10][10],B[10][10],C[10][10],p,q,i,j,m,n;
        printf("Enter the order of matrix A(pxq)\n");
        scanf("%d%d",&p,&q);
        printf("Enter the order of matrix B(mxn)\n");
        scanf("%d%d",&m,&n);
        if(q!=m)
        {
                printf("Matrix multiplication not possible");
                return -1;
        }
        printf("Enter matrix A");
        for(i=0;i<p;i++)
        {
                for(j=0;j<q;j++)
                {
                        scanf("%d",&A[i][j]);
                }
        }
        printf("Matrix A:\n");
        for(i=0;i<p;i++)
        {
                for(j=0;j<q;j++)
                {
                        printf("%d\t",A[i][j]);
                }
                printf("\n");
        }
        printf("\n");
        printf("Enter matrix B");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        scanf("%d",&B[i][j]);
                }
                
        }
        printf("Matrix B:\n");
        for(i=0;i<m;i++)
        {
                for(j=0;j<n;j++)
                {
                        printf("%d\t",B[i][j]);
                }
                printf("\n");
        }
        for(i=0;i<p;i++)
        {
                for(j=0;j<n;j++)
                {
                        C[i][j]=0;
                        for(int k=0;k<q;k++)
                        {
                                C[i][j]+=A[i][k]*B[k][j];       
                        }
                }
        }
        printf("The resultant matrix=\n");
        for(i=0;i<n;i++)
        {
                for(j=0;j<p;j++)
                {
                        printf("%d\t",C[i][j]);
                }
                printf("\n");
        }
        return 0;
}

