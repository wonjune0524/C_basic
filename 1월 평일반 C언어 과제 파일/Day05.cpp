/*

// [ 예제.1 ]
#include <stdio.h>

void main()
{
	int num;
	printf("정수를 입력하세요: ");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))     // num은 범위의 사이값
		{
			printf("입력 범위를 벗어 났습니다.!\n");
		}
}

*/

/*

// [ 예제.2 ]

#include <stdio.h>

void main()
{
	int su1, su2, su3;
	su1 = 10; su2 = ++su1;     // su1의 값을 1 증가시킨 후 su2에 할당
	printf("su1: %d, su2: %d\n", su1, su2);     // 따라서 11 11 출력
	su1 = 10; su3 = su1++;     // su1의 값을 su3에 할당한 뒤 su1의 값을 1 증가시킴.
	printf("su1: %d, su3: %d\n", su1, su3);     // 따라서 11 10 출력
}

*/

/*

// [ 예제.3 ]

// 조건연산자, ex) (조건식) ? 참인 경우 : 거짓인 경우 ;

#include <stdio.h>

void main()
{
	int su;
	su = 8;
	(su % 2 == 0) ? printf("짝수\n") : printf("홀수\n");     // 참이라서 짝수 출력
	su = 9;
	(su % 2 == 0) ? printf("짝수\n") : printf("홀수\n");     // 거짓이라서 홀수 출력
}

*/

/*

// [ 예제.4 ]

#include <stdio.h>

void main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		printf("%d\n", num1 > num2);     // 참일 경우 '1'을 거짓일 경우 '0'을 반환함.
	}
}

*/

/*

// [ 예제.5 ]

#include <stdio.h>

void main()
{
	int num1 = 1, num2 = 0;
	if (num1)     // (1)은 참값이므로 무조건 실행
	{
		printf("참\n");     // 따라서 '참' 출력
	}
	if (num2)     // (0)은 거짓값이므로 무조건 실행 X 
	{
		printf("거짓\n");     // 따라서 아무것도 출력 X
	}
	if (1)
	{
		printf("참\n");
	}
	if (0)
	{
		printf("거짓\n");
	}
}

*/

/*

// [ 예제.6 ]

#include <stdio.h>

void main()
{
	int su;
	printf("10보다 큰 정수를 입력하세요: ");
	scanf_s("%d", &su);
	if (su <= 10)
	{
		printf("10이하의 정수를 입력하셨습니다.\n");
		printf("10이하의 정수를 입력하셨습니다.\n");
		printf("10이하의 정수를 입력하셨습니다.\n");
	}
	printf("%d\n", su);
}

*/

/*

// [ 예제.7 ]

#include <stdio.h>

void main()
{
	int num1, num2, max, min;
	scanf_s("%d%d", &num1, &num2);
	if (num1 > num2) {
		max = num1;
		min = num2;
		printf("max: %d // min: %d\n", max, min);
	}
	else {
		max = num2;
		min = num1;
		printf("max: %d // min: %d\n", max, min);
	}
}

*/

/*

// [ 예제.8 ]

#include <stdio.h>

void main()
{
	int su;
	printf("정수 1개 입력: ");
	scanf_s("%d", &su);
	if (su >= 0)
	{
		if (su % 2 == 0)
			printf("%d: 양의 짝수\n", su);
		else
			printf("%d: 양의 홀수\n", su);
	}
	else {
		printf("%d: 음수\n");
	}
	printf("프로그램 종료\n");
}

*/     // 13페이지

