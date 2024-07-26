/*

// [ Quiz ] - �����ڷ�_11.15 (�׸��ڷ� ���鼭 �����ϱ�)

#include <stdio.h>
#include <stdlib.h>

struct A
{
	int* a;
	int* b;
};

struct B
{
	struct A* c;
	int d;
};

void main()
{
	B* p = (B*)malloc(sizeof(B));
	p->c = (A*)malloc(sizeof(A));

	p->c->a = (int*)malloc(sizeof(int));
	p->c->b = (int*)malloc(sizeof(int));

	*(p->c->a) = 10;
	*(p->c->b) = 20;
	p->d = 30;

	printf("p->c->a:%d, p->c->b:%d, ", *(p->c->a), *(p->c->b));
	printf("p->d:%d\n", p->d);
	free(p->c->a); free(p->c->b); free(p->c); free(p);
}

*/

// ------ �� �Ʒ����� ���ص� �ɵ�? ------

/*

// [ ����.2 ]

#include <stdio.h>

void main()
{
	FILE* fp;
	fopen_s(&fp, "D:\\test.txt", "w");
	fprintf(fp, "%s", "TEST");
	fclose(fp);
}

*/

/*
// [ ����.3 ]

#include <stdio.h>

void main()
{
	FILE* fp;
	char str[50];
	int line = 0;
	fopen_s(&fp, "D:\\test.txt", "w");
	if (fp == NULL) {
		printf("File Open Error\n");
		return;
	}
	while (1) {
		gets_s(str);
		if (str[0] == '\0')
			break;
		line++;
		fprintf(fp, "%3d : %s\n", line, str);
	}
	fclose(fp);
}
*/

/*
// [ ����.4 ]

#include <stdio.h>

void main()
{
	FILE* fp;
	int i, no = 0, sum = 0;
	fopen_s(&fp, "D:\\data.txt", "r");

	if (fp == NULL) {
		printf("File Open Error\n");
		return;
	}

	while (fscanf_s(fp, "%d", &i) != EOF) {
		sum += i;
		no++;
	}
	if (no == 0)
		printf("No Data\n");
	else {
		printf("Total %d Numbers.\n", no);
		printf("Sum Data: %d\n", sum);
		printf("Average : %.2f\n", (float)sum / (float)no);
	}
	fclose(fp);
}
*/