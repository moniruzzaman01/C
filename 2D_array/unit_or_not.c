#include <stdio.h>

int main()
{
    /*code*/
    int row, col;
    scanf("%d%d", &row, &col);
    int matrix[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }
    int flag = 1;
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            if(i==j && matrix[i][j]!=1)
                flag = 0;
            else if(i!=j && matrix[i][j]!=0)
                flag = 0;
        }
    }
    if(flag==1)
        printf("identical");
    else
        printf("not identical");

    return 0;
}