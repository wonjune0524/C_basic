/*

// 예제_2.1 - 정수, 실수, 문자형 변수에 각각 값을 대입한 후, 출력하는 예제

#include <stdio.h>

int main(void)
{
	int val1 = 100;
	double val2 = 200.0;
	char val3 = 'A';

	printf("val1은 정수이며 값은 %d 입니다.\n", val1);
	printf("val2는 실수이며 값은 %f 입니다.\n", val2);
	printf("val3는 문자이며 값은 %c 입니다.\n", val3);

	return 0;
}

*/

/*

// 예제_2.2 - 원의 넓이를 계산하여 출력하는 예제

#include <stdio.h>

int main(void)
{
	double pi = 3.141592;     // PI(파이)
	int radius = 7;     // 반지름
	double result = pi * radius * radius;     // 결과 : 원의 넓이 , 실수형에 대해서 정수형을 바꿔줄 필요 없음.

	printf("PI는 %f 입니다.\n", pi);
	printf("원의 반지름은 %d 입니다.\n", radius);
	printf("원의 넓이는 %.3f 입니다.\n", result);

	return 0;
}

*/

/*

// 예제_2.3 - ASCII 코드 문자 출력 예제

#include <stdio.h>

int main(void)

{
	char lower = 'a';
	char upper = 'A';
	char number = '1';

	printf("입력문자 : %c\n", lower);
	printf("ASCII 코드 10진수 : %d\n\n", lower);
	printf("ASCII 코드 16진수 : %x\n\n", lower);

	printf("입력문자 : %c\n", upper);
	printf("ASCII 코드 10진수 ; %d\n\n", upper);
	printf("ASCII 코드 16진수 : %x\n\n", upper);

	printf("입력문자 : %c\n", number);     // 아스키 코드표 보면 1도 문자로 있음. 
	printf("ASCII 코드 10진수 ; %d\n\n", number);
	printf("ASCII 코드 16진수 : %x\n\n", number);

	return 0;
}

*/

/*

// 문제_2.1 - 점수(val), 등급(grade)이란 변수를 선언한 후, 점수는 100으로 등급은 A로 초기화하여 출력.

#include <stdio.h>

int main(void)
{
	int val = 100;
	char grade = 'A';

	printf("점수 : %d, ", val);
	printf("등급 : %c", grade);

	return 0;
}

*/

/*

// 문제_2.2 - 반지름의 길이가 2인 원의 넓이를 구하는 프로그램 작성.

#include <stdio.h>

int main(void)
{
	float pi = 3.141592;
	int radius = 2;
	float width = pi * radius * radius;
	
	printf("PI는 %f 입니다.\n", pi);
	printf("원의 반지름은 %d 입니다.\n", radius);
	printf("원의 넓이는 %.3f 입니다.\n", width);

	return 0;
}

*/