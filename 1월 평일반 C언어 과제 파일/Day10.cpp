/*

// [ ����.1 ] - �����ڷ�_7.6

#include <stdio.h>     // �������

float avrg(int j, int k)     // �Լ� 1 - ��հ� ���
{
	int total = 0;
	float f;
	total = j + k;
	f = total / 2.0;     // 2.0 ��� 2��� ���� ������ ��µ�.
	return f;
}

void show_avrg(int a, int b, float c)     // �Լ� 2 - printf ���
{
	printf("\n%d �� %d �� ��հ��� %3.1f �Դϴ�.\n", a, b, c);
}

int main(void)     // ���� �Լ�
{
	int i = 2, j = 3;
	float f = avrg(i, j);
	show_avrg(i, j, f);

	return 0;
}

*/

/*

// [ ����.2 ] - �����ڷ�_7.7

#include <stdio.h>

char big(int x, int y)
{
	if (x > y)
	{
		return 'Y';
	}

	else if (x < y)
	{
		return 'N';
	}

	else
	{
		return '=';
	}
}

int main(void)
{
	int a = 100, b = 100;
	char size = big(a, b);
	
	if (size == 'Y')
	{
		printf("\n%d��(��) %d���� ũ��.", a, b);
	}

	else if (size == 'N')
	{
		printf("\n%d��(��) %d���� �۴�.", a, b);
	}

	else
	{
		printf("\n%d��(��) %d��(��) ����.", a, b);
	}

	return 0;
}

*/

/*

// [ ����.3 ] - �����ڷ�_7.11

#include <stdio.h>

int fact(int n)
{
	if (n == 1)
	{
		return 1;
	}

	else
	{
		return (n * fact(n - 1));
	}
}

void main()
{
	int x = 5;
	printf("���� ��� ���� %d�Դϴ�.\n", fact(x));     // 5 * 4 * 3 * 2 * 1
}

*/

/*

// [����.1] - �� ���� �Է¹޾� ū ���� ����ϴ� �Լ�

#include <stdio.h>

int big(int n1, int n2)
{
	if (n1 > n2)
	{
		return n1;
	}

	else
	{
		return n2;
	}
}

void main()
{
	int num1, num2, ret;
	printf("���� 2�� �Է�: ");
	scanf_s("%d %d", &num1, &num2);
	ret = big(num1, num2);
	printf("ū ��: %d\n", ret);
}

*/

/*

// [����.2] - �Է¹��� ���� ¦������ Ȧ������ �Ǻ��ϴ� �Լ�

#include <stdio.h>

int OddEven(int n)
{
	if (n % 2 == 0)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

void main() 
{
	int num, ret;
	printf("�����Է�: ");
	scanf_s("%d", &num);
	ret = OddEven(num);

	if (ret == 1)
	{
		printf("�Է��Ͻ� ������ ¦�� �Դϴ�.\n");
	}

	else
	{
		printf("�Է��Ͻ� ������ Ȧ�� �Դϴ�.\n");
	}
}

*/

/*

// [����.3] - 3�� ����� �Ǻ�, main���� 3�� ����� ����ϴ� �Լ�

#include <stdio.h>

int multiple(int n)
{
	if (n % 3 == 0)
	{
		return 1;
	}

	else
	{
		return 0;
	}
}

void main()
{
	int num, ret;
	printf("�����Է�: ");
	scanf_s("%d", &num);
	ret = multiple(num);

	if (ret == 1)
	{
		printf("�Է��Ͻ� ������ 3�� ����Դϴ�.\n");
	}

	else
	{
		printf("�Է��Ͻ� ������ 3�� ����� �ƴմϴ�.\n");
	}
}

*/

/*

// [����.4] - ���� �Է¹޾� �Ҽ��� �Ǻ��ϴ� �Լ�

#include <stdio.h>

int sosu(int n)
{
	int cnt = 0, num = 1;

	if (n == 1)
	{
		cnt = 1;
		return cnt;
	}

	while (1)
	{
		if (n % num == 0)
		{
			cnt++;
		}

		if (n == num)
		{
			break;
		}

		num++;
	}

	return cnt;
}

void main()
{
	int num, ret;
	printf("���� �Է�: ");
	scanf_s("%d", &num);
	ret = sosu(num);

	if (ret == 2)
	{
		printf("�Է��Ͻ� ������ �Ҽ� �Դϴ�.\n");
	}

	else
	{
		printf("�Է��Ͻ� ������ �Ҽ��� �ƴմϴ�.\n");
	}
}

*/

/*

// [����.5] - ���밪�� ���ϴ� �Լ�

#include <stdio.h>

int absolute(int n)
{
	if (n < 0)
	{
		n = -n;
	}

	return n;
}

void main()
{
	int num, ret;
	printf("�����Է�: ");
	scanf_s("%d", &num);
	ret = absolute(num);
	printf("%d�� ���밪�� %d �Դϴ�.\n", num, ret);
}

*/

/*

// [����.6] - ���� �Ųٷ� ��ȯ�ϴ� �Լ�

#include <stdio.h>

int reverse(int n)
{
	int i, temp, ret = 0;

	while (1)
	{
		temp = n % 10;     // n = 312, temp = 2 / n = 31, temp = 1 / n = 3, temp = 3
		n = n / 10;     // n = 31 / n = 3 / n = 0
		ret = (ret + temp) * 10;     // ret = 20 / 210 / 2130

		if (n == 0)
		{
			ret = ret / 10;
			break;
		}
	}

	return ret;
}

void main()
{
	int num, ret;
	printf("�����Է�: ");
	scanf_s("%d", &num);
	ret = reverse(num);
	printf("������ ��: %d\n", ret);
}

*/