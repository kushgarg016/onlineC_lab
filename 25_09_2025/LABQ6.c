//Write a program to display the sum of rows and sum of columns of a 3 × 3 matrix/

#include <stdio.h>
    int main()
{
    int matrix[3][3],i,j,sum_row,sum_col;

    printf("Enter elements of 3x3 matrix = \n");
    for(i=0;i<3;i++)
    {
        for(j=0;j<3;j++)
        {
            scanf("%d",&matrix[i][j]);
        }
    }

    printf("Sum of rows = \n");
    for(i=0;i<3;i++)
    {
        sum_row=0;
        for(j=0;j<3;j++)
        {
            sum_row=sum_row+matrix[i][j];
        }
        printf("Row %d = %d\n",i+1,sum_row);
    }

    printf("Sum of columns = \n");
    for(j=0;j<3;j++)
    {
        sum_col=0;
        for(i=0;i<3;i++)
        {
            sum_col=sum_col+matrix[i][j];
        }
        printf("Column %d = %d\n",j+1,sum_col);
    }

    return 0;
}
