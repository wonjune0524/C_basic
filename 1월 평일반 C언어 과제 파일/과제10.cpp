/*

// 예제_16.1 - 학생 정보 저장1

#include <stdio.h>

struct student
{
   int no;
   char name[20];
   int score;
};

void linePrint(char ch, int cnt)
{
   for (int i = 0; i < cnt; i++)
   {
      printf("%c", ch);
   }

   printf("\n");
}

int main(void)
{
   student st1, st2;

   printf("\n\n\t\t***학생 정보 입력***\n\n");

   st1.no = 1;
   printf("학번 : %03d\n", st1.no);

   printf("이름 : ");
   // fflush(stdin);     다음 값이 출력되기도 전에 내가 입력하는 것을 방지하기 위함. 일처리가 끝나기 전까지 입력 못하게 함.
   scanf_s("%s", st1.name, sizeof(st1.name));

   printf("점수 : ");
   // fflush(stdin);
   scanf_s("%d", &st1.score);

   st2.no = 2;
   printf("\n학번 : %03d\n", st2.no);

   printf("이름 : ");
   // fflush(stdin);
   scanf_s("%s", st2.name, sizeof(st2.name));

   printf("점수 : ");
   // fflush(stdin);
   scanf_s("%d", &st2.score);

   printf("\n\n\t\t***학생 정보 출력***\n\n");
   linePrint('=', 31);
   printf("%4s %-20s %5s\n", "학번", "이름", "점수");
   linePrint('-', 31);
   printf("%4d %-20s %5d\n", st1.no, st1.name, st1.score);
   printf("%4d %-20s %5d\n", st2.no, st2.name, st2.score);
   linePrint('=', 31);

   return 0;
}

*/

/*

// 예제_16.2 - 학생 정보 저장2

#include <stdio.h>
#include <stdlib.h>

#define STU_NUM 5

typedef struct stud     // typedef struct stud student;
{
    int no;
    char name[20];
    int score;
}student;

void linePrint(char ch, int cnt)
{
    for (int i = 0; i < cnt; i++)
    {
        printf("%c", ch);
    }

    printf("\n");
}

int main(void)
{
    student s[STU_NUM];     // 선언

    for (int i = 0; i < STU_NUM; i++)
    {
        system("cls");     // 입력창 초기화
        printf("\n\n\t\t***학생 정보 입력***\n\n");

        s[i].no = i + 1;
        printf("학번 : %03d\n", s[i].no);

        printf("이름 : ");
        scanf("%s", s[i].name, sizeof(s[i].name));

        printf("점수 : ");
        scanf("%d", &s[i].score);
    }

    system("cls");
    printf("\n\n\t\t***학생 정보 출력***\n\n");
    linePrint('=', 31);
    printf("%4s %-20s %5s\n", "학번", "이름", "점수");
    linePrint('-', 31);

    for (int i = 0; i < STU_NUM; i++)
    {
        printf("%4d %-20s %5d\n", s[i].no, s[i].name, s[i].score);
    }

    linePrint('=', 31);

    return 0;
}

*/

/*

// 예제_16.3 - 구조체 포인터로 구조체 배열로 선언된 맴버에 접근하는 예제

#include <stdio.h>

typedef struct sco
{
    int kor, eng, mat, sum;
}score;

int main(void)
{
    score s[3] = { {70, 70, 70}, {80, 80, 80}, {90, 90, 90} };

    score* p = s;

    for (int i = 0; i < 3; i++)
    {
        s[i].sum = s[i].kor + s[i].eng + s[i].mat;
        printf("s[%d].sum = %d\n", i, s[i].sum);

        p[i].sum = p[i].kor + p[i].eng + p[i].mat;
        printf("p[%d].sum = %d\n", i, p[i].sum);

        (p + i)->sum = (p + i)->kor + (p + i)->eng + (p + i)->mat;
        printf("(p + %d) -> sum = %d\n", i, (p + i)->sum);

        (*(p + i)).sum = (*(p + i)).kor + (*(p + i)).eng + (*(p + i)).mat;
        printf("(*(p + %d)).sum = %d\n", i, (*(p + i)).sum);

        printf("\n");
    }

    return 0;
}

*/

/*

// 예제_17.1 - 구조체 대입연산 예제

#include <stdio.h>

typedef struct data
{
    int a;
    double b;
    char c;
}DATA;

int main(void)
{
    DATA d1 = { 50, 3.57, 'A' };
    DATA d2;

    d2 = d1;

    printf("%d, %.2f, %c\n", d1.a, d1.b, d1.c);
    printf("%d, %.2f, %c\n", d2.a, d2.b, d2.c);

    return 0;
}

*/

/*

// 예제_17.2 - 구조체 변수 Call-by-Value 예제

#include <stdio.h>

typedef struct data
{
    int a;
    double b;
    char c;
}DATA;

void input(DATA d)
{
    printf("정수입력 : ");
    scanf("%d", &d.a);

    printf("실수입력 : ");
    scanf("%lf", &d.b);

    printf("문자입력 : ");
    scanf("%c", &d.c);
}

int main(void)
{
    DATA d1 = { 10, 3.14, 'A' };

    input(d1);
    printf("\n\n%d, %.2f, %c\n", d1.a, d1.b, d1.c);
    return 0;
}

*/

/*

// 예제_17.3 - 구조체 변수 Call-by-Reference 예제

#include <stdio.h>

typedef struct data
{
    int a;
    double b;
    char c;
}DATA;

void input(DATA* p)
{
    printf("정수입력 : ");
    scanf("%d", &p->a);

    printf("실수입력 : ");
    scanf("%lf", &p->b);

    printf("문자입력 : ");
    scanf("%c", &p->c);
}

int main(void)
{
    DATA d1 = { 10, 3.14, 'A' };

    input(&d1);
    printf("\n\n%d, %.2f, %c\n", d1.a, d1.b, d1.c);
    return 0;
}

*/

/*

// 문제_17.1 -  학생 한명의 정보를 student 구조체에 저장한 후 출력하는 프로그램 작성

#include <stdio.h>

typedef struct stud
{
    int stuID, kor, eng, mat, sum;
    double avg;
    char name[20];
}student;

void input(student* p)
{
    printf("# 학생 정보 입력 #\n\n");

    p->stuID = 1;

    printf("이름 : ");
    scanf("%s", p->name, sizeof(p->name));

    printf("국어 : ");
    scanf("%d", &p->kor);

    printf("영어 : ");
    scanf("%d", &p->eng);

    printf("수학 : ");
    scanf("%d", &p->mat);

    p->sum = p->kor + p->eng + p->mat;
    p->avg = p->sum / 3.0;
}

void output(student* p)
{
    printf("\n\n\t\t# 학생 정보 출력 #\n\n");
    printf("% 4s % -10s %5s %5s %5s %5s %8s\n", "학번", "이름", "국어", "영어", "수학", "총점", "평균");
    printf("============================================================\n");
    printf("%4d %-10s %5d %5d %5d %5d %8.2f\n", p->stuID, p->name, p->kor, p->eng, p->mat, p->sum, p->avg);
}

int main(void)
{
    student s; // 구조체 변수선언
    input(&s);// 입력 함수 호출
    output(&s);// 출력 함수 호출

    return 0;
}

*/