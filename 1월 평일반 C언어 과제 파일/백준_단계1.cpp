/*

// 문제_1.5 - A/B

#include <stdio.h>

int main(void)
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%.9f", (double)A / B);

	return 0;
}

*/

/*

// 문제_1.6 - 사칙연산

#include <stdio.h>

int main(void)
{
	int A, B;
	scanf_s("%d %d", &A, &B);
	printf("%d\n", A + B);
	printf("%d\n", A - B);
	printf("%d\n", A * B);
	printf("%d\n", A / B);
	printf("%d\n", A % B);

	return 0;
}

*/

/*

// 문제_1.7 - ??!

#include <stdio.h>

int main(void)
{
	char id[51];
	scanf("%s", id);
	printf("%s??!", id);

	return 0;
}

*/

/*

// 문제_1.8 - 1998년생인 내가 태국에서는 2541년생?!

#include <stdio.h>

int main(void)
{
	int y;
	scanf("%d", &y);
	printf("%d", y - 543);

	return 0;
}

*/

/*

// 문제_1.9 - 나머지

#include <stdio.h>

int main(void)
{
	int A, B, C;
	scanf("%d %d %d", &A, &B, &C);
	printf("%d\n", (A + B) % C);
	printf("%d\n", ((A % C) + (B % C)) % C);
	printf("%d\n", (A * B) % C);
	printf("%d\n", ((A % C) * (B % C)) % C);

	return 0;
}

*/

/*

// 문제_1.10 - 곱셈

#include <stdio.h>

int main(void)
{
	int num1, num2;
	scanf("%d\n%d", &num1, &num2);

	int A = num1 * (num2 % 10), B = num1 * (num2 / 10 - ((num2 / 100) * 10)), C = num1 * (num2 / 100);
	printf("%d\n", A);
	printf("%d\n", B);
	printf("%d\n", C);
	printf("%d\n", A + 10 * B + 100 * C);
	
	return 0;
}

*/

/*

// 문제_1.11 - 꼬마 정민

#include <stdio.h>

int main(void)
{
	long long A, B, C;
	scanf("%lld %lld %lld", &A, &B, &C);
	printf("%lld", A + B + C);

	return 0;
}

*/

/*

// 문제_1.12 - 고양이

#include <stdio.h>

int main(void)
{
	printf("\\    /\\ \n");
	printf(" )  ( ')\n");
	printf("(  /  )\n");
	printf(" \\(__)|");

	return 0;
}

*/

/*

// 문제_1.13 - 개

#include <stdio.h>

int main(void)
{
	printf("|\\_/|\n");
	printf("|q p|   /}\n");
	printf("( 0 )\"\"\"\\\n");
	printf("|\"^\"`    |\n");
	printf("||_/=\\\\__|");

	return 0;
}

*/ 