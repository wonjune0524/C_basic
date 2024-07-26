/*

// [예제.1]

#include <stdio.h>  
#include <conio.h>     // getch() 와 putch(ch) 사용가능하게 해줌.
#define ESC 0x1b     // ESC를 0x1b로 정의한다.

void main()
{
	char ch;
	while ((ch = getch()) != ESC)     // getch() 는 입력 버퍼를 사용하지 않고 바로 "한 글자"만을 입력받는 역할. (대충 그럼) 유사 scanf
	{
		rewind(stdin);     // 이전에 입력받아 놓은 것을 비워주는 역할. (버퍼 비우기)
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		putch(ch);     // ch에 있는 문자를 출력해주는 역할.
		printf("\n"); 
	}
}

*/

/*

// [예제.2]

#include <stdio.h>

void main()
{
	int i, temp;
	printf("수 입력: ");
	scanf_s("%d", &i);
	while (1)
	{
		temp = i % 10;     // i를 10으로 나눈 값의 나머지.
		i = i / 10;     // i를 10으로 나눈 값의 몫.
		printf("%d", temp);
		if (i == 0)
			break;
	}
	printf("\n");
}

*/

/*

// [Quiz.1] - 어떤 수의 약수를 구하는 프로그램 작성

#include <stdio.h>

void main()
{
	int num, cnt = 1;
	scanf_s("%d", &num);
	while (1) {
		if (num % cnt == 0)     // num을 1로 나눴을 때의 나머지가 0일 때
		{
			printf("%d ", cnt);
		}
		if (num == cnt)
		{
			break;
		}
		cnt++;
	}
}

*/

/*

// [Quiz.2] - 2부터 입력된 수 사이의 모든 소수를 찾는 프로그램 작성

#include <stdio.h>

void main()
{
	int num, cnt = 0;
	scanf_s("%d", &num);
	for (int i = 2; i <= num; i++)
	{
		for (int j = 2; j <= i; j++) 
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}
		if (cnt == 1)
		{
			printf("%d ", i);
		}
		cnt = 0;
	}
}

*/

/*

// [Quiz.3] - 1에서 1000까지의 자연수 중 4로 나누어도, 6으로 나누어도 나머지가 1인 수의 합을 출력.

#include <stdio.h>

void main()
{
	int num = 1, sum = 0;

	while (1)
	{
		if (num > 1000)
		{
			break;
		}
		if (num % 4 == 1 && num % 6 == 1) 
		{
			printf("%d ", num);
			sum += num;
		}
		num++;
	}

	printf("\n합: %d\n", sum);
}

*/

/*

// [Quiz.4] - 1~1000 사이의 자연수 중 완전수 구하기.

#include <stdio.h>

void main()
{
	int sum=0;

	for (int i = 1; i <= 1000; i++) 
	{
		for (int j = 1; j < i; j++) 
		{
			if (i % j == 0)
				sum += j;
		}

		if (i == sum)
		{
			printf("%d\n", i);
		}

		sum = 0;
	}
}

*/

/*

// [Quiz.5] - 두 수의 최대 공약수와 최소 공배수 구하기.

#include <stdio.h>

void main()
{
	int num1, num2, GCD, LCM, i = 2;
	scanf_s("%d%d", &num1, &num2);

	while (i <= num1 && i <= num2)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			GCD = i;     // 최대 공약수 구하기
		}
		i++;
	}
	LCM = num1 * num2 / GCD;     // 최소 공배수 구하기
	printf("최대 공약수: %d, 최소 공배수: %d\n", GCD, LCM);
}

*/