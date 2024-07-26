/*

// 구구단 출력

#include <stdio.h>

int main(void)
{
	for (int num1 = 2; num1 <= 9; num1++)
	{
		printf("---%d단---\n", num1);

		for (int num2 = 1; num2 <= 9; num2++)
		{
			printf("%d * %d = %d\n", num1, num2, num1 * num2);
		}
	}

	return 0;
}

*/

/*

// 예금

#include <stdio.h>

int main(void)
{
	int dep = 1, sum = 0;

	for (int i = 1; i <= 30; i++)
	{
		sum += dep;
		dep *= 2;
	}

	printf("%d원\n", sum);

	return 0;
}

*/

/*

// 1 ~ 1000까지의 합

#include <stdio.h>

int main(void)
{
	int sum = 0;

	for (int i = 1; i <= 1000; i++)
	{
		sum += i;
	}

	printf("%d", sum);

	return 0;
}

*/

/*

// 1부터 시작하여~

#include <stdio.h>

int main(void)
{
	int sum = 0, i = 1;

	for (; sum < 10000 ; i+=2)
	{
		sum += i;
	}

	printf("%d", i);

	return 0;
}

*/