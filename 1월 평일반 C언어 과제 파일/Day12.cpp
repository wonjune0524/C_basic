/*

// [ 예제.1 ] - 강의자료_9.3 

#include <stdio.h>

void main()
{
	char ch1 = 'A', ch2;
	char *ptr;

	ptr = &ch1;     // ch1의 주소 저장
	ch2 = *ptr;     // ch2에 ch1의 내용 저장

	printf("\n변수 ch1의 주소는 %p 번지 입니다.", &ch1);
	printf("\n변수 ptr의 내용은 %p 입니다.", ptr);
	printf("\n변수 *ptr의 내용은 %c 입니다.", *ptr);
	printf("\n변수 ch2의 내용은 %c 입니다.", ch2);
}

*/

/*

// [ 예제.2 ] - 강의자료_9.4

#include <stdio.h>

void main()
{
	int num1 = 10, num2;
	int *ptr;

	ptr = &num1;
	num1++;
	num2 = 5;
	ptr = &num2;
	*ptr = *ptr + num1 + num2;     // 바로 위에서 ptr을 num2에 대해 정의하였으므로 num2에 이 값을 부여.
	printf("num1: %d, num2: %d, *ptr: %d\n", num1, num2, *ptr);
}

*/

/*

// [ 예제.3 ] - 강의자료_9.6

#include <stdio.h>

void main()
{
	char vc = 'A', *pc; // Char형 자료형의 크기는 1Byte
	pc = &vc;
	printf("\n %p", pc);		// pc의 주소값을 16진수로 출력
	printf("\n pc-1=%d번지,pc=%d번지,pc+1=%d번지", pc-1, pc, pc+1);		// pc의 주소값을 10진수로 출력
	printf("\n");

	int vi = 100, *pi; // Int형 자료형의 크기는 4Byte
	pi = &vi;
	printf("\n %p", pi);		// pi의 주소값을 16진수로 출력
	printf("\n pi-1=%d번지,pi=%d번지,pi+1=%d번지", pi-1, pi, pi+1);		// pi의 주소값을 10진수로 출력
	printf("\n");
	printf("\n");
}

*/

/*

// [ 예제.4 ] - 강의자료_9.7 , 포인터변수의 크기

#include <stdio.h>

int main()
{
	char a = 'A';
	float b = 12.345;
	char *pa;
	float *pb;
	pa = &a;
	pb = &b;
	printf("문자형 변수의 크기 : %d\n", sizeof(a));
	printf("실수형 변수의 크기 : %d\n", sizeof(b));
	printf("포인터 문자형 변수의 크기 : %d\n", sizeof(pa));
	printf("포인터 실수형 변수의 크기 : %d\n", sizeof(pb));

	return 0;
}

*/

/*

// [ 예제.5 ] - 강의자료_9.8

#include <stdio.h>

int main()
{
	int i = 5, j = 10;
	int *p = &i, *q = &j;

	printf("(1) i = %d, j = %d\n", i, j);
	printf("(2) &i = %p, &j = %p\n", &i, &j);
	printf("(3) p = %p, q = %p\n", p, q);
	printf("(4) *p = %d, *q = %d\n", *p, *q);
	printf("(5) p == &i ==> %d\n", p == &i);     // 참이므로 1 출력.

	return 0;
}

*/

/*

// [ 예제.6 ] - 강의자료_9.10~11 , 포인터와 배열

#include <stdio.h>

void main()
{
	int i;
	int a[5] = { 10, 20, 30, 40, 50 };
	for (i = 0; i < 5; i++)
	{
		printf("배열의 주소 % d, 배열의 값 % d\n", a + i, *(a + i));
	}
}

// 또는

#include <stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int i, *pa;
	pa = a;     // 배열은 & 안붙여도 되나보다.
	for (i = 0; i < 5; i++)
	{
		printf("배열의 주소 %d, 배열의 값 %d\n", pa + i, *(pa + i));
	}
	return 0;
}

*/

/*

// [ 예제.7 ] - 강의자료_9.12

#include <stdio.h>

int main()
{
	int a = 10, b[5] = { 1,2,3,4,5 }, * p;
	
	p = &a;
	printf("(1)  a=%d, *p=%d\n", a, *p);
	
	p = b;
	printf("(2)  a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));
	
	(*p)++;
	printf("(3)  a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));

	return 0;
}

*/

/*

// [ 예제.8 ] - 강의자료_9.14

#include <stdio.h>
#include <string.h>

void main()
{
	char s[] = "Seoul";

	for (int i = 0; i < strlen(s); i++)
	{
		putchar(*(s + i));     // 출력함수
	}
}

*/

/*

// [ 예제.9 ] - 강의자료_9.15

#include <stdio.h>

void main()
{
	char s[] = "Seoul";

	for (int i = 0; s[i] != NULL; i++)
	{
		putchar(s[i]);
		//putchar(*(s + i));
	}
}

*/

/*

// 포인터_Quiz - 강의자료_9.13

#include <stdio.h>

int main()
{
	int i, j, tmp, *pa;
	int a[8] = { 17,25,8,32,19,23,11,3 };
	pa = a;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (*(pa + i) > *(pa + j))
			{
				tmp = *(pa + j);
				*(pa + j) = *(pa + i);
				*(pa + i) = tmp;
			}
		}
	}

	for (i = 0; i < 8; i++)
	{
		printf("%4d", *(pa + i));
	}

	printf("\n");

	return 0;
}

*/