/*

// [ ����.1 ]

#include <stdio.h>

void main()
{
	int su, sum = 0;     // ���⼭ su�� �����ϴ� ������ ���� �ʱ�ȭ�ϱ� ����. ������ �� ������ � �����Ⱚ�� ����Ǿ� ���� �� �ֱ� ����.
	for (su = 1; su <= 10; su++)
	{
		sum += su; // sum = sum + su
	}
	printf("Sum: %d\n", sum);
}

*/

/*

// [ ����.2 ]

#include <stdio.h>

void main()
{
	int su =1, sum = 0;
	for (; su <= 10;)
	{
		sum += su++; // 1.sum = sum + su -> 2.su++ , �̴� su++�� ���� ����(su ���� �Ҵ��ϰ� +1).
	}
	printf("Sum: %d\n", sum);
}

*/

/*

// [ ����.3 ]
#include <stdio.h>

void main()
{
	int su1, su2, odd_sum = 0, even_sum = 0;
	for (su1=1, su2=2; su1<=100 && su2<=100; su1+=2,su2+=2)
	{
		odd_sum += su1;
		even_sum += su2;
	}
	printf("Odd_Sum : %d\n", odd_sum);
	printf("Even_Sum: %d\n", even_sum);
}

*/

/*

// [ Quiz ]

#include <stdio.h>

void main()
{
	// [1��]
	for (int i = 1; i <= 4; i++)
	{
		printf("%d.Hello\n", i);
	}
	printf("\n\n");

	// [2��]
	for (int i = 65; i <= 90; i++)
	{
		printf("%c, ", i);     // �ƽ�Ű�ڵ� Ȱ��
	}
	printf("\b\b \n\n");     // \b �� �齺���̽��ٿ� ���� ȿ��

	// [3��]
	int sum = 0;
	for (int i = 3; i <= 9; i += 3)
	{
		printf("%d + ", i);
		sum += i;
	}
	printf("\b\b= %d\n\n", sum);
}

*/

/*

// [ ����.4 ]

#include <stdio.h>

void main()
{
	int count = 0;
	for (int i = 1; i <= 10; i++)
	{
		for (int j = 1; j <= 10; j++)
		{
			count += 1;
		}
	}
	printf("���� For���� ���ӹ��� ���� Ƚ��: %d\n", count);
}

*/

/*

// [ ����.5 ]

#include <stdio.h>

void main()
{
	int su1, su2;
	for (su1 = 1; su1 <= 5; su1++)
	{
		for (su2 = 1; su2 <= 5; su2++)
		{
			printf("su1: %d\t\tsu2: %d\n", su1, su2);
		}
		printf("\n");
	}
}

*/

/*

// [ ������ ����� ]

#include <stdio.h>
#include <stdlib.h>

int main()
{
	int sp, st, ln, flag, i, j, k = 1;
	while (k)
	{
		flag = 0;
		printf("Ȧ���� �ټ��� �Է¹����� ������ ��������� �ϼ���.\n");
		printf("�ټ��� �Է��ϼ��� : ");
		scanf_s("%d", &ln);
		printf("\n\n");
		sp = ln / 2;
		st = 1;
		for (i = 0; i < ln; i++)
		{
			for (j = 0; j < sp; j++)
			{
				printf(" ");
			}
			for (j = 0; j < st; j++)
			{
				printf("*");
			}
			printf("\n");

			if (i == ln / 2)
			{
				flag = 1;
			}
			if (flag == 0)
			{
				sp--;
				st += 2;
			}
			else
			{
				sp++;
				st -= 2;
			}
		}
		printf("\n\n����� 0.\n����Ͻ÷��� 1.\n");
		scanf_s("%d", &k);
		system("cls");
	}
}

*/

/*

// ���� Ǯ���

#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	while (1)
	{
		int line = 0, num = 1, half, sel = 0;
		printf("Ȧ���� �ټ��� �Է¹����� ������ ��������� �ϼ���.\n");
		scanf("%d", &line);
		half = line / 2;

		for (int i = 1; i <= line; i++)
		{
			for (int j = 1; j <= half; j++)
			{
				printf(" ");
			}

			for (int k = 1; k <= num; k++)
			{
				printf("*");
			}

			printf("\n");

			if (i <= (line / 2))
			{
				half--;
				num += 2;
			}

			else
			{
				half++;
				num -= 2;
			}
		}

		printf("\n\n����� 0.\n����Ͻ÷��� 1.\n");
		scanf("%d", &sel);
		switch (sel)
		{
		case 0: exit(1);
		case 1: printf("��� �����մϴ�.\n"); break;
		}
		system("pause");
		system("cls");
	}


	return 0;
}

*/

/*

// �޸�

1 => ��

2 => �� ��
	 �� �� ��
3 => �� ��
	 �� �� ��
	 �� ��

4 => �� �� ��
	 �� �� �� ��
	 �� �� �� �� ��
	 �� �� �� ��
5 => �� �� ��
	 �� �� �� ��
	 �� �� �� �� ��
	 �� �� �� ��
	 �� �� ��

*/


