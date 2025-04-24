#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main() // 별찍기 문제
//{
//	int i, j;
//
//	for (j = 0; j < 10; j++) {
//		for (i = 0; i < j + 1; i++) {
//			if (i == 0 || j == 9 || i == j)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void main() // 별찍기 문제 (반대방향)
//{
//	int i, j;
//
//	for (j = 0; j < 10; j++) {
//		for (i = 0; i < j + 1; i++) {
//			if (i == 0 || j == 9 || i == j)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void main()
//{
//	char stack[5];
//	int top = 0;
//
//	stack[top] = 'A';
//	printf(" %c 자동차가 터널에 들어감\n", stack[top]);
//	top++;
//
//	stack[top] = 'B';
//	printf(" %c 자동차가 터널에 들어감\n", stack[top]);
//	top++;
//
//	stack[top] = 'C';
//	printf(" %c 자동차가 터널에 들어감\n", stack[top]);
//	top++;
//
//	printf("\n");
//
//	top --;
//	printf(" %c 자동차가 터널을 빠져나감\n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c 자동차가 터널을 빠져나감\n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c 자동차가 터널을 빠져나감\n", stack[top]);
//	stack[top] = ' ';
//}

//void main()
//{
//	char stack[5];
//	int top = 0;
//
//	char carName = 'A';
//	int select = 9;
//
//	while (select != 3)
//	{
//		printf("<1> 자동차 넣기 <2> 자동차 빼기 <3> 끝 : ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			if (top >= 5)
//			{
//				printf("터널이 꽉 차서 차가 못 들어감\n");
//			}
//			else
//			{
//				stack[top] = carName++;
//				printf(" %c 자동차가 터널에 들어감\n", stack[top]);
//				top ++;
//			}
//			break;
//
//		case 2:
//			if (top <= 0)
//			{
//				printf("빠져나갈 자동차가 없음\n");
//			}
//			else
//			{
//				top --;
//				printf(" %c 자동차가 터널에서 빠짐\n", stack[top]);
//				stack[top] = ' ';
//			}
//			break;
//
//		case 3:
//			printf("현재 터널에 %d대가 있음.\n", top);
//			printf("프로그램을 종료합니다.\n");
//			break;
//
//		default:
//			printf("잘못 입력했습니다. 다시 입력하세요. \n");
//		}
//	}
//}

//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	printf("변수 a의 주소는 %d 입니다. \n", &a);
//	printf("변수 b의 주소는 %d 입니다. \n", &b);
//}

//void main()
//{
//	int aa[3] = { 10, 20, 30 };
//
//	printf("aa[0]의 값은 %d, 주소는 %d \n", aa[0], &aa[0]);
//	printf("aa[1]의 값은 %d, 주소는 %d \n", aa[1], &aa[1]);
//	printf("aa[2]의 값은 %d, 주소는 %d \n", aa[2], &aa[2]);
//	printf("배열 이름 aa의 값(=주소)는 %d \n", aa);
//}

//void main()
//{
//	int aa[3] = { 10,20,30 };
//
//	printf("aa[0]는 %d, aa+0은 %d \n", &aa[0], aa + 0);
//	printf("aa[1]는 %d, aa+1은 %d \n", &aa[1], aa + 1);
//	printf("aa[2]는 %d, aa+2는 %d \n", &aa[2], aa + 2);
//}

//void main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch가 가지고 있는 값: ch ==> %c \n", ch);
//	printf("ch의 주소(address): &ch ==> %d \n", &ch);
//	printf("p가 가지고 있는 값: p ==> %d \n", p);
//	printf("p가 가리키는 곳의 실제 값: *p ==> %c \n", *p);
//}

//void main()
//{
//	char ch;
//	char* p;
//	char* q;
//
//	ch = 'A';
//	p = &ch;
//
//	q = p;
//
//	*q = 'Z';
//
//	printf("ch가 가지고 있는 값: ch ==> %c \n\n", ch);
//}

//void main()
//{
//	char s[8] = "Basic-C";
//	char *p;
//
//	p = s;
//
//	printf("&s[3] ==> %s\n", &s[3]);
//	printf("p+3 ==> %s\n\n", p+3);
//
//	printf("s[3] ==> %c\n", s[3]);
//	printf("*(p+3) ==> %c\n", *(p+3));
//}

//void main()
//{
//	char s[8] = "Basic-C";
//	char* p;
//	int i;
//
//	p = s;
//
//	for (i = sizeof(s) - 2; i >= 0; i--)
//		printf("%c", *(p+i));	// *(p+i) == *(s+i) == p[i]
//
//	printf("\n");
//}

//void main()
//{
//	char ss[100];
//	int count, i;
//	char *p;
//
//	printf("문자열을 입력하세요 : ");
//	scanf("%s", ss);
//
//	count = strlen(ss);
//
//	p = ss;
//
//	printf("내용을 거꾸로 출력 ==> ");
//	for (i = 0; i < count; i++)
//	{
//		printf("%c", *(p + count - (i + 1)));
//	}
//	printf("\n");
//}

//void main()
//{
//	int a, b, tmp;
//	int *p1, *p2;
//
//	printf("a 값 입력 : ");
//	scanf("%d", &a);
//	printf("b 값 입력 : ");
//	scanf("%d", &b);
//
//	p1 = &a;
//	p2 = &b;
//
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//
//	printf("바뀐 값 a는 %d, b는 %d", a, b);
//}

//void swap(int* p1, int* p2); // swap을 사용하는 방법
//
//int main()
//{
//	int a, b;
//
//	printf("a 값 입력 : ");
//	scanf("%d", &a);
//	printf("b 값 입력 : ");
//	scanf("%d", &b);
//
//	swap(&a, &b);
//
//	printf("바뀐 값 a는 %d, b는 %d", a, b);
//
//	return 0;
//}
//
//void swap(int* p1, int* p2) {
//	int tmp;
//
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//} // swap

#include "MySwap.h"
void main()
{
	int s[10] = { 1, 0, 3, 2, 5, 4, 7, 6, 9, 8 };
	int tmp;
	int i, k, j;

	printf("정렬 전 배열 s ==> ");
	for (i = 0; i < 10; i++)
		printf("%2d", s[i]);

	// 선택 정렬
	for (i = 0; i < 9; i++) {
		for (k = i+1; k < 10; k++) {
			if (s[i] > s[k]) {
				tmp = s[i];
				s[i] = s[k];
				s[k] = tmp;
			}
			for (j = 0; j < 10; j++)
				printf("%2d", s[j]);
			printf("\n");
		}
	}
	printf("\n정렬 후 배열 s ==> ");
	for (i = 0; i < 10; i++)
		printf("%2d", s[i]);
}

