/*

// ����_3.1 - ������

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= 9; i++)
	{
		printf("%d * %d = %d\n", N, i, N * i);
	}
	return 0;
}

*/

/*

// ����_3.2 - A+B - 3

#include <stdio.h>

int main(void)
{
	int A, B, T;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("%d\n", A + B);
	}

	return 0;
}

*/

/*

// ����_3.3 - ��

#include <stdio.h>

int main(void)
{
	int n, sum = 0;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	printf("%d", sum);

	return 0;
}

*/

/*

// ����_3.4 - ������

#include <stdio.h>

int main(void)
{
	int X, N, a, b, sum = 0;
	scanf("%d\n%d", &X, &N);

	for (int i = 1; i <= N; i++)
	{
		scanf("%d %d", &a, &b);
		sum += (a * b);
	}

	if (X == sum)
	{
		printf("Yes");
	}
	
	else
	{
		printf("No");
	}

	return 0;
}

*/

/*

// ����_3.5 - �ڵ��� ü������ �Դϴ�

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= (N / 4); i++)
	{
		printf("long ");
	}

	printf("int");

	return 0;
}

*/

/*

// ����_3.7 - A+B - 7

#include <stdio.h>

int main(void)
{
	int T, A, B;
	scanf("%d", &T);

	for (int i = 1; i <= T; i++)
	{
		scanf("%d %d", &A, &B);
		printf("Case #%d: %d\n", i, (A + B));
	}

	return 0;
}

*/

/*

// ����_3.9 - �� ��� - 1

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

*/

/*

// ����_3.10 - �� ��� - 2

#include <stdio.h>

int main(void)
{
	int N;
	scanf("%d", &N);

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= N - i; j++)
		{
			printf(" ");
		}

		for (int k = 1; k <= i; k++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

*/

/*

// ����_3.11 - A+B - 5

#include <stdio.h>

int main(void)
{
	while (1)
	{
		int A = 0, B = 0;
		scanf("%d %d", &A, &B);

		if (A == 0 && B == 0)
		{
			break;
		}

		printf("%d\n", (A + B));
	}

	return 0;
}

*/

/*

// ����_3.12 - A+B - 4

#include <stdio.h>

int main(void)
{
	int A, B;
	while (scanf("%d %d", &A, &B) != EOF)     // ctrl + z �Է� �� ���� ����.
	{
		printf("%d\n", A + B);
	}

	return 0;
}

*/