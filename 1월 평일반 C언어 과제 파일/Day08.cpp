/*

// [����.1]

#include <stdio.h>  
#include <conio.h>     // getch() �� putch(ch) ��밡���ϰ� ����.
#define ESC 0x1b     // ESC�� 0x1b�� �����Ѵ�.

void main()
{
	char ch;
	while ((ch = getch()) != ESC)     // getch() �� �Է� ���۸� ������� �ʰ� �ٷ� "�� ����"���� �Է¹޴� ����. (���� �׷�) ���� scanf
	{
		rewind(stdin);     // ������ �Է¹޾� ���� ���� ����ִ� ����. (���� ����)
		if (ch >= 'a' && ch <= 'z')
			ch = ch - 32;
		putch(ch);     // ch�� �ִ� ���ڸ� ������ִ� ����.
		printf("\n"); 
	}
}

*/

/*

// [����.2]

#include <stdio.h>

void main()
{
	int i, temp;
	printf("�� �Է�: ");
	scanf_s("%d", &i);
	while (1)
	{
		temp = i % 10;     // i�� 10���� ���� ���� ������.
		i = i / 10;     // i�� 10���� ���� ���� ��.
		printf("%d", temp);
		if (i == 0)
			break;
	}
	printf("\n");
}

*/

/*

// [Quiz.1] - � ���� ����� ���ϴ� ���α׷� �ۼ�

#include <stdio.h>

void main()
{
	int num, cnt = 1;
	scanf_s("%d", &num);
	while (1) {
		if (num % cnt == 0)     // num�� 1�� ������ ���� �������� 0�� ��
		{
			printf("%d ", cnt);
		}
		if (num == cnt)
		{
			break;
		}
		cnt++;
	}
}

*/

/*

// [Quiz.2] - 2���� �Էµ� �� ������ ��� �Ҽ��� ã�� ���α׷� �ۼ�

#include <stdio.h>

void main()
{
	int num, cnt = 0;
	scanf_s("%d", &num);
	for (int i = 2; i <= num; i++)
	{
		for (int j = 2; j <= i; j++) 
		{
			if (i % j == 0)
			{
				cnt++;
			}
		}
		if (cnt == 1)
		{
			printf("%d ", i);
		}
		cnt = 0;
	}
}

*/

/*

// [Quiz.3] - 1���� 1000������ �ڿ��� �� 4�� �����, 6���� ����� �������� 1�� ���� ���� ���.

#include <stdio.h>

void main()
{
	int num = 1, sum = 0;

	while (1)
	{
		if (num > 1000)
		{
			break;
		}
		if (num % 4 == 1 && num % 6 == 1) 
		{
			printf("%d ", num);
			sum += num;
		}
		num++;
	}

	printf("\n��: %d\n", sum);
}

*/

/*

// [Quiz.4] - 1~1000 ������ �ڿ��� �� ������ ���ϱ�.

#include <stdio.h>

void main()
{
	int sum=0;

	for (int i = 1; i <= 1000; i++) 
	{
		for (int j = 1; j < i; j++) 
		{
			if (i % j == 0)
				sum += j;
		}

		if (i == sum)
		{
			printf("%d\n", i);
		}

		sum = 0;
	}
}

*/

/*

// [Quiz.5] - �� ���� �ִ� ������� �ּ� ����� ���ϱ�.

#include <stdio.h>

void main()
{
	int num1, num2, GCD, LCM, i = 2;
	scanf_s("%d%d", &num1, &num2);

	while (i <= num1 && i <= num2)
	{
		if (num1 % i == 0 && num2 % i == 0)
		{
			GCD = i;     // �ִ� ����� ���ϱ�
		}
		i++;
	}
	LCM = num1 * num2 / GCD;     // �ּ� ����� ���ϱ�
	printf("�ִ� �����: %d, �ּ� �����: %d\n", GCD, LCM);
}

*/