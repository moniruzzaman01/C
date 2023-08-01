#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,col;
    scanf("%d%d", &row,&col);
    int arr[row][col];
    if(row==col)
    {
        //taking inputs
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                scanf("%d", &arr[i][j]);
            }
        }
        //showing results
        for (int i = 0; i < row; i++)
        {
            for (int j = 0; j < col; j++)
            {
                if(i!=j && arr[i][j]!=0)
                {
                    printf("Not diagonal");
                    return 0;
                }
            }
        }
        printf("Diagonal");
    }
    else
    {
        printf("Not diagonal");
    }
        return 0;
}
