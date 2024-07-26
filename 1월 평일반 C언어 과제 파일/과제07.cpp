/*

// 예제_10.1 - 사용자 정의 함수

#include <stdio.h>

void func_line()
{
	printf("----\n");
}

void func_star()
{
	printf("****\n");
}

int main(void)
{
	func_star();
	func_star();
	func_line();
	func_star();
	func_line();

	return 0;
}

*/

/*

// 예제_10.2 - 사용자 정의 함수

#include <stdio.h>

void sum(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

void div(int a, int b)
{
	printf("%d / %d = %.2f\n", a, b, (double)a / b);     // (double)(a / b) 하면 몫 출력. a만 double 처리해주면 나눗셈.
}

int main(void)
{
	int num1, num2;

	printf("입력1 : ");
	scanf("%d", &num1);

	printf("입력2 : ");
	scanf("%d", &num2);

	sum(num1, num2);
	div(num1, num2);

	return 0;
}

*/

/*

// 예제_10.3 - 사용자 정의 함수

#include <stdio.h>

int sum(int a, int b)
{
	return a + b;
}

double div(int a, int b)
{
	return (double)a / b;

	// double result;
	// result = (double)a / b;

	// return result;
}

int main(void)
{
	int num1, num2, result;

	printf("입력1 : ");
	scanf("%d", &num1);

	printf("입력2 : ");
	scanf("%d", &num2);

	result = sum(num1, num2) * 10;

	printf("\n\n(%d + %d) * 10 = %d\n", num1, num2, result);
	printf("%d / %d = %.2f\n", num1, num2, div(num1, num2));

	return 0;
}

*/

/*

// 문제_10.1 - 사용자 정의 함수를 구현하여 코드를 완성시켜라. 이름 : power, 기능 : 정수의 제곱을 구해 return 하는 함수.

#include <stdio.h>

double power(int n)     // double 대신 int로 써도 됨.
{
	return n * n;
}

int main(void)
{
	double re;
	int num;

	printf("제곱할 수를 입력 : ");
	scanf("%d", &num);

	re = power(num);
	printf("%d의 제곱은 %.0f 입니다.\n", num, re);

	return 0;
}

*/

/*

// 문제_10.2 - 이름 : sameNum, 기능 : 2개의 정수가 일치하면 1을 return, 아니면 0을 return 하는 함수.

#include <stdio.h>

int sameNum(int a, int b)
{
	if (a == b)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

int main(void)
{
	int s1, s2;

	printf("두 수 입력 : ");
	scanf("%d %d", &s1, &s2);

	if (sameNum(s1, s2))
	{
		printf("두 수는 같습니다.\n");
	}

	else
	{
		printf("두 수는 같지 않습니다.\n");
	}

	return 0;
}

*/

/*

// 문제_10.3 - 이름 : primeNum, 기능 : 소수라면 1을 return, 아니라면 0을 return 하는 함수.

#include <stdio.h>

int primeNum(int n)
{
	int count = 0;

	for (int i = 1; i <= n; i++)
	{
		if (n % i == 0)
		{
			count++;
		}
	}

	if (count == 2)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

int main(void)
{
	int su;

	printf("숫자 입력 : ");
	scanf("%d", &su);

	if (primeNum(su))
	{
		printf("%d는(은) 소수입니다.\n", su);
	}

	else
	{
		printf("%d는(은) 합성수입니다.\n", su);
	}

	return 0;
}

*/

/*

// 문제_10.4 - 세 개의 수를 입력받아 가장 큰 수와 가장 작은 수를 출력하는 프로그램 작성, 가장 큰 수는 Max라는 이름의 사용자 정의함수, 가장 작은 수는 Min이라는 이름의 사용자 정의함수로 구현

#include <stdio.h>

int Max(int a, int b, int c)
{
	int max = 0;

	if (a > b)
	{
		if (a > c)
		{
			max = a;
			return max;
		}

		else if (a < c)
		{
			max = c;
			return max;
		}
	}

	else if (a < b)
	{
		if (b > c)
		{
			max = b;
			return max;
		}

		else if (b < c)
		{
			max = c;
			return max;
		}
	}
}

int Min(int a, int b, int c)
{
	int min = 0;

	if (a < b)
	{
		if (a < c)
		{
			min = a;
			return min;
		}

		else if (a > c)
		{
			min = c;
			return min;
		}
	}

	else if (a > b)
	{
		if (b < c)
		{
			min = b;
			return min;
		}

		else if (b > c)
		{
			min = c;
			return min;
		}
	}
}

int main(void)
{
	int num1, num2, num3;
	printf("세 개의 수를 입력하세요 : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("가장 큰 수는 %d 입니다.\n", Max(num1, num2, num3));
	printf("가장 작은 수는 %d 입니다.\n", Min(num1, num2, num3));

	return 0;
}

*/