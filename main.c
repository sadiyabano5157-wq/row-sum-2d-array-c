#include<stdio.h>

int main()
{
    int arr[3][3] = {
        {1,2,3},
        {4,5,6},
        {7,8,9}
    };

    int sum = 0;

    for(int i = 0; i < 3; i++)
    {
        sum = 0;

        for(int j = 0; j < 3; j++)
        {
            sum = sum + arr[i][j];
        }

        printf("Sum of row %d = %d\n", i + 1, sum);
    }

    return 0;
}
