/*

// [ 예제.1 ] - 강의자료_7.6

#include <stdio.h>     // 헤더파일

float avrg(int j, int k)     // 함수 1 - 평균값 출력
{
	int total = 0;
	float f;
	total = j + k;
	f = total / 2.0;     // 2.0 대신 2라고 쓰면 몫으로 출력됨.
	return f;
}

void show_avrg(int a, int b, float c)     // 함수 2 - printf 출력
{
	printf("\n%d 와 %d 의 평균값은 %3.1f 입니다.\n", a, b, c);
}

int main(void)     // 메인 함수
{
	int i = 2, j = 3;
	float f = avrg(i, j);
	show_avrg(i, j, f);

	return 0;
}

*/

/*

// [ 예제.2 ] - 강의자료_7.7

#include <stdio.h>

char big(int x, int y)
{
	if (x > y)
	{
		return 'Y';
	}

	else if (x < y)
	{
		return 'N';
	}

	else
	{
		return '=';
	}
}

int main(void)
{
	int a = 100, b = 100;
	char size = big(a, b);
	
	if (size == 'Y')
	{
		printf("\n%d는(은) %d보다 크다.", a, b);
	}

	else if (size == 'N')
	{
		printf("\n%d는(은) %d보다 작다.", a, b);
	}

	else
	{
		printf("\n%d는(은) %d과(와) 같다.", a, b);
	}

	return 0;
}

*/

/*

// [ 예제.3 ] - 강의자료_7.11

#include <stdio.h>

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}

	else
	{
		return (n * fact(n - 1));
	}
}

void main()
{
	int x = 5;
	printf("연산 결과 값은 %d입니다.\n", fact(x));     // 5 * 4 * 3 * 2 * 1
}

*/

/*

// [문제.1] - 두 수를 입력받아 큰 수를 출력하는 함수

#include <stdio.h>

int big(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}

	else
	{
		return n2;
	}
}

void main()
{
	int num1, num2, ret;
	printf("정수 2개 입력: ");
	scanf_s("%d %d", &num1, &num2);
	ret = big(num1, num2);
	printf("큰 수: %d\n", ret);
}

*/

/*

// [문제.2] - 입력받은 값이 짝수인지 홀수인지 판별하는 함수

#include <stdio.h>

int OddEven(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

void main() 
{
	int num, ret;
	printf("정수입력: ");
	scanf_s("%d", &num);
	ret = OddEven(num);

	if (ret == 1)
	{
		printf("입력하신 정수는 짝수 입니다.\n");
	}

	else
	{
		printf("입력하신 정수는 홀수 입니다.\n");
	}
}

*/

/*

// [문제.3] - 3의 배수를 판별, main에서 3의 배수만 출력하는 함수

#include <stdio.h>

int multiple(int n)
{
	if (n % 3 == 0)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

void main()
{
	int num, ret;
	printf("정수입력: ");
	scanf_s("%d", &num);
	ret = multiple(num);

	if (ret == 1)
	{
		printf("입력하신 정수는 3의 배수입니다.\n");
	}

	else
	{
		printf("입력하신 정수는 3의 배수가 아닙니다.\n");
	}
}

*/

/*

// [문제.4] - 수를 입력받아 소수를 판별하는 함수

#include <stdio.h>

int sosu(int n)
{
	int cnt = 0, num = 1;

	if (n == 1)
	{
		cnt = 1;
		return cnt;
	}

	while (1)
	{
		if (n % num == 0)
		{
			cnt++;
		}

		if (n == num)
		{
			break;
		}

		num++;
	}

	return cnt;
}

void main()
{
	int num, ret;
	printf("정수 입력: ");
	scanf_s("%d", &num);
	ret = sosu(num);

	if (ret == 2)
	{
		printf("입력하신 정수는 소수 입니다.\n");
	}

	else
	{
		printf("입력하신 정수는 소수가 아닙니다.\n");
	}
}

*/

/*

// [문제.5] - 절대값을 구하는 함수

#include <stdio.h>

int absolute(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return n;
}

void main()
{
	int num, ret;
	printf("정수입력: ");
	scanf_s("%d", &num);
	ret = absolute(num);
	printf("%d의 절대값은 %d 입니다.\n", num, ret);
}

*/

/*

// [문제.6] - 수를 거꾸로 반환하는 함수

#include <stdio.h>

int reverse(int n)
{
	int i, temp, ret = 0;

	while (1)
	{
		temp = n % 10;     // n = 312, temp = 2 / n = 31, temp = 1 / n = 3, temp = 3
		n = n / 10;     // n = 31 / n = 3 / n = 0
		ret = (ret + temp) * 10;     // ret = 20 / 210 / 2130

		if (n == 0)
		{
			ret = ret / 10;
			break;
		}
	}

	return ret;
}

void main()
{
	int num, ret;
	printf("정수입력: ");
	scanf_s("%d", &num);
	ret = reverse(num);
	printf("뒤집힌 값: %d\n", ret);
}

*/