// #include <stdio.h>
// #include <string.h>

// struct person
// {
//     char name[20];
//     char phoneNum[20];
//     int age;
// };

// int main(void)
// {
//     struct person man1, man2;
//     strcpy(man1.name, "안성준");
//     strcpy(man1.phoneNum, "010-1122-3344");
//     man1.age=23;
    
//     printf("이름 입력: "); scanf("%s", man2.name);
//     printf("번호 입력: "); scanf("%s", man2.phoneNum);
//     printf("나이 입력: "); scanf("%d", &(man2.age));

//     printf("이름: %s \n", man1.name); 
//     printf("번호: %s \n", man1.phoneNum); 
//     printf("나이: %d \n", man1.age);

//     printf("이름: %s \n", man2.name);
//     printf("번호: %s \n", man2.phoneNum);
//     printf("나이: %d \n", man2.age);
//     return 0; 

// }

#include <stdio.h>
#include <string.h>

struct employee
{
    char name[20];
    char lifenum[20];
    int money;
};

int main(void)
{
    struct employee man;
    printf("종업원 이름 입력: "); scanf("%s", man.name);
    printf("주민등록번호 입력: "); scanf("%s", man.lifenum);
    printf("급여정보 입력:"); scanf("%d", &(man.money));

    return 0;
}