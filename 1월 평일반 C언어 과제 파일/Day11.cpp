/*

[ Rand 함수를 이용한 임의의 난수 생성 ]
- 컴퓨터에서는 모든 것들이 계산으로 이루어 짐으로 random을 표현 할 수 없다.
- 컴퓨터에서는 "특정 원소가 나타날 확률 1/n"을 "random" 이라고 표현 한다.
- "rand 함수"는 "난수를 생성할 때 사용", "srand 함수"는 "난수를 생성할 초기값을 저장할 때 사용"하며 <stdlib.h>헤더를 선언
- "time 함수"는 "srand 함수의 초기값 ( Seed 값 생성 )", <time.h> 헤더를 선언
- rand 함수를 통해 생성할 수 있는 값은 0 ~ 32767까지.
- 원하는 범위의 난수 구하는 공식 ( rand() % n + 1 )

*/

/*

// [ 예제.1 ]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int random_num;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		random_num = 0;     // 초기화 해주기
		random_num = rand() % 45 + 1;

		printf("%d\n", random_num);     // 1~45 까지의 수 중 랜덤으로 5개 출력. (0은 안나오는거같다.)
	}
}

*/

/*

// [ 예제.2 ] - 강의자료_8.7

#include <stdio.h>

void main()
{
	int arr[10];
	for (int i = 0; i < 10; i++)
	{
		arr[i] = i + 1;
		printf("%d, ", arr[i]);
	}
	printf("\b\b \n");
}

*/

/*

// [ 예제.3 ] - 강의자료_8.9

#include <stdio.h>

void main()
{
	char arr[10];
	scanf("%s", arr, sizeof(arr));     // abcdefghi 입력 (9글자 + 공백)

	for (int i = 0; i < 10; i++)
	{
		printf("%c", arr[i]);     // a,b,c,d,e,f,g,h,i 각각 하나씩 출력됨.
	}

	printf("\n\n%s\n", arr);     // %s라서 그런지 arr[0]~[9] 모두 출력.
	printf("\n\n%s\n", &arr[2]);     // %c 와 arr[2] 로 쓰면 'c'만 출력.
}

*/

/*

// [ 예제.4 ] - 강의자료_8.10

#include <stdio.h>
#include <string.h>     // strcpy 사용 헤더파일

void main()
{
	char arr1[10] = "KGITBANK";
	char arr2[10];
	printf("arr1: %s\n", arr1);
	strcpy_s(arr2, sizeof(arr2) ,"TEST_STR");     // string copy => 문자열 복사 , 복사할 원본 문자열은 반드시 끝에 NULL 문자가 포함되어 있어야 한다. arr2에 TEST_STR.
	printf("arr2: %s\n", arr2);
	strcpy_s(arr2, sizeof(arr2), arr1);     // arr2에 KGITBANK.
	printf("arr2: %s\n", arr2);
}

*/

/*

// [ 예제.5 ] - 강의자료_8.13~18 , 선택정렬 알고리즘 (이 문제는 내림차순 정렬.)

#include <stdio.h>

void main()
{
	int num[5] = { 4,8,2,7,6 };
	int tmp;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])     // 부호 반대로 뒤집으면 오름차순 구해짐.
			{
				tmp = num[i];     // tmp = 4
				num[i] = num[j];     // num[0] = 8 , i자리에 j자리의 값 배정.
				num[j] = tmp;     // num[1] = 4  , j자리에 기존i자리의 값 배정.
			
				// tmp = num[j];
				// num[j] = num[i];
				// num[i] = tmp;     => 이렇게도 표현 가능.
			}
		}
	}

	for (int i = 0; i < 5; i++)
	{
		printf("%d, ", num[i]);
	}
}

*/

/*

// [ 예제.6 ] - 강의자료_8.19~25 , 순위구하기

#include <stdio.h>

void main()
{
	int jumsu[5] = { 82,85,76,79,96 };
	int rank[5];

	for (int i = 0; i < 5; i++)
	{
		rank[i] = 1;

		for (int j = 0; j < 5; j++)
		{
			if (jumsu[i] < jumsu[j])
			{
				rank[i]++;
			}
		}

		printf("%d, ", rank[i]);
	}
}

*/

/*

// [ 예제.7 ] - 강의자료_8-2.5~6 , 다차원 배열 예제

#include <stdio.h>

void main()
{
	int a[3][3] = { {11,12,13},     // (0,0), (0,1), (0,2)
					{21,22,23},     // (1,0), (1,1), (1,2)
					{31,32,33} };     // (2,0), (2,1), (2,2)

	for (int i = 0; i < 3; i++)     // ++i 로 써도 상관없음.
	{
		for (int j = 0; j < 3; j++)     // ++j 로 써도 상관없음.
		{
			printf(" 배열 요소 a[%d][%d]: %d", i, j, a[i][j]);
		}

		printf("\n");
	}
}

*/

/*

// 내가 직접 풀어보는 오름차순

#include <stdio.h>

int main(void)
{
	int num[5] = { 19, 17, 25, 39, 88 };
	int tmp;

	for (int i = 0; i <= 3; i++)
	{
		for (int j = i + 1; j <= 4; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}

	for (int k = 0; k <= 4; k++)
	{
		printf("%d, ", num[k]);
	}
	printf("\b\b \n");

	return 0;
}

*/