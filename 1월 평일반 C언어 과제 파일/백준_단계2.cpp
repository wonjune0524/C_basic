/*

// 문제_2.1 - 두 수 비교하기

#include <stdio.h>

int main(void)
{
	int A, B;
	scanf("%d%d", &A, &B);

	if (A > B)
	{
		printf(">");
	}

	else if (A < B)
	{
		printf("<");
	}

	else
	{
		printf("==");
	}

	return 0;
}

*/

/*

// 문제_2.2 - 시험 성적

#include <stdio.h>

int main(void)
{
	int score;
	scanf("%d", &score);

	if (score >= 90)
	{
		printf("A");
	}

	else if (score >= 80)
	{
		printf("B");
	}

	else if (score >= 70)
	{
		printf("C");
	}

	else if (score >= 60)
	{
		printf("D");
	}

	else
	{
		printf("F");
	}

	return 0;
}

*/

/*

// 문제_2.3 - 윤년

#include <stdio.h>

int main(void)
{
	int year;
	scanf("%d", &year);

	if (year % 4 == 0 && year % 400 == 0)
	{
		printf("1");
	}

	else if (year % 4 == 0 && year % 100 != 0)
	{
		printf("1");
	}

	else
	{
		printf("0");
	}

	return 0;
}

*/

/*

// 문제_2.4 - 사분면 고르기

#include <stdio.h>

int main(void)
{
	int x, y;
	scanf("%d\n%d", &x, &y);

	if (x > 0 && y > 0)
	{
		printf("1");
	}

	else if (x < 0 && y > 0)
	{
		printf("2");
	}

	else if (x < 0 && y < 0)
	{
		printf("3");
	}

	else if (x > 0 && y < 0)
	{
		printf("4");
	}

	return 0;
}

*/

/*

// 문제_2.5 - 알람 시계

#include <stdio.h>

int main(void)
{
	int H, M;
	scanf("%d %d", &H, &M);

	if (M < 45)
	{
		if (H == 0)
		{
			H = 23;
		}

		else
		{
			H--;
		}

		M += 15;
		printf("%d %d", H, M);
	}

	else if (M >= 45)
	{
		M -= 45;
		printf("%d %d", H, M);
	}

	return 0;
}

*/

/*

// 문제_2.6 - 오븐 시계

#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d\n%d", &A, &B, &C);

	if (B + C < 60)
	{
		printf("%d %d", A, B + C);
	}

	else if (B + C >= 60)
	{
		if (A + (B + C) / 60 < 24)
		{
			printf("%d %d", A + (B + C) / 60, (B + C) % 60);
		}

		else
		{
			printf("%d %d", (A + (B + C) / 60) % 24, (B + C) % 60);
		}
	}

	return 0;
}

*/

/*

// 문제_2.7 - 주사위 세 개

#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);

	if (A == B && B == C)
	{
		printf("%d", (10000 + A * 1000));
	}

	else if (A == B)
	{
		printf("%d", (1000 + A * 100));
	}

	else if (B == C)
	{
		printf("%d", (1000 + B * 100));
	}

	else if (C == A)
	{
		printf("%d", (1000 + C * 100));
	}

	else
	{
		if (A > B && A > C)
		{
			printf("%d", A * 100);
		}

		else if (B > A && B > C)
		{
			printf("%d", B * 100);
		}

		else if (C > A && C > B)
		{
			printf("%d", C * 100);
		}
	}

	return 0;
}

*/