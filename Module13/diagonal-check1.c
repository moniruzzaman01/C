#include<stdio.h>
int main(int argc, char const *argv[])
{
    int row,col;
    scanf("%d%d", &row,&col);
    int arr[row][col];
    if(row==col)
    {
        //taking inputs
        int answer = 1;
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
                    answer = 0;
                }
            }
        }
        if(answer==1)
            printf("Diagonal");
        else
            printf("Not diagonal");
    }
    else
    {
        printf("Not diagonal");
    }
        return 0;
}
