/*

// [ ����.1 ] - �����ڷ�_9.3 

#include <stdio.h>

void main()
{
	char ch1 = 'A', ch2;
	char *ptr;

	ptr = &ch1;     // ch1�� �ּ� ����
	ch2 = *ptr;     // ch2�� ch1�� ���� ����

	printf("\n���� ch1�� �ּҴ� %p ���� �Դϴ�.", &ch1);
	printf("\n���� ptr�� ������ %p �Դϴ�.", ptr);
	printf("\n���� *ptr�� ������ %c �Դϴ�.", *ptr);
	printf("\n���� ch2�� ������ %c �Դϴ�.", ch2);
}

*/

/*

// [ ����.2 ] - �����ڷ�_9.4

#include <stdio.h>

void main()
{
	int num1 = 10, num2;
	int *ptr;

	ptr = &num1;
	num1++;
	num2 = 5;
	ptr = &num2;
	*ptr = *ptr + num1 + num2;     // �ٷ� ������ ptr�� num2�� ���� �����Ͽ����Ƿ� num2�� �� ���� �ο�.
	printf("num1: %d, num2: %d, *ptr: %d\n", num1, num2, *ptr);
}

*/

/*

// [ ����.3 ] - �����ڷ�_9.6

#include <stdio.h>

void main()
{
	char vc = 'A', *pc; // Char�� �ڷ����� ũ��� 1Byte
	pc = &vc;
	printf("\n %p", pc);		// pc�� �ּҰ��� 16������ ���
	printf("\n pc-1=%d����,pc=%d����,pc+1=%d����", pc-1, pc, pc+1);		// pc�� �ּҰ��� 10������ ���
	printf("\n");

	int vi = 100, *pi; // Int�� �ڷ����� ũ��� 4Byte
	pi = &vi;
	printf("\n %p", pi);		// pi�� �ּҰ��� 16������ ���
	printf("\n pi-1=%d����,pi=%d����,pi+1=%d����", pi-1, pi, pi+1);		// pi�� �ּҰ��� 10������ ���
	printf("\n");
	printf("\n");
}

*/

/*

// [ ����.4 ] - �����ڷ�_9.7 , �����ͺ����� ũ��

#include <stdio.h>

int main()
{
	char a = 'A';
	float b = 12.345;
	char *pa;
	float *pb;
	pa = &a;
	pb = &b;
	printf("������ ������ ũ�� : %d\n", sizeof(a));
	printf("�Ǽ��� ������ ũ�� : %d\n", sizeof(b));
	printf("������ ������ ������ ũ�� : %d\n", sizeof(pa));
	printf("������ �Ǽ��� ������ ũ�� : %d\n", sizeof(pb));

	return 0;
}

*/

/*

// [ ����.5 ] - �����ڷ�_9.8

#include <stdio.h>

int main()
{
	int i = 5, j = 10;
	int *p = &i, *q = &j;

	printf("(1) i = %d, j = %d\n", i, j);
	printf("(2) &i = %p, &j = %p\n", &i, &j);
	printf("(3) p = %p, q = %p\n", p, q);
	printf("(4) *p = %d, *q = %d\n", *p, *q);
	printf("(5) p == &i ==> %d\n", p == &i);     // ���̹Ƿ� 1 ���.

	return 0;
}

*/

/*

// [ ����.6 ] - �����ڷ�_9.10~11 , �����Ϳ� �迭

#include <stdio.h>

void main()
{
	int i;
	int a[5] = { 10, 20, 30, 40, 50 };
	for (i = 0; i < 5; i++)
	{
		printf("�迭�� �ּ� % d, �迭�� �� % d\n", a + i, *(a + i));
	}
}

// �Ǵ�

#include <stdio.h>

int main()
{
	int a[5] = { 10, 20, 30, 40, 50 };
	int i, *pa;
	pa = a;     // �迭�� & �Ⱥٿ��� �ǳ�����.
	for (i = 0; i < 5; i++)
	{
		printf("�迭�� �ּ� %d, �迭�� �� %d\n", pa + i, *(pa + i));
	}
	return 0;
}

*/

/*

// [ ����.7 ] - �����ڷ�_9.12

#include <stdio.h>

int main()
{
	int a = 10, b[5] = { 1,2,3,4,5 }, * p;
	
	p = &a;
	printf("(1)  a=%d, *p=%d\n", a, *p);
	
	p = b;
	printf("(2)  a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));
	
	(*p)++;
	printf("(3)  a=%d, *p=%d, *(p+1)=%d\n", a, *p, *(p + 1));

	return 0;
}

*/

/*

// [ ����.8 ] - �����ڷ�_9.14

#include <stdio.h>
#include <string.h>

void main()
{
	char s[] = "Seoul";

	for (int i = 0; i < strlen(s); i++)
	{
		putchar(*(s + i));     // ����Լ�
	}
}

*/

/*

// [ ����.9 ] - �����ڷ�_9.15

#include <stdio.h>

void main()
{
	char s[] = "Seoul";

	for (int i = 0; s[i] != NULL; i++)
	{
		putchar(s[i]);
		//putchar(*(s + i));
	}
}

*/

/*

// ������_Quiz - �����ڷ�_9.13

#include <stdio.h>

int main()
{
	int i, j, tmp, *pa;
	int a[8] = { 17,25,8,32,19,23,11,3 };
	pa = a;

	for (i = 0; i < 7; i++)
	{
		for (j = i + 1; j < 8; j++)
		{
			if (*(pa + i) > *(pa + j))
			{
				tmp = *(pa + j);
				*(pa + j) = *(pa + i);
				*(pa + i) = tmp;
			}
		}
	}

	for (i = 0; i < 8; i++)
	{
		printf("%4d", *(pa + i));
	}

	printf("\n");

	return 0;
}

*/