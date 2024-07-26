/*

// 문제_5.1 - 정수를 입력받아 아래와 같이 출력하는 프로그램을 작성(if문 이용)

#include <stdio.h>

int main(void)
{
	int num;
	printf("정수 입력 : ");
	scanf("%d", &num);

	if (num % 3 != 0 && num % 4 != 0 || num == 0)
	{
	printf("\n%d은(는) 3의 배수도 4의 배수도 아닙니다.", num);
	}

	else if (num % 3 == 0 && num % 4 == 0)
	{
		printf("\n%d은(는) 3의 배수 이면서, 4의 배수입니다.", num);
	}

	else if (num % 3 == 0)
	{
		printf("\n%d은(는) 3의 배수입니다.", num);
	}

	else if (num % 4 == 0)
	{
		printf("\n%d은(는) 4의 배수입니다.", num);
	}

	return 0;
}

*/

/*

// 문제_5.2 - 점수를 입력받아 등급을 출력하는 프로그램을 작성(switch문 이용)

#include <stdio.h>

int main(void)
{
	int score;
	float result;
	char grade;
	printf("정수 입력 : ");
	scanf("%d", &score);

	result = (float)score / 10;
	if (result > 10)
	{
		result++;
	}
	if (result < 0 && result >= -1)
	{
		result--;
	}

	switch ((int)result)
	{
	case 10:
	case 9:
		grade = 'A';
		printf("\n%d점 ==> %c등급", score, grade);
		break;
	case 8:
		grade = 'B';
		printf("\n%d점 ==> %c등급", score, grade);
		break;
	case 7:
		grade = 'C';
		printf("\n%d점 ==> %c등급", score, grade);
		break;
	case 6:
		grade = 'D';
		printf("\n%d점 ==> %c등급", score, grade);
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		grade = 'F';
		printf("\n%d점 ==> %c등급", score, grade);
		break;
	default:
		printf("\n잘못된 입력 < 0 ~ 100 사이 입력 >");
	}

	return 0;
}

*/