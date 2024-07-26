
// * ��ó���� ���� 
// - �������� �����̳� ���ڿ� ġȯ�� ���� ���� ������ ó���� ���� ����
// - �����Ͻ� ����ó���� �̷�� ���� �ʰ�, ġȯ�� ����

// * #include
// - ��ũ �� �����ϴ� Ư�� ������ ������ �ۼ����� �ҽ����Ͽ� ����
// - 1. #include <stdio.h> : C��� ��ü������ ����
// - 2. #include "test.h"  : ����� ���� ����

// * #define
// - ���α׷����� Ư�� ���ڿ��� �����ϰ� �����ϰ� ġȯ�� �� ���
// - 1. #define <��ũ�� �̸�>		<��ü ���ڿ�>
// - 2. #define <��ũ�� �̸�(�μ�)	<��ü ���ڿ�>

/*

// [����.1]

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

// [����.2]
#include "Mydefine.h"

void main()
{
	SP("�׽�Ʈ");
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

// [����.3]
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
		SP("���� �ʰ�");
		NL;
		SP("�ٽ� �Է�");
		NL;
	}
	DP(ret);
}

*/

/*

// [����.4]
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

// [����.5]
#include "Mydefine.h"
#define GR_MODE 1

void main()
{
	#ifdef GR_MODE     // ���̹Ƿ� �׳� ����.
		printf("�׷��� ���");
	#endif
}

*/

// [ ������ ��ȿ���� ]
// 1. ���� ���� : "�ش� ���������� ��밡��"
// 2. ���� ���� : "���α׷� ��ü���� ��밡��"
// 3. ���� ���� : "���α׷� ��ü���� ��� ( static �����ڰ� ���� )"

// [ ������ ���� ] : ������ �������� �����ϱ� �����ؼ� �Ҹ� �ɶ������� �ð�
// ���� ���� : ���� �� ������ ��� ��� �Ҹ�
// ���� ���� : ���α׷� ����� �Ҹ�
// ���� ���� : ���α׷� ����� �Ҹ�

/*

// [ ����.6 ] : ��������

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

// [ ����.7 ] : ��������

#include <stdio.h>
int a;     // ���� ���� ����

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

// [ ����.8 ] : �������� - // �ʱ�ȭ������ �ʾƵ� �ڵ����� 0���� �ʱ�ȭ�Ǵ� ����.

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

// [ ����.9 ]

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
	sum = SumFunc(num); // �Լ� ȣ��
	printf("1~NUM ������ ������: %d\n", sum);
	printf("�Լ� ȣ�� �Ϸ�\n");
	return 0;
}

*/