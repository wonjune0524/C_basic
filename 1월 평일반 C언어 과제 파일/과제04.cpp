/*

// ����_5.1 - ������ �Է¹޾� �Ʒ��� ���� ����ϴ� ���α׷��� �ۼ�(if�� �̿�)

#include <stdio.h>

int main(void)
{
	int num;
	printf("���� �Է� : ");
	scanf("%d", &num);

	if (num % 3 != 0 && num % 4 != 0 || num == 0)
	{
	printf("\n%d��(��) 3�� ����� 4�� ����� �ƴմϴ�.", num);
	}

	else if (num % 3 == 0 && num % 4 == 0)
	{
		printf("\n%d��(��) 3�� ��� �̸鼭, 4�� ����Դϴ�.", num);
	}

	else if (num % 3 == 0)
	{
		printf("\n%d��(��) 3�� ����Դϴ�.", num);
	}

	else if (num % 4 == 0)
	{
		printf("\n%d��(��) 4�� ����Դϴ�.", num);
	}

	return 0;
}

*/

/*

// ����_5.2 - ������ �Է¹޾� ����� ����ϴ� ���α׷��� �ۼ�(switch�� �̿�)

#include <stdio.h>

int main(void)
{
	int score;
	float result;
	char grade;
	printf("���� �Է� : ");
	scanf("%d", &score);

	result = (float)score / 10;
	if (result > 10)
	{
		result++;
	}
	if (result < 0 && result >= -1)
	{
		result--;
	}

	switch ((int)result)
	{
	case 10:
	case 9:
		grade = 'A';
		printf("\n%d�� ==> %c���", score, grade);
		break;
	case 8:
		grade = 'B';
		printf("\n%d�� ==> %c���", score, grade);
		break;
	case 7:
		grade = 'C';
		printf("\n%d�� ==> %c���", score, grade);
		break;
	case 6:
		grade = 'D';
		printf("\n%d�� ==> %c���", score, grade);
		break;
	case 5:
	case 4:
	case 3:
	case 2:
	case 1:
	case 0:
		grade = 'F';
		printf("\n%d�� ==> %c���", score, grade);
		break;
	default:
		printf("\n�߸��� �Է� < 0 ~ 100 ���� �Է� >");
	}

	return 0;
}

*/