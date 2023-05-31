#include <stdio.h>

typedef struct
{
    char name[20];
    char stdnum[20];
    char school[20];
    char major[20];
    int year;
} Student;

void ShowStudentInfo(Student *sptr)
{
    printf("학생 이름: %s \n", sptr->name);
    printf("학생 고유번호: %s \n", sptr->stdnum);
    printf("학교 이름: %s \n", sptr->school);
    printf("선택 전공: %s \n", sptr->major);
    printf("학년: %d \n", sptr->year);
}

void StudentSuch(Student *sptr)
{
    char name2[20];
    int i;

    printf("이름: ");
    scanf("%s", name[]);

    for (i = 0; i < 7; i++)
    {
        if (name[i] == name2[i])
    }
}

int main(void)
{
    Student arr[7];
    int i;

    for (i = 0; i < 7; arr[7])
    {
        printf("이름: ");
        scanf("%s", arr[i].name);
        printf("번호: ");
        scanf("%s", arr[i].stdnum);
        printf("학교: ");
        scanf("%s", arr[i].school);
        printf("전공: ");
        scanf("%s", arr[i].major);
        printf("학년: ");
        scanf("%d", &arr[i].year);
    }

    for (i = 0; i < 7; i++)
        ShowStudentInfo(&arr[i]);

    return 0;
}
