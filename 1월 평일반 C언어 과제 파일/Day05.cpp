/*

// [ ����.1 ]
#include <stdio.h>

void main()
{
	int num;
	printf("������ �Է��ϼ���: ");
	scanf_s("%d", &num);
	if (!((num > 0) && (num <= 100)))     // num�� ������ ���̰�
		{
			printf("�Է� ������ ���� �����ϴ�.!\n");
		}
}

*/

/*

// [ ����.2 ]

#include <stdio.h>

void main()
{
	int su1, su2, su3;
	su1 = 10; su2 = ++su1;     // su1�� ���� 1 ������Ų �� su2�� �Ҵ�
	printf("su1: %d, su2: %d\n", su1, su2);     // ���� 11 11 ���
	su1 = 10; su3 = su1++;     // su1�� ���� su3�� �Ҵ��� �� su1�� ���� 1 ������Ŵ.
	printf("su1: %d, su3: %d\n", su1, su3);     // ���� 11 10 ���
}

*/

/*

// [ ����.3 ]

// ���ǿ�����, ex) (���ǽ�) ? ���� ��� : ������ ��� ;

#include <stdio.h>

void main()
{
	int su;
	su = 8;
	(su % 2 == 0) ? printf("¦��\n") : printf("Ȧ��\n");     // ���̶� ¦�� ���
	su = 9;
	(su % 2 == 0) ? printf("¦��\n") : printf("Ȧ��\n");     // �����̶� Ȧ�� ���
}

*/

/*

// [ ����.4 ]

#include <stdio.h>

void main()
{
	int num1, num2;
	scanf_s("%d %d", &num1, &num2);
	if (num1 > num2)
	{
		printf("%d\n", num1 > num2);     // ���� ��� '1'�� ������ ��� '0'�� ��ȯ��.
	}
}

*/

/*

// [ ����.5 ]

#include <stdio.h>

void main()
{
	int num1 = 1, num2 = 0;
	if (num1)     // (1)�� �����̹Ƿ� ������ ����
	{
		printf("��\n");     // ���� '��' ���
	}
	if (num2)     // (0)�� �������̹Ƿ� ������ ���� X 
	{
		printf("����\n");     // ���� �ƹ��͵� ��� X
	}
	if (1)
	{
		printf("��\n");
	}
	if (0)
	{
		printf("����\n");
	}
}

*/

/*

// [ ����.6 ]

#include <stdio.h>

void main()
{
	int su;
	printf("10���� ū ������ �Է��ϼ���: ");
	scanf_s("%d", &su);
	if (su <= 10)
	{
		printf("10������ ������ �Է��ϼ̽��ϴ�.\n");
		printf("10������ ������ �Է��ϼ̽��ϴ�.\n");
		printf("10������ ������ �Է��ϼ̽��ϴ�.\n");
	}
	printf("%d\n", su);
}

*/

/*

// [ ����.7 ]

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

// [ ����.8 ]

#include <stdio.h>

void main()
{
	int su;
	printf("���� 1�� �Է�: ");
	scanf_s("%d", &su);
	if (su >= 0)
	{
		if (su % 2 == 0)
			printf("%d: ���� ¦��\n", su);
		else
			printf("%d: ���� Ȧ��\n", su);
	}
	else {
		printf("%d: ����\n");
	}
	printf("���α׷� ����\n");
}

*/     // 13������

