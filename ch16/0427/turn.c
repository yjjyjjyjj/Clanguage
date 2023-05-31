#include <stdio.h>
int main(void)
{
    int arr1[5][5]={{1, 2, 3, 4, 5},
                   {6, 7, 8, 9, 10},
                   {11, 12, 13, 14, 15},
                   {16, 17, 18, 19, 20},
                   {21, 22, 23, 24, 25}};
    
    
    int i, j;
    
    for(i=0; i<5; i++)
    {
        for(j=4; j>=0; j--)
            printf("%d ", arr1[j][i]);
        printf("\n");
    }
    printf("\n");

    for(i=4; i>=0; i--)
    {
        for(j=4; j>=0; j--)
            printf("%d ", arr1[i][j]);
        printf("\n");
    }
    return 0;
}