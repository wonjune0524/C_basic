/*

[ Rand �Լ��� �̿��� ������ ���� ���� ]
- ��ǻ�Ϳ����� ��� �͵��� ������� �̷�� ������ random�� ǥ�� �� �� ����.
- ��ǻ�Ϳ����� "Ư�� ���Ұ� ��Ÿ�� Ȯ�� 1/n"�� "random" �̶�� ǥ�� �Ѵ�.
- "rand �Լ�"�� "������ ������ �� ���", "srand �Լ�"�� "������ ������ �ʱⰪ�� ������ �� ���"�ϸ� <stdlib.h>����� ����
- "time �Լ�"�� "srand �Լ��� �ʱⰪ ( Seed �� ���� )", <time.h> ����� ����
- rand �Լ��� ���� ������ �� �ִ� ���� 0 ~ 32767����.
- ���ϴ� ������ ���� ���ϴ� ���� ( rand() % n + 1 )

*/

/*

// [ ����.1 ]

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void main()
{
	int random_num;
	srand((unsigned)time(NULL));

	for (int i = 0; i < 5; i++)
	{
		random_num = 0;     // �ʱ�ȭ ���ֱ�
		random_num = rand() % 45 + 1;

		printf("%d\n", random_num);     // 1~45 ������ �� �� �������� 5�� ���. (0�� �ȳ����°Ű���.)
	}
}

*/

/*

// [ ����.2 ] - �����ڷ�_8.7

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

// [ ����.3 ] - �����ڷ�_8.9

#include <stdio.h>

void main()
{
	char arr[10];
	scanf("%s", arr, sizeof(arr));     // abcdefghi �Է� (9���� + ����)

	for (int i = 0; i < 10; i++)
	{
		printf("%c", arr[i]);     // a,b,c,d,e,f,g,h,i ���� �ϳ��� ��µ�.
	}

	printf("\n\n%s\n", arr);     // %s�� �׷��� arr[0]~[9] ��� ���.
	printf("\n\n%s\n", &arr[2]);     // %c �� arr[2] �� ���� 'c'�� ���.
}

*/

/*

// [ ����.4 ] - �����ڷ�_8.10

#include <stdio.h>
#include <string.h>     // strcpy ��� �������

void main()
{
	char arr1[10] = "KGITBANK";
	char arr2[10];
	printf("arr1: %s\n", arr1);
	strcpy_s(arr2, sizeof(arr2) ,"TEST_STR");     // string copy => ���ڿ� ���� , ������ ���� ���ڿ��� �ݵ�� ���� NULL ���ڰ� ���ԵǾ� �־�� �Ѵ�. arr2�� TEST_STR.
	printf("arr2: %s\n", arr2);
	strcpy_s(arr2, sizeof(arr2), arr1);     // arr2�� KGITBANK.
	printf("arr2: %s\n", arr2);
}

*/

/*

// [ ����.5 ] - �����ڷ�_8.13~18 , �������� �˰��� (�� ������ �������� ����.)

#include <stdio.h>

void main()
{
	int num[5] = { 4,8,2,7,6 };
	int tmp;

	for (int i = 0; i < 4; i++)
	{
		for (int j = i + 1; j < 5; j++)
		{
			if (num[i] < num[j])     // ��ȣ �ݴ�� �������� �������� ������.
			{
				tmp = num[i];     // tmp = 4
				num[i] = num[j];     // num[0] = 8 , i�ڸ��� j�ڸ��� �� ����.
				num[j] = tmp;     // num[1] = 4  , j�ڸ��� ����i�ڸ��� �� ����.
			
				// tmp = num[j];
				// num[j] = num[i];
				// num[i] = tmp;     => �̷��Ե� ǥ�� ����.
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

// [ ����.6 ] - �����ڷ�_8.19~25 , �������ϱ�

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

// [ ����.7 ] - �����ڷ�_8-2.5~6 , ������ �迭 ����

#include <stdio.h>

void main()
{
	int a[3][3] = { {11,12,13},     // (0,0), (0,1), (0,2)
					{21,22,23},     // (1,0), (1,1), (1,2)
					{31,32,33} };     // (2,0), (2,1), (2,2)

	for (int i = 0; i < 3; i++)     // ++i �� �ᵵ �������.
	{
		for (int j = 0; j < 3; j++)     // ++j �� �ᵵ �������.
		{
			printf(" �迭 ��� a[%d][%d]: %d", i, j, a[i][j]);
		}

		printf("\n");
	}
}

*/

/*

// ���� ���� Ǯ��� ��������

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