#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main() // ����� ����
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

//void main() // ����� ���� (�ݴ����)
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
//	printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
//	top++;
//
//	stack[top] = 'B';
//	printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
//	top++;
//
//	stack[top] = 'C';
//	printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
//	top++;
//
//	printf("\n");
//
//	top --;
//	printf(" %c �ڵ����� �ͳ��� ��������\n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c �ڵ����� �ͳ��� ��������\n", stack[top]);
//	stack[top] = ' ';
//
//	top--;
//	printf(" %c �ڵ����� �ͳ��� ��������\n", stack[top]);
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
//		printf("<1> �ڵ��� �ֱ� <2> �ڵ��� ���� <3> �� : ");
//		scanf("%d", &select);
//
//		switch (select)
//		{
//		case 1:
//			if (top >= 5)
//			{
//				printf("�ͳ��� �� ���� ���� �� ��\n");
//			}
//			else
//			{
//				stack[top] = carName++;
//				printf(" %c �ڵ����� �ͳο� ��\n", stack[top]);
//				top ++;
//			}
//			break;
//
//		case 2:
//			if (top <= 0)
//			{
//				printf("�������� �ڵ����� ����\n");
//			}
//			else
//			{
//				top --;
//				printf(" %c �ڵ����� �ͳο��� ����\n", stack[top]);
//				stack[top] = ' ';
//			}
//			break;
//
//		case 3:
//			printf("���� �ͳο� %d�밡 ����.\n", top);
//			printf("���α׷��� �����մϴ�.\n");
//			break;
//
//		default:
//			printf("�߸� �Է��߽��ϴ�. �ٽ� �Է��ϼ���. \n");
//		}
//	}
//}

//void main()
//{
//	int a = 100;
//	int b = 200;
//
//	printf("���� a�� �ּҴ� %d �Դϴ�. \n", &a);
//	printf("���� b�� �ּҴ� %d �Դϴ�. \n", &b);
//}

//void main()
//{
//	int aa[3] = { 10, 20, 30 };
//
//	printf("aa[0]�� ���� %d, �ּҴ� %d \n", aa[0], &aa[0]);
//	printf("aa[1]�� ���� %d, �ּҴ� %d \n", aa[1], &aa[1]);
//	printf("aa[2]�� ���� %d, �ּҴ� %d \n", aa[2], &aa[2]);
//	printf("�迭 �̸� aa�� ��(=�ּ�)�� %d \n", aa);
//}

//void main()
//{
//	int aa[3] = { 10,20,30 };
//
//	printf("aa[0]�� %d, aa+0�� %d \n", &aa[0], aa + 0);
//	printf("aa[1]�� %d, aa+1�� %d \n", &aa[1], aa + 1);
//	printf("aa[2]�� %d, aa+2�� %d \n", &aa[2], aa + 2);
//}

//void main()
//{
//	char ch;
//	char* p;
//
//	ch = 'A';
//	p = &ch;
//
//	printf("ch�� ������ �ִ� ��: ch ==> %c \n", ch);
//	printf("ch�� �ּ�(address): &ch ==> %d \n", &ch);
//	printf("p�� ������ �ִ� ��: p ==> %d \n", p);
//	printf("p�� ����Ű�� ���� ���� ��: *p ==> %c \n", *p);
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
//	printf("ch�� ������ �ִ� ��: ch ==> %c \n\n", ch);
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
//	printf("���ڿ��� �Է��ϼ��� : ");
//	scanf("%s", ss);
//
//	count = strlen(ss);
//
//	p = ss;
//
//	printf("������ �Ųٷ� ��� ==> ");
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
//	printf("a �� �Է� : ");
//	scanf("%d", &a);
//	printf("b �� �Է� : ");
//	scanf("%d", &b);
//
//	p1 = &a;
//	p2 = &b;
//
//	tmp = *p1;
//	*p1 = *p2;
//	*p2 = tmp;
//
//	printf("�ٲ� �� a�� %d, b�� %d", a, b);
//}

//void swap(int* p1, int* p2); // swap�� ����ϴ� ���
//
//int main()
//{
//	int a, b;
//
//	printf("a �� �Է� : ");
//	scanf("%d", &a);
//	printf("b �� �Է� : ");
//	scanf("%d", &b);
//
//	swap(&a, &b);
//
//	printf("�ٲ� �� a�� %d, b�� %d", a, b);
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

	printf("���� �� �迭 s ==> ");
	for (i = 0; i < 10; i++)
		printf("%2d", s[i]);

	// ���� ����
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
	printf("\n���� �� �迭 s ==> ");
	for (i = 0; i < 10; i++)
		printf("%2d", s[i]);
}

