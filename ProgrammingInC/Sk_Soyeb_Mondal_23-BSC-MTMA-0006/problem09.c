//using 2D(two dimensional) array to read a matrix from a user

#include<stdio.h>
int main(int argc,char* argv[])
{
    int row,col;
    printf("Enter the number of rows for the matrix= ");
    scanf("%i",&row);
    printf("Enter the number of column for the matrix= ");
    scanf("%i",&col);
    double matrix[row][col];
    printf("Enter the elements of the matrix: \n");
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("Enter the elements [%i][%i] of the matrix= ",i+1,j+1);
            scanf("%lf",&matrix[i][j]);
        }
    }
    for(int i=0;i<row;i++)
    {
        for(int j=0;j<col;j++)
        {
            printf("%lf  ",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}
