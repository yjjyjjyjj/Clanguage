#include <stdio.h>
 int main(void)
 {
     int arr1[4][4]= {
         {1,2,3,4},
         {5,6,7,8},
         {9,10,11,12},
         {13,14,15,16}
     };
     int arr2[4][4]={0};
     int i, j;

    for(i=0; i<4; i++)    // arr1출력
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ", arr1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    
    for(i=0; i<4; i++)  //90도 전환
    {
        for(j=0; j<4; j++)
        {
            arr2[i][3-j] = arr1[3-j][i];
        }
    }
    for(i=0; i<4; i++)  //90도 출력
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ", arr2[i][3-j]);
        }
        printf("\n");

    }
    printf("\n");

    for(i=0; i<4; i++)  //180도 전환
    {
        for (j=0; j<4; j++)
        {
            arr1[3-i][j] = arr2[j][3-i];
        }
    }
    for(i=0; i<4; i++)  //180도 출력
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ", arr1[3-i][3-j]);
        }
        printf("\n");

    }
    printf("\n");
    
    for(i=0; i<4; i++)  //270도 전환
    {
        for (j=0; j<4; j++)
        {
            arr2[3-i][j] = arr1[j][3-i];
        }
    }
    for(i=0; i<4; i++)  //270도 출력
    {
        for(j=0; j<4; j++)
        {
            printf("%d  ", arr2[3-i][j]);
        }
        printf("\n");

    }
    printf("\n");
    return 0;
}