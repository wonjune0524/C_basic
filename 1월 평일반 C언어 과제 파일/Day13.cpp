/*

// [ ����.1-1 ] - �����ڷ�_9.16

#include <stdio.h>

void ex_func(int sa, int sb)
{
	sa += 5;
	sb += 5;
	printf("��1 : %d %d\n", sa, sb);
}

int main()
{
	int ma = 100, mb = 200;
	ex_func(ma, mb);     // 105 205 ���
	printf("��2 : %d %d\n", ma, mb);     // 100 200 ���
}

*/

/*

// [ ����.1-2 ] - �����ڷ�_9.17

#include <stdio.h>

void int_swap(int* x, int* y)
{
	int tmp;
	tmp = *x;
	*x = *y;
	*y = tmp;
}

int main()
{
	int a = 100, b = 200;

	printf("��ȯ�� : a = %d, b = %d\n", a, b);

	int_swap(&a, &b);
	printf("��ȯ�� : a = %d, b = %d\n", a, b);
}

// �Ǵ�

#include <stdio.h>

void int_swap(int x, int y)
{
	int tmp;
	tmp = x;
	x = y;
	y = tmp;
	printf("��ȯ�� : a = %d, b = %d\n", x, y);
}

int main()
{
	int a = 100, b = 200;

	printf("��ȯ�� : a = %d, b = %d\n", a, b);

	int_swap(a, b);
}

*/

/*

// [ ����.2 ] - �����ڷ�_9.18

#include <stdio.h>

void convertToUppercase(char *s)
{
	while (*s != '\0')
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}

		++s;
	}
}

void main()
{
	char string[] = "chaRacters";

	printf("��ȯ ���� ��Ʈ�� : %s\n", string);

	convertToUppercase(string);
	printf("��ȯ ���� ��Ʈ�� : %s\n", string);
}

// �� Ǯ��

#include <stdio.h>
#include <string.h>

void convertToUppercase(int a, char *s)
{
	for (int i = 0; i < a; i++)
	{
		if (*s >= 'a' && *s <= 'z')
		{
			*s = *s - 32;
		}

		++s;
	}
}

void main()
{
	char string[] = "chaRacters";
	int len;
	len = strlen(string);

	printf("��ȯ ���� ��Ʈ�� : %s\n", string);

	convertToUppercase(len, string);
	printf("��ȯ ���� ��Ʈ�� : %s\n", string);
}

*/

/*

// [ ����.3 ] - �����ڷ�_9.20-2

#include <stdio.h>

void sumf(int n, int *ret)
{
	for (int i = 1; i <= n; i++)
	{
		*ret += i;
	}
}

void main()
{
	int num, sum = 0;
	scanf_s("%d", &num);

	sumf(num, &sum);
	printf("���� %d�Դϴ�.", sum);
}

*/

/*

// [ ����.4 ] - �����ڷ�_9.21-2

#include <stdio.h>

void uppercase(char *ch)
{
	if (*ch >= 'a' && *ch <= 'z')
	{
		*ch -= 32;
	}
}

void main()
{
	char ch;
	scanf_s("%c", &ch);

	uppercase(&ch);
	printf("��ȯ�� ������ %c\n", ch);
}

*/

/*

// [ ����.5 ] - �����ڷ�_9.22-2

#include <stdio.h>

void maxf(int n1, int n2, int *max)
{
	(n1 > n2) ? (*max = n1) : (*max = n2);
}


void main()
{
	int num1, num2, max;
	scanf_s("%d%d", &num1, &num2);

	maxf(num1, num2, &max);
	printf("max = %d", max);
}

*/

/*

// [ ����.6 ] - �����ڷ�_9.23

#include <stdio.h>

void sumf(int n, int *s)
{
	*s += n;
}

void main(void)
{
	int sum = 0;

	for (int i=1; i <= 10; i++)
	{
		sumf(i, &sum);
		printf("%d\n", sum);
	}

	printf("%d\n", sum);
}

*/

/*

// ������_Quiz - �����ڷ�_9.19

#include <stdio.h>

void convert(char* b)
{
	if (*b >= 'a' && *b <= 'z')
	{
		*b -= 32;
	}
}

int main(void)
{
	char str[100];
	scanf("%[^\n]s", str, sizeof(str));

	convert(str);
	printf("%s", str);

	return 0;
}

*/

/*

// [ ����.7 ] - �����ڷ�_10.5

#include <stdio.h>
#include <string.h>

struct handphone     // ����� ���� �Լ�
{
	char name[20];
	char phone_number[50];
	int price;
};     // �����ݷ� �ݵ�� ���̱�

void main()
{
	// ����ü ���� ���� �� ������ �ʱⰪ ����
	// handphone phone = {"SAMSUNG", "010-123-123", 1000000};

	// ����ü ���� ����
	handphone phone;

	strcpy_s(phone.name, sizeof(phone.name), "SAMSUNG");
	strcpy_s(phone.phone_number, sizeof(phone.phone_number), "010-123-123");
	//scanf("%s %s", phone.name, phone.phone_number, sizeof(phone.name), sizeof(phone.phone_number)); ���� 2���� �̷��Ե� ǥ�� ������ ��?
	phone.price = 1000000;

	printf("name: %s\n", phone.name);
	printf("phone_number: %s\n", phone.phone_number);
	printf("price: %d\n", phone.price);
}

*/

/*

// [ ����.8 ] - �����ڷ�_10.6

#include <stdio.h>
#include <string>

typedef struct handphone
{
	char name[20];
	char phone_number[50];
	int price;
}HAND;

void main()
{
	HAND phone, phone2;
	strcpy_s(phone.name, sizeof(phone.name), "SAMSUNG");
	strcpy_s(phone.phone_number, sizeof(phone.phone_number), "010-123-123");
	phone.price = 1000000;

	phone2 = phone;
	phone2.price = 900000;

	printf("p1_name: %s\n", phone.name);
	printf("p1_phone_number: %s\n", phone.phone_number);
	printf("p1_price: %d\n", phone.price);

	printf("p2_name: %s\n", phone2.name);
	printf("p2_phone_number: %s\n", phone2.phone_number);
	printf("p2_price: %d\n", phone2.price);
}

*/

/*

// [ ����.9 ] - �����ڷ�_10.8

#include <stdio.h>

struct test
{
	double double_num;
	int num;
	char ch;
	char str[17];
};

void main()
{
	test test;

	printf("%d\n", sizeof(test.double_num));
	printf("%d\n", sizeof(test.num));
	printf("%d\n", sizeof(test.ch));
	printf("%d\n", sizeof(test.str));
	printf("test ����ü�� ũ��: %dByte\n", sizeof(test));     // ���ڶ� ���ڿ� ���� �������� ���� 32����Ʈ.
}

*/

/*

// [ Quiz ] - �����ڷ�_10.10

#include <stdio.h>

typedef struct Man
{
	int age;
	char name[10];
}MAN;

typedef struct Computer
{
	char CPU[20];
	char RAM[20];
	char HDD[20];
}COMPUTER;

typedef struct Student
{
	int age;
	char name[10];
}STUDENT;

typedef struct Monitor
{
	int price;
	char name[20];
}MONITOR;

void main()
{
	MAN a; COMPUTER b; STUDENT c; MONITOR d;

	printf("MAN ����ü ������ �Է�(����, �̸�): ");
	scanf_s("%d", &a.age);
	scanf_s("%s", a.name, sizeof(a.name));
	printf("MAN ����ü ������ = %d %s\n\n", a.age, a.name);

	printf("COMPUTER ����ü ������ �Է�(CPU, RAM, HDD): ");
	scanf_s("%s", b.CPU, sizeof(b.CPU));
	scanf_s("%s", b.RAM, sizeof(b.RAM));
	scanf_s("%s", b.HDD, sizeof(b.HDD));
	printf("COMPUTER ����ü ������ = %s %s %s\n\n", b.CPU, b.RAM, b.HDD);

	printf("STUDENT ����ü ������ �Է�(����, �̸�): ");
	scanf_s("%d", &c.age);
	scanf_s("%s", c.name, sizeof(c.name));
	printf("STUDENT ����ü ������ = %d %s\n\n", c.age, c.name);

	printf("MONITOR ����ü ������ �Է�(����, ������): ");
	scanf_s("%d", &d.price);
	scanf_s("%s", d.name, sizeof(d.name));
	printf("MONITOR ����ü ������ = %d %s\n\n", d.price, d.name);
}

*/