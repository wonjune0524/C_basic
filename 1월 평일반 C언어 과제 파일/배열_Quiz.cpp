/*

// [ Page 12 Quiz ]

// 문제_1 - 배열에 문자열을 입력받아 첨자가 짝수인 경우를 출력하시오.

#include <stdio.h>
#include <string.h>

int main(void)
{
	int cnt;
	char str[] = "Kgitbank";
	cnt = strlen(str);     // strlen 함수는 문자열 길이를 구하는 함수.
	printf("%d\n", cnt);     // 8

	for (int i = 1; i < cnt; i += 2)
	{
		printf("%c", str[i]);
	}

	return 0;
}

*/

/*

// 문제_2 - 문자열 맞추기 입력 버퍼를 비운다.

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
	char game[10] = { "\0" };
	char bord[10] = { "\0" };
	char ch;

	while (1)
	{
		printf("단어 설정 : ");
		scanf_s("%s", game, sizeof(game));
		rewind(stdin);     // 입력 버퍼를 비운다.
		system("cls");

		if (game[0] != '\0')     // 괄호 안에 1로 대체가능.
		{
			while (1)
			{
				printf("문자 맞추기 Start!\n");
				printf("단일 문자 입력: ");
				scanf_s("%c", &ch, sizeof(char));
				rewind(stdin);
				int len = strlen(game);

				for (int i = 0; i < len; i++)
				{
					if (game[i] == ch)
					{
						printf("%c", game[i]);
					}

					else
					{
						printf("%c", '#');
					}
				}

				printf("\n정답 입력: ");
				scanf_s("%s", bord, sizeof(bord));
				rewind(stdin);

				if (!strcmp(game, bord))     // 비교 함수, 같으면 0 출력.
				{
					printf("정답 입니다.\n");
					break;
				}

				else
				{
					printf("오답 입니다.\n");
				}

				system("pause");
				system("cls");
			}

			break;
		}

		else
		{
			printf("단어 설정이 되어있지 않습니다.\n");
			continue;
		}
	}

	return 0;
}

*/

/*

// [ Page 26 Quiz ]

// 문제 - Lotto 프로그램 작성

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("---로또 번호 랜덤 출력---\n\n");

	int lotto[6];
	srand((unsigned)time(NULL));

	for (int i = 0; i < 6; i++)
	{
		lotto[i] = rand() % 45 + 1;

		for (int j = 0; j <= (i - 1); j++)
		{
			if (lotto[i] == lotto[j])
			{
				lotto[i] = rand() % 45 + 1;
			}
		}
	}

	int mark;

	for (int k = 0; k < 5; k++)
	{
		for (int p = k + 1; p < 6; p++)
		{
			if (lotto[k] > lotto[p])
			{
				mark = lotto[k];
				lotto[k] = lotto[p];
				lotto[p] = mark;
			}
		}
	}

	for (int q = 0; q < 6; q++)
	{
		printf("%d\n", lotto[q]);
	}

	return 0;
}

*/

/*

// [ Page 27 Quiz]

// 문제 - ~

#include <stdio.h>

int main(void)
{
	// #1 - 기본 배열

	int arr[10] = { 10, 17, 3, 9, 27, 10, 8, 9, 13, 21 };

	// #2 - 거꾸로 배열

	printf("- 문제 2번\n\n");

	int invert_arr[10];
	
	for (int i = 0; i < 10; i++)
	{
		invert_arr[i] = arr[9 - i];
	}

	printf("arr의 역배열 : ");

	for (int j = 0; j < 10; j++)
	{
		printf("%d, ", invert_arr[j]);
	}

	printf("\b\b \n\n");

	// #3 - 짝수 합, 홀수 합

	printf("- 문제 3번\n\n");

	int even_sum = 0, odd_sum = 0;

	for (int i = 1; i < 10; i += 2)
	{
		even_sum += invert_arr[i];
	}

	printf("짝수 첨자의 합 : %d\n", even_sum);

	for (int j = 0; j < 10; j += 2)
	{
		odd_sum += invert_arr[j];
	}

	printf("홀수 첨자의 합 : %d\n\n", odd_sum);

	// #4 -  내림차순 정렬

	printf("- 문제 4번\n\n");

	int sort_arr[10];

	for (int p = 0; p < 10; p++)
	{
		sort_arr[p] = invert_arr[p];
	}

	int mark;

	for (int i = 0; i < 9; i++)
	{
		for (int j = i + 1; j < 10; j++)
		{
			if (sort_arr[i] < sort_arr[j])
			{
				mark = sort_arr[i];
				sort_arr[i] = sort_arr[j];
				sort_arr[j] = mark;
			}
		}
	}

	for (int k = 0; k < 10; k++)
	{
		printf("%d, ", sort_arr[k]);
	}

	printf("\b\b \n\n");

	// #5 - sort_arr 배열에 순위 부여

	printf("- 문제 5번\n\n");

	int rank_arr[10];

	for (int i = 0; i < 10; i++)
	{
		rank_arr[i] = 1;

		for (int j = 0; j < 10; j++)
		{
			if (sort_arr[i] < sort_arr[j])
			{
				rank_arr[i] += 1;
			}
		}
	}

	for (int k = 0; k < 10; k++)
	{
		printf("%2d 는 %2d 등이다.\n", sort_arr[k], rank_arr[k]);
	}

	return 0;
}

*/