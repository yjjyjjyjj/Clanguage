#include <stdio.h>
int main(void)
{
    int dan[3][9]={{2, 4, 6, 8, 10, 12, 14, 16, 18},
                   {3, 6, 9, 12, 15, 18, 21, 24,27},
                   {4, 8, 12, 16, 20, 24, 28, 32, 36}};
    
    int i, j;

    for(i=0; i<3; i++)
    {
        for(j=0; j<9; j++)
        {
            printf("%dX%d=%d \n", i+2, j+1, dan[i][j]);
        }
    }
    return 0;
}