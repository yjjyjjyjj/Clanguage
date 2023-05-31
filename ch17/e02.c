#include <stdio.h>
void MaxAndmin(int ** max, int ** min, int * arr)
{
    int * maxi;
    int * mini;
    maxi=mini=&arr[0];
    for(int i=0; i<5; i++)
    {
        if(*maxi<arr[i])
            maxi=&arr[i];
        if(*mini>arr[i])
            mini=&arr[i];
    }
    *max=maxi;
    *min=mini;
}

int main(void)
{
    int*maxPtr;
    int*minPtr;
    int arr[5];

    for(int i=0; i<5; i++)
    {
        printf("정수입렵:");
        scanf("%d", &arr[i]);
    }
    MaxAndmin(&maxPtr, &minPtr, arr);
    printf("최대:%d 최소:%d \n", *maxPtr, *minPtr);
    return 0;
}