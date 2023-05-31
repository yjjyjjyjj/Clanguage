#include <stdio.h>

void solosum(void)      //학생 개인 점수 총합
{
    int num[5][5];
    int sum;
    int i, j;

    for(i=0; i<4; i++)
    {
        sum=0;
        for(j=0; j<4; j++)
        {
            printf("점수입력: ");
            scanf("%d", &num[i][j]);
            sum+=num[i][j];      
        }
        num[i][4]=sum;
    }
}

void gamogsum(void)     //과목 총합
{
    int num[5][5];
    int sum;
    int i, j;

    for(i=0; i<4; i++)
    {
        sum=0;
        for(j=0; j<4; j++)
        
            sum+=num[j][i];
            num[4][i]=sum;
        num[4][4]+=sum;      
        
    }
}

void prnit(void)
{
    int num[5][5];
    int i, j;
    
    for(i=0; i<5; i++)
    {
        for(j=0; j<5; j++)
        
            printf("%3d ", num[i][j]);
        printf("\n");
        
    }

}


int main(void)
{
    int num[5][5];
    int i, j;
    
    solosum();
    gamogsum();  
    prnit();
    return 0;  
}