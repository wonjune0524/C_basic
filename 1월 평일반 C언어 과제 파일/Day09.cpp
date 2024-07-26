
// * 전처리기 정의 
// - 컴파일전 파일이나 문자열 치환과 같은 문법 외적인 처리를 먼저 수행
// - 컴파일시 연산처리는 이루어 지지 않고, 치환만 진행

// * #include
// - 디스크 상에 존재하는 특정 파일의 내용을 작성중인 소스파일에 포함
// - 1. #include <stdio.h> : C언어 자체적으로 지원
// - 2. #include "test.h"  : 사용자 정의 형식

// * #define
// - 프로그램에서 특정 문자열을 정의하고 적절하게 치환할 때 사용
// - 1. #define <매크로 이름>		<대체 문자열>
// - 2. #define <매크로 이름(인수)	<대체 문자열>

/*

// [예제.1]

#include "Mydefine.h"

void main()
{
	int ret;
	ret = PI * 2 * 5;
	printf("%d\n", ret);
	printf("%d\n", (int)PI);
}

*/

/*

// [예제.2]
#include "Mydefine.h"

void main()
{
	SP("테스트");
	NL;
	DP(200);
	NL;
	CP('A');
	NL;
	FP(123.456);
	NL;
}

*/

/*

// [예제.3]
#include "Mydefine.h"

void main()
{
	int ret;
	while (TRUE) 
	{
		scanf_s("%d", &ret);
		if (ret <= MAX && ret >= MIN)
		{
			break;
		}
		SP("범위 초과");
		NL;
		SP("다시 입력");
		NL;
	}
	DP(ret);
}

*/

/*

// [예제.4]
#include "Mydefine.h"
#define SUM(a,b) a+b	// 2 + 3 + 4 + 5 = 14
#define MUL(a,b) a*b	// 2 + 3 * 4 + 5 = 19

void main()
{
	int ret;
	ret = SUM(5, 10);
	DP(ret);
	NL;

	ret = SUM(2 + 3, 4 + 5);
	DP(ret);
	NL;

	ret = MUL(2 + 3, 4 + 5);
	DP(ret);
	NL;
}

*/

/*

// [예제.5]
#include "Mydefine.h"
#define GR_MODE 1

void main()
{
	#ifdef GR_MODE     // 참이므로 그냥 실행.
		printf("그래픽 모드");
	#endif
}

*/

// [ 변수의 유효범위 ]
// 1. 지역 변수 : "해당 지역에서만 사용가능"
// 2. 전역 변수 : "프로그램 전체에서 사용가능"
// 3. 정적 변수 : "프로그램 전체에서 사용 ( static 지시자가 붙음 )"

// [ 변수의 수명 ] : 변수가 기억공간을 점유하기 시작해서 소멸 될때까지의 시간
// 지역 변수 : 선언 된 지역을 벗어날 경우 소멸
// 전역 변수 : 프로그램 종료시 소멸
// 정적 변수 : 프로그램 종료시 소멸

/*

// [ 예제.6 ] : 지역변수

#include <stdio.h>

void main()
{
	int a = 100, b = 200;

	if (a == 100)
	{
		int c = 10, d = 20;
		printf("c : %d\n", c);
		printf("d : %d\n", d);

	}

	printf("a : %d\n", a);
	printf("b : %d\n", b);
}

*/

/*

// [ 예제.7 ] : 전역변수

#include <stdio.h>
int a;     // 전역 변수 선언

void main()
{
	a = 100;

	if (a == 100)
	{
		a = 10;
		printf("a : %d\n", a);
	}

	printf("a : %d\n", a);
}

*/

/*

// [ 예제.8 ] : 정적변수 - // 초기화해주지 않아도 자동으로 0으로 초기화되는 변수.

#include <stdio.h>

void main()
{
	for (int i = 0; i < 10; i++)
	{
		static int a = 100;
		a++;
		printf("a: %d\n", a);
	}
}

*/

/*

// [ 예제.9 ]

#include <stdio.h>

int SumFunc(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}

	return sum;  // Return Value "O" -> "int, float, char ... "
	// return;	 // Return Value "X" -> "void"
}

int main()
{
	int num = 0, sum = 0;
	scanf_s("%d", &num);
	sum = SumFunc(num); // 함수 호출
	printf("1~NUM 까지의 누적합: %d\n", sum);
	printf("함수 호출 완료\n");
	return 0;
}

*/