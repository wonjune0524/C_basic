/*

// ����_16.1 - �л� ���� ����1

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

   printf("\n\n\t\t***�л� ���� �Է�***\n\n");

   st1.no = 1;
   printf("�й� : %03d\n", st1.no);

   printf("�̸� : ");
   // fflush(stdin);     ���� ���� ��µǱ⵵ ���� ���� �Է��ϴ� ���� �����ϱ� ����. ��ó���� ������ ������ �Է� ���ϰ� ��.
   scanf_s("%s", st1.name, sizeof(st1.name));

   printf("���� : ");
   // fflush(stdin);
   scanf_s("%d", &st1.score);

   st2.no = 2;
   printf("\n�й� : %03d\n", st2.no);

   printf("�̸� : ");
   // fflush(stdin);
   scanf_s("%s", st2.name, sizeof(st2.name));

   printf("���� : ");
   // fflush(stdin);
   scanf_s("%d", &st2.score);

   printf("\n\n\t\t***�л� ���� ���***\n\n");
   linePrint('=', 31);
   printf("%4s %-20s %5s\n", "�й�", "�̸�", "����");
   linePrint('-', 31);
   printf("%4d %-20s %5d\n", st1.no, st1.name, st1.score);
   printf("%4d %-20s %5d\n", st2.no, st2.name, st2.score);
   linePrint('=', 31);

   return 0;
}

*/

/*

// ����_16.2 - �л� ���� ����2

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
    student s[STU_NUM];     // ����

    for (int i = 0; i < STU_NUM; i++)
    {
        system("cls");     // �Է�â �ʱ�ȭ
        printf("\n\n\t\t***�л� ���� �Է�***\n\n");

        s[i].no = i + 1;
        printf("�й� : %03d\n", s[i].no);

        printf("�̸� : ");
        scanf("%s", s[i].name, sizeof(s[i].name));

        printf("���� : ");
        scanf("%d", &s[i].score);
    }

    system("cls");
    printf("\n\n\t\t***�л� ���� ���***\n\n");
    linePrint('=', 31);
    printf("%4s %-20s %5s\n", "�й�", "�̸�", "����");
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

// ����_16.3 - ����ü �����ͷ� ����ü �迭�� ����� �ɹ��� �����ϴ� ����

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

// ����_17.1 - ����ü ���Կ��� ����

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

// ����_17.2 - ����ü ���� Call-by-Value ����

#include <stdio.h>

typedef struct data
{
    int a;
    double b;
    char c;
}DATA;

void input(DATA d)
{
    printf("�����Է� : ");
    scanf("%d", &d.a);

    printf("�Ǽ��Է� : ");
    scanf("%lf", &d.b);

    printf("�����Է� : ");
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

// ����_17.3 - ����ü ���� Call-by-Reference ����

#include <stdio.h>

typedef struct data
{
    int a;
    double b;
    char c;
}DATA;

void input(DATA* p)
{
    printf("�����Է� : ");
    scanf("%d", &p->a);

    printf("�Ǽ��Է� : ");
    scanf("%lf", &p->b);

    printf("�����Է� : ");
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

// ����_17.1 -  �л� �Ѹ��� ������ student ����ü�� ������ �� ����ϴ� ���α׷� �ۼ�

#include <stdio.h>

typedef struct stud
{
    int stuID, kor, eng, mat, sum;
    double avg;
    char name[20];
}student;

void input(student* p)
{
    printf("# �л� ���� �Է� #\n\n");

    p->stuID = 1;

    printf("�̸� : ");
    scanf("%s", p->name, sizeof(p->name));

    printf("���� : ");
    scanf("%d", &p->kor);

    printf("���� : ");
    scanf("%d", &p->eng);

    printf("���� : ");
    scanf("%d", &p->mat);

    p->sum = p->kor + p->eng + p->mat;
    p->avg = p->sum / 3.0;
}

void output(student* p)
{
    printf("\n\n\t\t# �л� ���� ��� #\n\n");
    printf("% 4s % -10s %5s %5s %5s %5s %8s\n", "�й�", "�̸�", "����", "����", "����", "����", "���");
    printf("============================================================\n");
    printf("%4d %-10s %5d %5d %5d %5d %8.2f\n", p->stuID, p->name, p->kor, p->eng, p->mat, p->sum, p->avg);
}

int main(void)
{
    student s; // ����ü ��������
    input(&s);// �Է� �Լ� ȣ��
    output(&s);// ��� �Լ� ȣ��

    return 0;
}

*/