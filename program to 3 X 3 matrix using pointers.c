// write a program to read and display a 3 X 3 matrix

#include<stdio.h>
void main()
{
    int i,j,mat[3][3];
    printf("\n Enter element of matrix: ");
    printf("\n******************************");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            printf("\n matrix[%d][%d] = ",i,j);
            scanf("%d",&mat[i][j]);
        }
    }
    printf("\n Elements of the matrix are");
    printf("\n*******************************");
    for(i=0;i<3;i++)
    {
        printf("\n");
        for(j=0;j<3;j++)
        {
            printf("\t matrix[%d][%d] = %d",i,j, *(*(mat+i) + j));

        }
    }
}
