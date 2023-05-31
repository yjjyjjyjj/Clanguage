#include <stdio.h>
int main(void)
{
    int arr1[10];
    int arr2[10] = {0};
    int p = 0, q = 9;

    printf("총 10개의 숫자 입력 \n");
    for (int i = 0; i < 10; i++)
    {
        printf("입력: ");
        scanf("\n%d", &arr1[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        if (arr1[i] % 2 == 0)
        {
            arr2[q] = arr1[i];
            q--;
        }
        else
        {
            arr2[p] = arr1[i];
            p++;
        }
    }

    printf("배열 요소의 출력: ");
    for (int i = 0; i < 10; i++)
    {
        printf("%d ", arr2[i]);
    }

    return 0;
}