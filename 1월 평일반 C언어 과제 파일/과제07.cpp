/*

// ����_10.1 - ����� ���� �Լ�

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

// ����_10.2 - ����� ���� �Լ�

#include <stdio.h>

void sum(int a, int b)
{
	printf("%d + %d = %d\n", a, b, a + b);
}

void div(int a, int b)
{
	printf("%d / %d = %.2f\n", a, b, (double)a / b);     // (double)(a / b) �ϸ� �� ���. a�� double ó�����ָ� ������.
}

int main(void)
{
	int num1, num2;

	printf("�Է�1 : ");
	scanf("%d", &num1);

	printf("�Է�2 : ");
	scanf("%d", &num2);

	sum(num1, num2);
	div(num1, num2);

	return 0;
}

*/

/*

// ����_10.3 - ����� ���� �Լ�

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

	printf("�Է�1 : ");
	scanf("%d", &num1);

	printf("�Է�2 : ");
	scanf("%d", &num2);

	result = sum(num1, num2) * 10;

	printf("\n\n(%d + %d) * 10 = %d\n", num1, num2, result);
	printf("%d / %d = %.2f\n", num1, num2, div(num1, num2));

	return 0;
}

*/

/*

// ����_10.1 - ����� ���� �Լ��� �����Ͽ� �ڵ带 �ϼ����Ѷ�. �̸� : power, ��� : ������ ������ ���� return �ϴ� �Լ�.

#include <stdio.h>

double power(int n)     // double ��� int�� �ᵵ ��.
{
	return n * n;
}

int main(void)
{
	double re;
	int num;

	printf("������ ���� �Է� : ");
	scanf("%d", &num);

	re = power(num);
	printf("%d�� ������ %.0f �Դϴ�.\n", num, re);

	return 0;
}

*/

/*

// ����_10.2 - �̸� : sameNum, ��� : 2���� ������ ��ġ�ϸ� 1�� return, �ƴϸ� 0�� return �ϴ� �Լ�.

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

	printf("�� �� �Է� : ");
	scanf("%d %d", &s1, &s2);

	if (sameNum(s1, s2))
	{
		printf("�� ���� �����ϴ�.\n");
	}

	else
	{
		printf("�� ���� ���� �ʽ��ϴ�.\n");
	}

	return 0;
}

*/

/*

// ����_10.3 - �̸� : primeNum, ��� : �Ҽ���� 1�� return, �ƴ϶�� 0�� return �ϴ� �Լ�.

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

	printf("���� �Է� : ");
	scanf("%d", &su);

	if (primeNum(su))
	{
		printf("%d��(��) �Ҽ��Դϴ�.\n", su);
	}

	else
	{
		printf("%d��(��) �ռ����Դϴ�.\n", su);
	}

	return 0;
}

*/

/*

// ����_10.4 - �� ���� ���� �Է¹޾� ���� ū ���� ���� ���� ���� ����ϴ� ���α׷� �ۼ�, ���� ū ���� Max��� �̸��� ����� �����Լ�, ���� ���� ���� Min�̶�� �̸��� ����� �����Լ��� ����

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
	printf("�� ���� ���� �Է��ϼ��� : ");
	scanf("%d %d %d", &num1, &num2, &num3);

	printf("���� ū ���� %d �Դϴ�.\n", Max(num1, num2, num3));
	printf("���� ���� ���� %d �Դϴ�.\n", Min(num1, num2, num3));

	return 0;
}

*/