#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main() {
//
//	// ���� ���� �κ�
//	int a, b;
//	int result;
//
//	// ����ڷ� ���� �Է� ���� ������ �ʱ�ȭ
//	printf("ù ��° ����� ���� �Է��ϼ���. : ");
//	scanf("%d", &a);
//
//	printf("�� ��° ����� ���� �Է��ϼ���. : ");
//	scanf("%d", &b);
//
//	result = a + b;
//	printf("%d + %d = %d \n", a, b, result);
//
//	result = a - b;
//	printf("%d - %d = %d \n", a, b, result);
//
//	result = a * b;
//	printf("%d * %d = %d \n", a, b, result);
//
//	result = a / b;
//	printf("%d / %d = %d \n", a, b, result);
//}

void main() {

	int a, b, c, d;
	int result;

	printf("ù ��° ����� ���� �Է��ϼ���. ");
	scanf("%d", &a);

	printf("�� ��° ����� ���� �Է��ϼ���. ");
	scanf("%d", &b);

	printf("�� ��° ����� ���� �Է��ϼ���. ");
	scanf("%d", &c);

	printf("�� ��° ����� ���� �Է��ϼ���. ");
	scanf("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);

}