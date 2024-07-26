/*

// [ 예제.1 ] - 강의자료_10.11, 구조체 배열

#include <stdio.h>

typedef struct Member
{
   char name[20];
   char gender[6];
   int    age;
   char phone_num[14];
}MEMBER, * PMEMBER;     // 여기서 포인터 형식이 있는 이유는 배열에 주소를 배정하기 위해서인듯?

int main()
{
   MEMBER  man[5] = {
      "Lee sun_sin", "man", 37,"010-xxx-yyyy",
      "Hong gil_dong", "man", 16,"-",
      "Yoo kwan_sun", "women", 15, "011-xxx-yyyy",
      "Kang kam_chan", "man", 27, "016-xxx-yyyy",
      "Sin saimdang", "women", 42, "019-xxx-yyyy" };

   for (int i = 0; i < 5; i++)
   {
      printf("%-15s %-5s %-5d %-15s\n", man[i].name, man[i].gender, man[i].age, man[i].phone_num);     // %-nd는 왼쪽 정렬, %nd는 오른쪽 정렬
   }
}

*/

/*

// [ 예제.2 ] - 강의자료_10.15, 구조체 포인터 (-> 사용)

#include <stdio.h>
#include <string.h>

typedef struct handphone
{
   char name[20];
   int price;
   char phone_num[20];
}HAND, *PHAND;

void main()
{
   HAND phone, phone2;
   // 일반적인 구조체 포인터 변수 선언 방법
   // HAND* ptrphone;
   // 별칭을 활용한 구조체 포인터 변수 선언 방법
   PHAND ptrphone;

   ptrphone = &phone;
   strcpy_s(ptrphone -> name, sizeof(ptrphone -> name), "TEST");
   ptrphone -> price = 800000;
   strcpy_s(ptrphone -> phone_num, sizeof(ptrphone -> phone_num), "1234");

   phone2 = *ptrphone;

   printf("Phone-1\n");
   printf("%s\n", ptrphone -> name);
   printf("%d\n", ptrphone -> price);
   printf("%s\n", ptrphone -> phone_num);
   printf("\n\n");

   printf("Phone-2\n");
   printf("%s\n", phone2.name);
   printf("%d\n", phone2.price);
   printf("%s\n", phone2.phone_num);
}

*/

/*

// [ 예제.3 ] - 강의자료_10.18 , 구조체와 함수

#include <stdio.h>
#include <string.h>

typedef struct handphone
{
   char   name[20];
   int      price;
   char   phone_num[14];
}HANDPHONE, * PHANDPHONE;

void PriceCheck(PHANDPHONE a)
{
   a -> price = 700000;
}

void main()
{
   HANDPHONE phone;
   phone.price = 750000;
   PriceCheck(&phone);     // phone.price
   printf("가격:%d\n", phone.price);
}

*/

/*

// [ 예제.4 ]

#include <stdio.h>
#include <string.h>

typedef struct
{
   char com[20];
   int size;
}memory;

typedef struct
{
   char name[20];
}cpu;

typedef struct
{
   memory ddr;
   cpu cpu;
}_computer;

void main()
{
   _computer computer;
   computer.ddr.size = 8;
   strcpy_s(computer.cpu.name, sizeof(computer.cpu.name), "TEST");
   printf("%d, %s\n", computer.ddr.size, computer.cpu.name);
}

*/