/*

// ����_6.1 - ���� for���� �̿��Ͽ� �Ʒ��� ���� ��µǴ� ���α׷� �ۼ�

#include <stdio.h>

int main(void)
{
	for (int i = 1; i <= 5; i++)
	{
		for (int j = 1; j <= 6 - i; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}

*/

/*

// ����_6.2 - ���� for���� �̿��Ͽ� �������� ���ο� ���η� ����ϴ� ���α׷� �ۼ�

#include <stdio.h>

int main(void)
{
	printf("## ������ ������� ##\n");
	for (int i = 2; i <= 9; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			int result1 = 0;
			result1 = i * j;
			printf("%d*%d=%2d  ", i, j, result1);
		}

		printf("\n");
	}

	printf("\n\n");

	printf("## ������ ������� ##\n");
	for (int k = 1; k <= 9; k++)
	{
		for (int p = 2; p <= 9; p++)
		{
			int result2 = 0;
			result2 = p * k;
			printf("%d*%d=%2d  ", p, k, result2);
		}

		printf("\n");
	}

	return 0;
}

*/