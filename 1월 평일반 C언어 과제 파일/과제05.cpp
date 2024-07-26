/*

// 문제_6.1 - 다중 for문을 이용하여 아래와 같이 출력되는 프로그램 작성

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 6 - i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

*/

/*

// 문제_6.2 - 다중 for문을 이용하여 구구단을 가로와 세로로 출력하는 프로그램 작성

#include <stdio.h>

int main(void)
{
	printf("## 구구단 가로출력 ##\n");
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int result1 = 0;
			result1 = i * j;
			printf("%d*%d=%2d  ", i, j, result1);
		}

		printf("\n");
	}

	printf("\n\n");

	printf("## 구구단 세로출력 ##\n");
	for (int k = 1; k <= 9; k++)
	{
		for (int p = 2; p <= 9; p++)
		{
			int result2 = 0;
			result2 = p * k;
			printf("%d*%d=%2d  ", p, k, result2);
		}

		printf("\n");
	}

	return 0;
}

*/