/*

// [ ����.1 ]
#include <stdio.h>

void main()
{
	int kor, eng, mat, avr;
	printf("3���� ������ �Է��ϼ���: ");
	scanf_s("%d%d%d", &kor, &eng, &mat);
	avr = (kor + eng + mat) / 3;

	if (avr < 70)
		printf("\n���հ�!!(��� �̴�)\n");
	else if (kor < 60)
		printf("���հ�!!(�������� �̴�)\n");
	else if (eng < 60)
		printf("���հ�!!(�������� �̴�)\n");
	else if (mat < 60)
		printf("���հ�!!(�������� �̴�)\n");
	else
		printf("�հ�!!\n");
}

*/

/*
// [ ����.2 ]
#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);
	switch (num) {
	case 1: printf("1�� ����\n"); break;
	case 2: printf("2�� ����\n"); break;
	case 3:
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		printf("3�� ����\n");
		break;
	default: printf("�⺻��!\n");
	}
}
*/

/*
// [ ����.3 ]
#include <stdio.h>

void main()
{
	int num;
	scanf_s("%d", &num);
	switch (num % 3) {
	case 0: printf("3�� ���!\n"); break;
	default: printf("3�� ����� �ƴմϴ�!\n");
	}
}
*/

/*

// [ Quiz ] : ��Ģ����

#include <stdio.h>
#include <stdlib.h>

void main()
{
	int n1 = 0, n2 = 0, sel = 0;
	while (1) {
		printf("��Ģ���� ����\n");
		printf("=================\n");
		printf("1. ����\n");
		printf("2. ����\n");
		printf("3. ����\n");
		printf("4. ������\n");
		printf("5. ���α׷� ����\n");
		printf("=================\n");
		printf("��ȣ ���� => ");
		scanf_s("%d", &sel);
		if (sel == 1 || sel == 2 || sel == 3 || sel == 4) {
			printf("������ ���� �� ���� 2���� �Է�: ");
			scanf_s("%d%d", &n1, &n2);
		}
		switch (sel) 
		{
		case 1: printf("%d + %d = %d\n", n1, n2, n1 + n2); break;
		case 2: printf("%d - %d = %d\n", n1, n2, n1 - n2); break;
		case 3: printf("%d * %d = %d\n", n1, n2, n1 * n2); break;
		case 4: printf("%d / %d = %d\n", n1, n2, n1 / n2); break;
		case 5: exit(1);
		default: printf("ó�� ȭ������ �̵�\n");
		}
		system("pause");
		system("cls");
	}
}

*/

/*
// [ Quiz ] : ����ǥ

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
	int num = 0, kor = 0, met = 0, eng = 0;
	float result = 0;
	char s1[30] = "\0";
	while (1) {
		printf("\t\tM e n u\n");
		printf("============================================\n");
		printf("\t1.�л��̸� �Է�\n");
		printf("\t2.���� 3���� �Է�\n");
		printf("\t3.�л��̸� ���\n");
		printf("\t4.�հ� ���\n");
		printf("\t5.��� ���\n");
		printf("\t6.����\n");
		printf("===========================================\n");
		scanf_s("%d", &num);
		switch (num)
		{
		case 1:
			printf("�л� �̸� �Է�: ");
			scanf_s("%s", s1, sizeof(s1)); break;
		case 2:
			printf("���� 3���� �Է�: ");
			scanf_s("%d%d%d", &kor, &met, &eng); break;
		case 3:
			if (strcmp(s1, "\0") == 0)
				printf("�̸��� �Էµ��� �ʾҽ��ϴ�.\n");
			printf("%s\n", s1);  break;
		case 4:
			result = kor + met + eng;
			printf("�հ� : %d\n", (int)result); break;
		case 5:
			result = kor + met + eng;
			result = result / 3.0;
			printf("��� : %.2f\n", result); break;
		case 6:exit(1);
		}
		system("pause");
		system("cls");
	}
}
*/

