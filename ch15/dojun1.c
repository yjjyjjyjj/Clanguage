#include <stdio.h>
void Hol(int arr[])
{
    printf("홀수 출력: ");
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2!=0)
            printf("%d ", arr[i]);
    }
}

void Jag(int arr[])
{
    printf("짝수 출력: ");
    for(int i=0; i<10; i++)
    {
        if(arr[i]%2==0)
          printf("%d ", arr[i]);
    }
}

int main(void)
{
    int arr[10];
    int i;
    
    printf("총 숫자 10개 입력 \n");
    for(i=0; i<10; i++)
    {
        printf("입력: ");
        scanf("%d", &arr[i]);
    }
    Hol(arr);
    printf("\n");
    Jag(arr);
    printf("\n");
    return 0;
}