#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <unistd.h>
void A(int k); // 0
void B(int k); // 1
void C(int k); // 2
void D(int k); // 3
void E(int k); // 4
void F(int k); // 5
void G(int k); // 6
void H(int k); // 7
void I(int k); // 8
void J(int k); // 9

int main(void)
{
    time_t rawTime;
    struct tm *pTimeInfo;

    int k;
    
    
while(1)
{
    rawTime = time(NULL);            // 현재 시간을 받음
    pTimeInfo = localtime(&rawTime); // 현재 시간을 이쁘게 struct tm에 넣음

    int hour = pTimeInfo->tm_hour;
    int min = pTimeInfo->tm_min;
    int sec = pTimeInfo->tm_sec;
     system("clear");
    for (k = 0; k < 9; k++)
    {
        if (hour >= 0 && hour < 10)
        {   
             A(k);
            if (hour == 0)
                A(k);
            else if(hour==1)
                B(k);
            else if(hour==2)
                C(k);
            else if(hour==3)
                D(k);
            else if(hour==4)
                E(k);
            else if(hour==5)
                F(k);
            else if(hour==6)
                G(k);
            else if(hour==7)
                H(k);
            else if(hour==8)
                I(k);
            else if(hour==9)
                J(k);
        }
        else if (hour >= 10 && hour < 20)
        {    
            B(k);
            if ((hour - 10) == 0)
                A(k);
            else if((hour-10)==1)
                B(k);
            else if((hour-10)==2)
                C(k);
            else if((hour-10)==3)
                D(k);
            else if((hour-10)==4)
                E(k);
            else if((hour-10)==5)
                F(k);
            else if((hour-10)==6)
                G(k);
            else if((hour-10)==7)
                H(k);
            else if((hour-10)==8)
                I(k);
            else if((hour-10)==9)
                J(k);
        }
        else if (hour >= 20 && hour < 24)
        {
            C(k);
            if ((hour - 20) == 0)
                A(k);
            else if((hour-20)==1)
                B(k);
            else if((hour-20)==2)
                C(k);
            else if((hour-20)==3)
                D(k);
            else if((hour-20)==4)
                E(k);
            else if((hour-20)==5)
                F(k);
            else if((hour-20)==6)
                G(k);
            else if((hour-20)==7)
                H(k);
            else if((hour-20)==8)
                I(k);
            else if((hour-20)==9)
                J(k);
        }
       
         printf(":");
        if (min >= 0 && min < 10)
        {   
             A(k);
            if (min == 0)
                A(k);
            else if(min==1)
                B(k);
            else if(min==2)
                C(k);
            else if(min==3)
                D(k);
            else if(min==4)
                E(k);
            else if(min==5)
                F(k);
            else if(min==6)
                G(k);
            else if(min==7)
                H(k);
            else if(min==8)
                I(k);
            else if(min==9)
                J(k);
        }
        else if (min >= 10 && min < 20)
        {    
            B(k);
            if ((min - 10) == 0)
                A(k);
            else if((min-10)==1)
                B(k);
            else if((min-10)==2)
                C(k);
            else if((min-10)==3)
                D(k);
            else if((min-10)==4)
                E(k);
            else if((min-10)==5)
                F(k);
            else if((min-10)==6)
                G(k);
            else if((min=10)==7)
                H(k);
            else if((min=10)==8)
                I(k);
            else if((min=10)==9)
                J(k);
        }
        else if (min >= 20 && min< 30)
        {
            C(k);
            if ((min - 20) == 0)
                A(k);
            else if((min-20)==1)
                B(k);
            else if((min-20)==2)
                C(k);
            else if((min-20)==3)
                D(k);
            else if((min-20)==4)
                E(k);
            else if((min-20)==5)
                F(k);
            else if((min-20)==6)
                G(k);
            else if((min=20)==7)
                H(k);
            else if((min=20)==8)
                I(k);
            else if((min=20)==9)
                J(k);
        }
        else if (min >= 30 && min< 40)
        {
            D(k);
            if ((min - 30) == 0)
                A(k);
            else if((min-30)==1)
                B(k);
            else if((min-30)==2)
                C(k);
            else if((min-30)==3)
                D(k);
            else if((min-30)==4)
                E(k);
            else if((min-30)==5)
                F(k);
            else if((min-30)==6)
                G(k);
            else if((min=30)==7)
                H(k);
            else if((min=30)==8)
                I(k);
            else if((min=30)==9)
                J(k);
        }
         else if (min >= 40 && min< 50)
        {
            E(k);
            if ((min - 40) == 0)
                A(k);
            else if((min-40)==1)
                B(k);
            else if((min-40)==2)
                C(k);
            else if((min-40)==3)
                D(k);
            else if((min-40)==4)
                E(k);
            else if((min-40)==5)
                F(k);
            else if((min-40)==6)
                G(k);
            else if((min=40)==7)
                H(k);
            else if((min=40)==8)
                I(k);
            else if((min=40)==9)
                J(k);
        }
         else if (min >= 50 && min< 60)
        {
            F(k);
            if ((min - 50) == 0)
                A(k);
            else if((min-50)==1)
                B(k);
            else if((min-50)==2)
                C(k);
            else if((min-50)==3)
                D(k);
            else if((min-50)==4)
                E(k);
            else if((min-50)==5)
                F(k);
            else if((min-50)==6)
                G(k);
            else if((min=50)==7)
                H(k);
            else if((min=50)==8)
                I(k);
            else if((min=50)==9)
                J(k);
        }

  printf(":");
        if (sec >= 0 && sec < 10)
        {   
             A(k);
            if (sec == 0)
                A(k);
            else if(sec==1)
                B(k);
            else if(sec==2)
                C(k);
            else if(sec==3)
                D(k);
            else if(sec==4)
                E(k);
            else if(sec==5)
                F(k);
            else if(sec==6)
                G(k);
            else if(sec==7)
                H(k);
            else if(sec==8)
                I(k);
            else if(sec==9)
                J(k);
        }
        else if (sec >= 10 && sec < 20)
        {    
            B(k);
            if ((sec - 10) == 0)
                A(k);
            else if((sec-10)==1)
                B(k);
            else if((sec-10)==2)
                C(k);
            else if((sec-10)==3)
                D(k);
            else if((sec-10)==4)
                E(k);
            else if((sec-10)==5)
                F(k);
            else if((sec-10)==6)
                G(k);
            else if((sec=10)==7)
                H(k);
            else if((sec=10)==8)
                I(k);
            else if((sec=10)==9)
                J(k);
        }
        else if (sec >= 20 && sec< 30)
        {
            C(k);
            if ((sec - 20) == 0)
                A(k);
            else if((sec-20)==1)
                B(k);
            else if((sec-20)==2)
                C(k);
            else if((sec-20)==3)
                D(k);
            else if((sec-20)==4)
                E(k);
            else if((sec-20)==5)
                F(k);
            else if((sec-20)==6)
                G(k);
            else if((sec=20)==7)
                H(k);
            else if((sec=20)==8)
                I(k);
            else if((sec=20)==9)
                J(k);
        }
        else if (sec >= 30 && sec< 40)
        {
            D(k);
            if ((sec - 30) == 0)
                A(k);
            else if((sec-30)==1)
                B(k);
            else if((sec-30)==2)
                C(k);
            else if((sec-30)==3)
                D(k);
            else if((sec-30)==4)
                E(k);
            else if((sec-30)==5)
                F(k);
            else if((sec-30)==6)
                G(k);
            else if((sec=30)==7)
                H(k);
            else if((sec=30)==8)
                I(k);
            else if((sec=30)==9)
                J(k);
        }
         else if (sec >= 40 && sec< 50)
        {
            E(k);
            if ((sec - 40) == 0)
                A(k);
            else if((sec-40)==1)
                B(k);
            else if((sec-40)==2)
                C(k);
            else if((sec-40)==3)
                D(k);
            else if((sec-40)==4)
                E(k);
            else if((sec-40)==5)
                F(k);
            else if((sec-40)==6)
                G(k);
            else if((sec=40)==7)
                H(k);
            else if((sec=40)==8)
                I(k);
            else if((sec=40)==9)
                J(k);
        }
         else if (sec >= 50 && sec< 60)
        {
            F(k);
            if ((sec - 50) == 0)
                A(k);
            else if((sec-50)==1)
                B(k);
            else if((sec-50)==2)
                C(k);
            else if((sec-50)==3)
                D(k);
            else if((sec-50)==4)
                E(k);
            else if((sec-50)==5)
                F(k);
            else if((sec-50)==6)
                G(k);
            else if((sec=50)==7)
                H(k);
            else if((sec=50)==8)
                I(k);
            else if((sec=50)==9)
                J(k);
        }
        printf("\n");
    }
}
    return 0;
}

void A(int k)
{
    int i, j;
    char cnt0[9][8];
    for (i = 0; i < 9; i++) // 0
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 8)
            {
                if (j == 3 || j == 4)
                    cnt0[i][j] = 'G';
                else
                    cnt0[i][j] = ' ';
            }
            else
            {
                if (j == 2 || j == 5)
                    cnt0[i][j] = 'G';
                else
                    cnt0[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt0[k][j]);
    }
}
void B(int k)
{
    char cnt1[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 1
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0)
            {
                if (j == 3 || j == 4)
                    cnt1[i][j] = 'G';
                else
                    cnt1[i][j] = ' ';
            }
            else if (i == 8)
            {
                if (j >= 3 && j < 6)
                    cnt1[i][j] = 'G';
                else
                    cnt1[i][j] = ' ';
            }
            else
            {
                if (j == 4)
                    cnt1[i][j] = 'G';
                else
                    cnt1[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt1[k][j]);
    }
}
void C(int k)
{
    char cnt2[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 2
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                if (j >= 2 && j < 6)
                    cnt2[i][j] = 'G';
                else
                    cnt2[i][j] = ' ';
            }
            else if (i >= 1 && i < 4)
            {
                if (j == 5)
                    cnt2[i][j] = 'G';
                else
                    cnt2[i][j] = ' ';
            }
            else
            {
                if (j == 2)
                    cnt2[i][j] = 'G';
                else
                    cnt2[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt2[k][j]);
    }
}
void D(int k)
{
    char cnt3[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 3
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                if (j >= 2 && j < 6)
                    cnt3[i][j] = 'G';
                else
                    cnt3[i][j] = ' ';
            }
            else if (i >= 1 && i < 4 || i >= 5 && i < 8)
            {
                if (j == 5)
                    cnt3[i][j] = 'G';
                else
                    cnt3[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt3[k][j]);
    }
}

void E(int k)
{
    char cnt4[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 4
    {
        for (j = 0; j < 8; j++)
        {
            if (i >= 0 && i < 5)
            {
                if (j == 2 || j == 5)
                    cnt4[i][j] = 'G';
                else
                    cnt4[i][j] = ' ';
            }
            else if (i == 5)
            {
                if (j >= 2 && j < 7)
                    cnt4[i][j] = 'G';
                else
                    cnt4[i][j] = ' ';
            }
            else
            {
                if (j == 5)
                    cnt4[i][j] = 'G';
                else
                    cnt4[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt4[k][j]);
    }
}

void F(int k)
{
    char cnt5[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 5
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                if (j >= 2 && j < 6)
                    cnt5[i][j] = 'G';
                else
                    cnt5[i][j] = ' ';
            }
            else if (i >= 1 && i < 4)
            {
                if (j == 2)
                    cnt5[i][j] = 'G';
                else
                    cnt5[i][j] = ' ';
            }
            else
            {
                if (j == 5)
                    cnt5[i][j] = 'G';
                else
                    cnt5[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt5[k][j]);
    }
}

void G(int k)
{
    char cnt6[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 6
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                if (j >= 2 && j < 6)
                    cnt6[i][j] = 'G';
                else
                    cnt6[i][j] = ' ';
            }
            else if (i >= 1 && i < 4)
            {
                if (j == 2)
                    cnt6[i][j] = 'G';
                else
                    cnt6[i][j] = ' ';
            }
            else
            {
                if (j == 2 || j == 5)
                    cnt6[i][j] = 'G';
                else
                    cnt6[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt6[k][j]);
    }
}
void H(int k)
{
    char cnt7[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 7
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0)
            {
                if (j >= 2 && j < 6)
                    cnt7[i][j] = 'G';
                else
                    cnt7[i][j] = ' ';
            }
            else if (i >= 1 && i < 3)
            {
                if (j == 2 || j == 5)
                    cnt7[i][j] = 'G';
                else
                    cnt7[i][j] = ' ';
            }
            else
            {
                if (j == 5)
                    cnt7[i][j] = 'G';
                else
                    cnt7[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt7[k][j]);
    }
}
void I(int k)
{
    char cnt8[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 8
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                if (j >= 2 && j < 6)
                    cnt8[i][j] = 'G';
                else
                    cnt8[i][j] = ' ';
            }
            else if (i >= 1 && i < 4)
            {
                if (j == 2 || j == 5)
                    cnt8[i][j] = 'G';
                else
                    cnt8[i][j] = ' ';
            }
            else
            {
                if (j == 2 || j == 5)
                    cnt8[i][j] = 'G';
                else
                    cnt8[i][j] = ' ';
            }
        }
    }
    for (j = 0; j < 8; j++)
    {
        printf("%c", cnt8[k][j]);
    }
}
void J(int k)
{
    char cnt9[9][8];
    int i, j;
    for (i = 0; i < 9; i++) // 9
    {
        for (j = 0; j < 8; j++)
        {
            if (i == 0 || i == 4 || i == 8)
            {
                if (j >= 2 && j < 6)
                    cnt9[i][j] = 'G';
                else
                    cnt9[i][j] = ' ';
            }
            else if (i >= 1 && i < 4)
            {
                if (j == 2 || j == 5)
                    cnt9[i][j] = 'G';
                else
                    cnt9[i][j] = ' ';
            }
            else
            {
                if (j == 5)
                    cnt9[i][j] = 'G';
                else
                    cnt9[i][j] = ' ';
            }
        }
        for (j = 0; j < 8; j++)
        {
            printf("%c", cnt9[k][j]);
        }
    }
}
