/*

// ����_2.1 - ����, �Ǽ�, ������ ������ ���� ���� ������ ��, ����ϴ� ����

#include <stdio.h>

int main(void)
{
	int val1 = 100;
	double val2 = 200.0;
	char val3 = 'A';

	printf("val1�� �����̸� ���� %d �Դϴ�.\n", val1);
	printf("val2�� �Ǽ��̸� ���� %f �Դϴ�.\n", val2);
	printf("val3�� �����̸� ���� %c �Դϴ�.\n", val3);

	return 0;
}

*/

/*

// ����_2.2 - ���� ���̸� ����Ͽ� ����ϴ� ����

#include <stdio.h>

int main(void)
{
	double pi = 3.141592;     // PI(����)
	int radius = 7;     // ������
	double result = pi * radius * radius;     // ��� : ���� ���� , �Ǽ����� ���ؼ� �������� �ٲ��� �ʿ� ����.

	printf("PI�� %f �Դϴ�.\n", pi);
	printf("���� �������� %d �Դϴ�.\n", radius);
	printf("���� ���̴� %.3f �Դϴ�.\n", result);

	return 0;
}

*/

/*

// ����_2.3 - ASCII �ڵ� ���� ��� ����

#include <stdio.h>

int main(void)

{
	char lower = 'a';
	char upper = 'A';
	char number = '1';

	printf("�Է¹��� : %c\n", lower);
	printf("ASCII �ڵ� 10���� : %d\n\n", lower);
	printf("ASCII �ڵ� 16���� : %x\n\n", lower);

	printf("�Է¹��� : %c\n", upper);
	printf("ASCII �ڵ� 10���� ; %d\n\n", upper);
	printf("ASCII �ڵ� 16���� : %x\n\n", upper);

	printf("�Է¹��� : %c\n", number);     // �ƽ�Ű �ڵ�ǥ ���� 1�� ���ڷ� ����. 
	printf("ASCII �ڵ� 10���� ; %d\n\n", number);
	printf("ASCII �ڵ� 16���� : %x\n\n", number);

	return 0;
}

*/

/*

// ����_2.1 - ����(val), ���(grade)�̶� ������ ������ ��, ������ 100���� ����� A�� �ʱ�ȭ�Ͽ� ���.

#include <stdio.h>

int main(void)
{
	int val = 100;
	char grade = 'A';

	printf("���� : %d, ", val);
	printf("��� : %c", grade);

	return 0;
}

*/

/*

// ����_2.2 - �������� ���̰� 2�� ���� ���̸� ���ϴ� ���α׷� �ۼ�.

#include <stdio.h>

int main(void)
{
	float pi = 3.141592;
	int radius = 2;
	float width = pi * radius * radius;
	
	printf("PI�� %f �Դϴ�.\n", pi);
	printf("���� �������� %d �Դϴ�.\n", radius);
	printf("���� ���̴� %.3f �Դϴ�.\n", width);

	return 0;
}

*/