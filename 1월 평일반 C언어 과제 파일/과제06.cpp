/*

// ����_7.1 - ~

#include <stdio.h>

int main(void)
{
	while (1)
	{
		int min = 0;
		printf("�� �Է� <0 ����> : ");
		scanf("%d", &min);

		if (min > 0)
		{
			int result_h, result_m = 0;
			result_h = min / 60;
			result_m = min % 60;
			printf("\n\t\t[%d��]�� [%d�ð� %d��] �Դϴ�.\n\n", min, result_h, result_m);
		}

		else if (min < 0)
		{
			printf("\n\t\t0���� �������� �Է��Ͻ� �� �����ϴ�.\n\n");
		}

		else
		{
			printf("\n\n\t\t���α׷��� �����մϴ�.\n");
			break;
		}
	}

	return 0;
}

*/

/*

// ����_7.2 - ~

#include <stdio.h>

int main(void)
{
	printf("���ڿ� ��ġ�ϴ� ASCII�ڵ� �˻�\n\n");

	while (1)
	{
		char ch = '\0';
		printf("���� �Է� : ");
		scanf("%c", &ch, sizeof(ch));
		printf("\n\n\t\t���� : %c\t===>\t�ƽ�Ű �ڵ� : %d", ch, ch);
		printf("\n\n\t\t���<�ƹ�Ű> / ����<S/s>\n");

		if (ch == 'S' || ch == 's')
		{
			break;
		}
	}

	return 0;
}

*/     // ���͵� ���ڷ� �ν��ؼ� ��ĭ�� �� �� ��µȴ�.

/*

#include <stdio.h>
#include <conio.h>

int main()
{
	char val;
	char ex;
	printf("���ڿ� ��ġ�ϴ� ASCII�ڵ� �˻�\n");
	while (1)
	{
		printf("�����Է�: ");
		scanf_s("%c", &val, sizeof(val));
		printf("\t\t����: %c ===> ASCII�ڵ� ��: %d\n", val, val);
		printf("\t\t���<�ƹ�Ű> / ����<S/s>\n");
		rewind(stdin);     // ex ���� ����
		ex = getch();     // ex �Է¹ޱ�
		if (ex == 'S' || ex == 's')
		{
			break;
		}
	}
	return 0;
}

*/