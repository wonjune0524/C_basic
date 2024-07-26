/*

// 문제_5.1 - 문자와 문자열

#include <stdio.h>

int main(void)
{
	int i;
	char S[1000] = { "\0" };

	scanf("%s", S, sizeof(S));
	scanf("%d", &i);

	printf("%c", S[i - 1]);

	return 0;
}

*/

/*

// 문제_5.2 - 단어 길이 재기

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	char word[100] = { "\0" };
	scanf("%s", word, sizeof(word));

	len = strlen(word);
	printf("%d", len);

	return 0;
}

*/

/*

// 문제_5.3 - 문자열

#include <stdio.h>
#include <string.h>

int main(void)
{
	int rep;
	scanf("%d", &rep);

	for (int i = 0; i < rep; i++)
	{
		int len = 0;
		char str[1000] = { "\0" };
		scanf("%s", str, sizeof(str));

		len = strlen(str);
		printf("%c%c\n", str[0], str[len - 1]);
	}

	return 0;
}

*/

/*

// 문제_5.4 - 아스키 코드

#include <stdio.h>

int main(void)
{
	char ch;
	scanf("%c", &ch);

	printf("%d", ch);

	return 0;
}

*/

/*

// 문제_5.5 - 숫자의 합

#include <stdio.h>

int main(void)
{
	int N, sum = 0;
	char str[101];

	scanf("%d", &N);
	scanf("%s", str, sizeof(str));

	for (int i = 0; i < N; i++)
	{
		sum += str[i] - 48;     // 또는 - '0'.
	}

	printf("%d", sum);

	return 0;
}

*/

/*

// 문제_5.6 - 알파벳 찾기

#include <stdio.h>
#include <string.h>

int main(void)
{
	int len;
	char S[100];
	scanf("%s", S, sizeof(S));

	len = strlen(S);

	int abc[27] = { 0 };

	for (int i = 0; i < 26; i++)
	{
		abc[i] = -1;
	}

	for (int j = 0; j < len; j++)
	{
		if (abc[(int)S[j] - 97] == -1)
		{
			abc[(int)S[j] - 97] = j;
		}
	}

	for (int k = 0; k < 26; k++)
	{
		printf("%d ", abc[k]);
	}

	return 0;
}

*/

/*

// 문제_5.7 - 문자열 반복

#include <stdio.h>
#include <string.h>

int main(void)
{
	int T;
	scanf("%d", &T);

	for (int i = 0; i < T; i++)
	{
		int R = 0;
		char S[21] = { "\0" };
		scanf("%d %s", &R, S, sizeof(S));

		int len = 0;
		len = strlen(S);

		for (int j = 0; j < len; j++)
		{
			for (int k = 0; k < R; k++)
			{
				printf("%c", S[j]);
			}
		}

		printf("\n");
	}

	return 0;
}

*/

/*

// 문제_5.8 - 단어의 개수

#include <stdio.h>
#include <string.h>

int main(void)
{
	int count = 1;
	char str[1000000] = { " \0 " };
	scanf("%[^\n]s", str, sizeof(str));     // 공백을 포함한 문자열 입력

	int len;
	len = strlen(str);

	if (str[0] == ' ')
	{
		count--;
	}

	for (int i = 1; i < len; i++)
	{
		if (str[i - 1] == ' ' && str[i] != ' ')
		{
			count++;
		}
	}

	printf("%d", count);

	return 0;
}

*/

/*

// 문제_5.9 - 상수

#include <stdio.h>

int main(void)
{
	char A[4], B[4];
	scanf("%s %s", A, B, sizeof(A), sizeof(B));

	char mark1 = A[0], mark2 = B[0];

	A[0] = A[2], B[0] = B[2];
	A[2] = mark1, B[2] = mark2;
	
	if (A[0] > B[0])
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%c", A[i]);
		}
	}

	else if (A[0] < B[0])
	{
		for (int i = 0; i < 3; i++)
		{
			printf("%c", B[i]);
		}
	}

	else
	{
		if (A[1] > B[1])
		{
			for (int i = 0; i < 3; i++)
			{
				printf("%c", A[i]);
			}
		}

		else if (A[1] < B[1])
		{
			for (int i = 0; i < 3; i++)
			{
				printf("%c", B[i]);
			}
		}

		else
		{
			if (A[2] > B[2])
			{
				for (int i = 0; i < 3; i++)
				{
					printf("%c", A[i]);
				}
			}

			else if (A[2] < B[2])
			{
				for (int i = 0; i < 3; i++)
				{
					printf("%c", B[i]);
				}
			}

			else
			{
				printf("두 수는 같습니다.");
			}
		}
	}

	return 0;
}

*/

/*

// 문제_5.10 - 다이얼

#include <stdio.h>
#include <string.h>

int main(void)
{
	int sum = 0, mark = 65, num = 3;
	char str[15] = { "\0" };
	scanf("%s", str, sizeof(str));

	int len;
	len = strlen(str);
	
	for (int p = 0; p < len; p++)
	{
		for (int i = 0; i < 8; i++)
		{
			if (str[p] >= mark && str[p] <= mark + 2)
			{
				str[p] = num;
			}

			else
			{
				mark += 3;
				num++;
			}
		}

		mark = 65, num = 3;
	}

	for (int j = 0; j < len; j++)
	{
		sum += str[j];
	}

	printf("%d", sum);

	

	return 0;
}

*/

/*

// 문제_5.11 - 그대로 출력하기

#include <stdio.h>
#include <string.h>

int main(void)
{
	char str[100];
	while (scanf("%s", str, sizeof(str)) != EOF)     // ctrl + z 입력 시 종료 가능.
	{
		int len = 0;
		len = strlen(str);

		for (int i = 0; i < len ; i++)
		{
			printf("%c", str[i]);
		}

		printf("\n");
	}

	return 0;
}

// %[^\n]s 로 하면 무한반복됨.이 방법은 틀렸고 아래방법으로.

*/

/*

#include <stdio.h>

int main() {

	char c;

	while (scanf("%c", &c) != EOF)
	{
		printf("%c", c);
	}

	return 0;
}

*/