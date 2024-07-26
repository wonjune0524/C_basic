/*

// [ Page 12 Quiz ]

// ����_1 - �迭�� ���ڿ��� �Է¹޾� ÷�ڰ� ¦���� ��츦 ����Ͻÿ�.

#include <stdio.h>
#include <string.h>

int main(void)
{
	int cnt;
	char str[] = "Kgitbank";
	cnt = strlen(str);     // strlen �Լ��� ���ڿ� ���̸� ���ϴ� �Լ�.
	printf("%d\n", cnt);     // 8

	for (int i = 1; i < cnt; i += 2)
	{
		printf("%c", str[i]);
	}

	return 0;
}

*/

/*

// ����_2 - ���ڿ� ���߱� �Է� ���۸� ����.

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
		printf("�ܾ� ���� : ");
		scanf_s("%s", game, sizeof(game));
		rewind(stdin);     // �Է� ���۸� ����.
		system("cls");

		if (game[0] != '\0')     // ��ȣ �ȿ� 1�� ��ü����.
		{
			while (1)
			{
				printf("���� ���߱� Start!\n");
				printf("���� ���� �Է�: ");
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

				printf("\n���� �Է�: ");
				scanf_s("%s", bord, sizeof(bord));
				rewind(stdin);

				if (!strcmp(game, bord))     // �� �Լ�, ������ 0 ���.
				{
					printf("���� �Դϴ�.\n");
					break;
				}

				else
				{
					printf("���� �Դϴ�.\n");
				}

				system("pause");
				system("cls");
			}

			break;
		}

		else
		{
			printf("�ܾ� ������ �Ǿ����� �ʽ��ϴ�.\n");
			continue;
		}
	}

	return 0;
}

*/

/*

// [ Page 26 Quiz ]

// ���� - Lotto ���α׷� �ۼ�

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	printf("---�ζ� ��ȣ ���� ���---\n\n");

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

// ���� - ~

#include <stdio.h>

int main(void)
{
	// #1 - �⺻ �迭

	int arr[10] = { 10, 17, 3, 9, 27, 10, 8, 9, 13, 21 };

	// #2 - �Ųٷ� �迭

	printf("- ���� 2��\n\n");

	int invert_arr[10];
	
	for (int i = 0; i < 10; i++)
	{
		invert_arr[i] = arr[9 - i];
	}

	printf("arr�� ���迭 : ");

	for (int j = 0; j < 10; j++)
	{
		printf("%d, ", invert_arr[j]);
	}

	printf("\b\b \n\n");

	// #3 - ¦�� ��, Ȧ�� ��

	printf("- ���� 3��\n\n");

	int even_sum = 0, odd_sum = 0;

	for (int i = 1; i < 10; i += 2)
	{
		even_sum += invert_arr[i];
	}

	printf("¦�� ÷���� �� : %d\n", even_sum);

	for (int j = 0; j < 10; j += 2)
	{
		odd_sum += invert_arr[j];
	}

	printf("Ȧ�� ÷���� �� : %d\n\n", odd_sum);

	// #4 -  �������� ����

	printf("- ���� 4��\n\n");

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

	// #5 - sort_arr �迭�� ���� �ο�

	printf("- ���� 5��\n\n");

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
		printf("%2d �� %2d ���̴�.\n", sort_arr[k], rank_arr[k]);
	}

	return 0;
}

*/