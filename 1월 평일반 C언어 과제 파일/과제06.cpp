/*

// 문제_7.1 - ~

#include <stdio.h>

int main(void)
{
	while (1)
	{
		int min = 0;
		printf("분 입력 <0 종료> : ");
		scanf("%d", &min);

		if (min > 0)
		{
			int result_h, result_m = 0;
			result_h = min / 60;
			result_m = min % 60;
			printf("\n\t\t[%d분]은 [%d시간 %d분] 입니다.\n\n", min, result_h, result_m);
		}

		else if (min < 0)
		{
			printf("\n\t\t0보다 작은수는 입력하실 수 없습니다.\n\n");
		}

		else
		{
			printf("\n\n\t\t프로그램을 종료합니다.\n");
			break;
		}
	}

	return 0;
}

*/

/*

// 문제_7.2 - ~

#include <stdio.h>

int main(void)
{
	printf("문자와 일치하는 ASCII코드 검색\n\n");

	while (1)
	{
		char ch = '\0';
		printf("문자 입력 : ");
		scanf("%c", &ch, sizeof(ch));
		printf("\n\n\t\t문자 : %c\t===>\t아스키 코드 : %d", ch, ch);
		printf("\n\n\t\t계속<아무키> / 종료<S/s>\n");

		if (ch == 'S' || ch == 's')
		{
			break;
		}
	}

	return 0;
}

*/     // 엔터도 문자로 인식해서 빈칸이 한 번 출력된다.

/*

#include <stdio.h>
#include <conio.h>

int main()
{
	char val;
	char ex;
	printf("문자와 일치하는 ASCII코드 검색\n");
	while (1)
	{
		printf("문자입력: ");
		scanf_s("%c", &val, sizeof(val));
		printf("\t\t문자: %c ===> ASCII코드 값: %d\n", val, val);
		printf("\t\t계속<아무키> / 종료<S/s>\n");
		rewind(stdin);     // ex 버퍼 비우기
		ex = getch();     // ex 입력받기
		if (ex == 'S' || ex == 's')
		{
			break;
		}
	}
	return 0;
}

*/