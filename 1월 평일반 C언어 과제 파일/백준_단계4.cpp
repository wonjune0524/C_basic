/*

// ����_4.1 - ���� ����

#include <stdio.h>

int main(void)
{
	int N, num[100], v, mark = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	scanf("%d", &v);

	for (int j = 0; j < N; j++)
	{
		if (num[j] == v)
		{
			mark ++;
		}
	}

	printf("%d", mark);

	return 0;
}

*/

/*

// ����_4.2 - X���� ���� ��

#include <stdio.h>

int main(void)
{
	int N, X, A[10000];
	scanf("%d %d", &N, &X);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &A[i]);
	}

	for (int j = 0; j < N; j++)
	{
		if (A[j] < X)
		{
			printf("%d ", A[j]);
		}
	}

	return 0;
}

*/

/*

// ����_4.3 - �ּ�, �ִ�

#include <stdio.h>
#pragma warning(disable:6385)

int main(void)
{
	int N, num[1000] = { 0 }, mark;     // N = �ڿ����� ���� �����ϸ� ���� �Ȼ���.
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &num[i]);
	}

	for (int j = 0; j < (N - 1); j++)     // �������� ����
	{
		for (int k = j + 1; k < N; k++)
		{
			if (num[j] > num[k])
			{
				mark = num[j];
				num[j] = num[k];
				num[k] = mark;
			}
		}
	}
	printf("%d", N);
	printf("%d %d", num[0], num[(N - 1)]);

	return 0;
}

*/

/*

// ����_4.4 - �ִ�

#include <stdio.h>

int main(void)

{
	int arr[9] = { 0 }, max = 0, mark = 1;

	for (int i = 0; i < 9; i++)
	{
		scanf("%d", &arr[i]);

		if (arr[i] > max)
		{
			max = arr[i];
			mark = i + 1;
		}
	}

	printf("%d\n%d", max, mark);

	return 0;
}

*/

/*

// ����_4.5 - �� �ֱ�

#include <stdio.h>
#pragma warning(disable:6385)

int main(void)
{
	int N, M, i = 0, j = 0, k, arr[100] = { 0 };
	scanf("%d %d", &N, &M);

	for (int y = 0; y < N; y++)
	{
		arr[y] = 0;
	}

	for (int p = 0; p < M; p++)
	{
		scanf("%d %d %d", &i, &j, &k);

		if (i > N || j > N)
		{
			printf("�ٽ� �Է��ϼ���.\n");
			p--;
		}

		for (int q = (i - 1); q < j; q++)
		{
			arr[q] = k;
		}
	}

	for (int z = 0; z < N; z++)
	{
		printf("%d ", arr[z]);
	}

	return 0;
}

*/

/*

// ����_4.6 - �� �ٲٱ�

#include <stdio.h>

int main(void)
{
	int N, M, arr[100] = { 0 }, i = 0, j = 0, mark = 0;
	scanf("%d %d", &N, &M);

	for (int p = 0; p < N; p++)
	{
		arr[p] = p + 1;
	}

	for (int q = 0; q < M; q++)
	{
		scanf("%d %d", &i, &j);
		mark = arr[i - 1];
		arr[i - 1] = arr[j - 1];
		arr[j - 1] = mark;
	}

	for (int k = 0; k < N; k++)
	{
		printf("%d ", arr[k]);
	}

	return 0;
}

*/

/*

// ����_4.7 - ���� �� ���� ��..?

#include <stdio.h>
#pragma warning(disable:6385)

int main(void)
{
	int arr[30] = { 0 };

	for (int j = 0; j < 28; j++)
	{
		int num = 0;

		scanf("%d", &num);

		if (arr[num - 1] == num)
		{
			printf("�ߺ��� ���Դϴ�. �ٽ� �Է����ּ���.\n");
			j--;
		}

		else
		{
			arr[num - 1]++;
		}
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == 0)
		{
			printf("%d\n", i + 1);
		}
	}

	return 0;
}

*/

/*

// ����_4.8 - ������

#include <stdio.h>

int main(void)
{
	int arr[10] = { 0 }, result = 0;;

	for (int i = 0; i < 10; i++)
	{
		int num = 0;
		scanf("%d", &num);

		arr[i] = num % 42;
	}

	for (int j = 0; j < 10; j++)
	{
		int count = 0;

		for (int k = j + 1; k < 10; k++)
		{
			if (arr[j] == arr[k])
			{
				count++;
			}
		}

		if (count == 0)
		{
			result++;
		}
	}

	printf("%d", result);

	return 0;
}

*/

/*

// ����_4.9 - �ٱ��� ������

#include <stdio.h>

int main(void)
{
	int num[100] = { 0 }, N, M;
	scanf("%d %d", &N, &M);

	for (int i = 0; i < N; i++)
	{
		num[i] = i + 1;
	}

	for (int j = 0; j < M; j++)
	{
		int start = 0, end = 0;
		scanf("%d %d", &start, &end);
		int minus = end;

		for (int k = (start - 1); k < (start - 1) + (end - start + 1) / 2; k++)
		{
			int mark = 0;
			mark = num[k];
			num[k] = num[minus - 1];
			num[minus - 1] = mark;
			minus--;
		}
	}

	for (int p = 0; p < N; p++)
	{
		printf("%d ", num[p]);
	}

	return 0;
}

*/

/*

// ����_4.10 - ���

#include <stdio.h>
#pragma warning(disable:6385)

int main(void)
{
	int N, score[100] = { 0 };
	float max = 0, sum = 0, avrg = 0;
	scanf("%d", &N);

	for (int i = 0; i < N; i++)
	{
		scanf("%d", &score[i]);

		if (score[i] > max)
		{
			max = score[i];
		}
	}

	for (int k = 0; k < N; k++)
	{
		sum += ((float)score[k] / max) * 100;
	}

	avrg = sum / N;
	printf("%.3f ", avrg);

	return 0;
}

*/