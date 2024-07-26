/*

// [ 예제.1 ]
#include <stdio.h>

void main()
{
	int kor, eng, mat, avr;
	printf("3과목 성적을 입력하세요: ");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	avr = (kor + eng + mat) / 3;

	if (avr < 70)
		printf("\n불합격!!(평균 미달)\n");
	else if (kor < 60)
		printf("불합격!!(국어점수 미달)\n");
	else if (eng < 60)
		printf("불합격!!(영어점수 미달)\n");
	else if (mat < 60)
		printf("불합격!!(수학점수 미달)\n");
	else
		printf("합격!!\n");
}

*/

/*
// [ 예제.2 ]
#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);
	switch (num) {
	case 1: printf("1번 선택\n"); break;
	case 2: printf("2번 선택\n"); break;
	case 3:
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		printf("3번 선택\n");
		break;
	default: printf("기본값!\n");
	}
}
*/

/*
// [ 예제.3 ]
#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);
	switch (num % 3) {
	case 0: printf("3의 배수!\n"); break;
	default: printf("3의 배수가 아닙니다!\n");
	}
}
*/

/*

// [ Quiz ] : 사칙연산

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n1 = 0, n2 = 0, sel = 0;
	while (1) {
		printf("사칙연산 계산기\n");
		printf("=================\n");
		printf("1. 덧셈\n");
		printf("2. 뺄셈\n");
		printf("3. 곱셈\n");
		printf("4. 나눗셈\n");
		printf("5. 프로그램 종료\n");
		printf("=================\n");
		printf("번호 선택 => ");
		scanf_s("%d", &sel);
		if (sel == 1 || sel == 2 || sel == 3 || sel == 4) {
			printf("연산을 수행 할 정수 2개를 입력: ");
			scanf_s("%d%d", &n1, &n2);
		}
		switch (sel) 
		{
		case 1: printf("%d + %d = %d\n", n1, n2, n1 + n2); break;
		case 2: printf("%d - %d = %d\n", n1, n2, n1 - n2); break;
		case 3: printf("%d * %d = %d\n", n1, n2, n1 * n2); break;
		case 4: printf("%d / %d = %d\n", n1, n2, n1 / n2); break;
		case 5: exit(1);
		default: printf("처음 화면으로 이동\n");
		}
		system("pause");
		system("cls");
	}
}

*/

/*
// [ Quiz ] : 성적표

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int num = 0, kor = 0, met = 0, eng = 0;
	float result = 0;
	char s1[30] = "\0";
	while (1) {
		printf("\t\tM e n u\n");
		printf("============================================\n");
		printf("\t1.학생이름 입력\n");
		printf("\t2.성적 3과목 입력\n");
		printf("\t3.학생이름 출력\n");
		printf("\t4.합계 출력\n");
		printf("\t5.평균 출력\n");
		printf("\t6.종료\n");
		printf("===========================================\n");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("학생 이름 입력: ");
			scanf_s("%s", s1, sizeof(s1)); break;
		case 2:
			printf("성적 3과목 입력: ");
			scanf_s("%d%d%d", &kor, &met, &eng); break;
		case 3:
			if (strcmp(s1, "\0") == 0)
				printf("이름이 입력되지 않았습니다.\n");
			printf("%s\n", s1);  break;
		case 4:
			result = kor + met + eng;
			printf("합계 : %d\n", (int)result); break;
		case 5:
			result = kor + met + eng;
			result = result / 3.0;
			printf("평균 : %.2f\n", result); break;
		case 6:exit(1);
		}
		system("pause");
		system("cls");
	}
}
*/

