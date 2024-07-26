/*

// �����ڷ�_11.7

#include <stdio.h> 
#include <stdlib.h> 
#include <string.h> 

void main(void)
{
	int* arr1 = (int*)malloc(4);
	char* arr2 = (char*)malloc(10);

	*arr1 = 10000000;
	strcpy(arr2, "test");

	printf("arr1�� �� = %d, arr2�� �� = %s\n", *arr1, arr2);
	free(arr1);
	free(arr2);
}

*/

/*

// [ ����.1 ] - �����ڷ�_11.8

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main()
{
   int* p1 = (int*)malloc(sizeof(int));
   char* p2 = (char*)malloc(sizeof(char) * 10);

   *p1 = 100;
   strcpy_s(p2, 10, "Test");

   printf("p1: %d, p2: %s\n", *p1, p2);
   free(p1); free(p2);
}

*/

/*

// [ ����.2 ] - �����ڷ�_11.10

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(void)
{
   int* kor = (int*)malloc(sizeof(int));
   int* eng = (int*)malloc(sizeof(int));
   int* math = (int*)malloc(sizeof(int));
   char* name = (char*)malloc(sizeof(char) * 20);

   *kor = 100;
   *eng = 80;
   *math = 60;
   strcpy_s(name, sizeof(char) * 20,"����");

   printf("�̸��� %s �Դϴ�.\n", name);
   printf("���� : %d, ���� : %d, ���� : %d\n", *kor, *eng, *math);
   free(kor);free(eng);free(math);free(name);
}

*/

/*

// [ ����.3 ] - �����ڷ�_11.12

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct A
{
   int a;
   int b;
};

struct B
{
   A c;
   int d;
};

void main()
{
   printf("struct B Size = %d Byte\n", sizeof(B));
   B* p = (B*)malloc(sizeof(B));

   p->c.a = 10;
   p->c.b = 20;
   p->d = 30;

   printf("c.a=%d, c.b=%d, d=%d\n", p->c.a, p->c.b, p->d);
   free(p);
}

*/

// �Ǵ�

/*

#include <stdio.h> 
#include <stdlib.h>

struct A
{
	int a;
	int b;
};

struct B
{
	struct A a;
	int b;
};

void main()
{
	printf("struct B Size = %d Byte\n", sizeof(struct B));
	struct B* p = (struct B*)malloc(sizeof(struct B));

	p->a.a = 10;
	p->a.b = 20;
	p->b = 30;

	printf("a.a=%d,a.b=%d,b=%d\n", p->a.a, p->a.b, p->b);
	free(p);
}

*/

/*

// [ ����.4 ] - �����ڷ�_11.14

#include <stdio.h>
#include <stdlib.h>

struct A
{
    int* a;
    int* b;
};

struct B
{
    A c;
    int d;
};

void main()
{
    B* p = (B*)malloc(sizeof(B));
    p->c.a = (int*)malloc(sizeof(int));
    p->c.b = (int*)malloc(sizeof(int));

    *(p->c.a) = 10;
    *(p->c.b) = 20;
    p->d = 30;

    printf("c.a: %d, c.b: %d, d: %d\n", *(p->c.a), *(p->c.b), p->d);
    free(p->c.a); free(p->c.b); free(p);
}

*/