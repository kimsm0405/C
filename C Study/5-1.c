#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main()
//{
//	int a = 99;
//
//	if (a < 100)
//		printf("100���� �۱���..\n");
//}

//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//	{
//		printf("100���� �۱���..\n");
//		printf("�����̹Ƿ� �� ������ �� ���̰���\n");
//	}
//		
//
//		printf("���α׷� ��! \n");
//}

//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//		printf("100���� �۱���..\n");
//	else
//		printf("100���� ũ����..\n");
//}

//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//	{
//		printf("100���� �۱���..\n");
//		printf("���̸� �� ���嵵 ���̰���?\n");
//	}
//		
//	else
//	{
//		printf("100���� ũ����..\n");
//		printf("�����̸� �� ���嵵 ���̰���?\n");
//	}
//
//	printf("���α׷� ��! \n");
//}

//void main()
//{
//	int a;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//
//	if (a % 2 == 0)
//	{
//		printf("¦���� �Է��߱���..\n");
//	}
//	else
//	{
//		printf("Ȧ���� �Է��߱���..\n");
//	}
//}

//void main()
//{
//	int a = 75;
//
//	if (a > 50)
//	{
//		if (a < 100)
//		{
//			printf("50���� ũ�� 100���� �۱���..\n");
//		}
//		else
//		{
//			printf("��~~ 100���� ũ����..\n");
//		}
//	}
//	else
//	{
//		printf("����~ 50���� �۱���..\n");
//	}
//}

//void main()
//{
//	int a;
//
//	printf("������ �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//
//	if (a >= 90)
//		printf("A");
//	else
//		if (a >= 80)
//			printf("B");
//		else
//			if (a >= 70)
//				printf("C");
//			else
//				if (a >= 60)
//					printf("D");
//				else
//					printf("F");
//
//	printf(" ���� �Դϴ�. \n");
//}

//void main()
//{
//	int a;
//
//	printf("1 ~ 4 �߿� �����ϼ��� : ");
//	scanf_s("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		printf("1�� �����ߴ�\n");
//		break;
//	case 2:
//		printf("2�� �����ߴ�\n");
//		break;
//	case 3:
//		printf("3�� �����ߴ�\n");
//		break;
//	case 4:
//		printf("4�� �����ߴ�\n");
//		break;
//	default:
//		printf("�̻��� �� �����ߴ�\n");
//	}
//}

//void main()
//{
//	int year;
//
//	printf("��������� �Է��ϼ��� : ");
//	scanf_s("%d", &year);
//
//	switch (year % 12)
//	{
//	case 0: printf("�����̶�\n"); break;
//	case 1: printf("�߶�\n"); break;
//	case 2: printf("����\n"); break;
//	case 3: printf("������\n"); break;
//	case 4: printf("���\n"); break;
//	case 5: printf("�Ҷ�\n"); break;
//	case 6: printf("ȣ���̶�\n"); break;
//	case 7: printf("�䳢��\n"); break;
//	case 8: printf("���\n"); break;
//	case 9: printf("���\n"); break;
//	case 10: printf("����\n"); break;
//	case 11: printf("���\n"); break;
//	}
//}

//void main()
//{
//	int a, b;
//	char operator;
//
//	printf("ù ��° ���� �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//	printf("����� �����ڸ� �Է��ϼ��� : ");
//	scanf_s(" %c", &operator, 1);
//	printf("�� ��° ���� �Է��ϼ��� : ");
//	scanf_s("%d", &b);
//
//	if (operator == '+')
//		printf("%d + %d = %d", a, b, a+b);
//
//	if (operator == '-')
//		printf("%d - %d = %d", a, b, a-b);
//
//	if (operator == '*')
//		printf("%d * %d = %d", a, b, a*b);
//
//	if (operator == '/')
//		printf("%d / %d = %f", a, b, a/(float)b);
//
//	if (operator == '%')
//		printf("%d %% %d = %d", a, b, a%b);
//
//}

//void main()
//{
//	int a, b;
//	char operator;
//
//	printf("ù ��° ���� �Է��ϼ��� : ");
//	scanf_s("%d", &a);
//	printf("����� �����ڸ� �Է��ϼ��� : ");
//	scanf_s(" %c", &operator, 1); // %c �տ� ��ĭ ���� ������, �ٷ� ������ ���� �Է� �� ����Ű�� ������ �װ� '����'�� �νĵǾ������ ������ ������ ����� �����ν� �װ��� ����ϱ� ����.
//	printf("�� ��° ���� �Է��ϼ��� : ");
//	scanf_s("%d", &b);
//
//	if (operator == '+')
//		printf("%d + %d = %d", a, b, a + b);
//	else
//		if (operator == '-')
//			printf("%d - %d = %d", a, b, a - b);
//		else
//			if (operator == '*')
//				printf("%d * %d = %d", a, b, a * b);
//			else
//				if (operator == '/')
//					printf("%d / %d = %f", a, b, a / (float)b);
//				else
//					if (operator == '%')
//						printf("%d %% %d = %d", a, b, a % b);
//					else
//						printf("�����ڸ� �߸� �Է��߽��ϴ�.");
//}


void main()
{
	int a, b;
	char operator;

	printf("������ �� �ٷ� ����� �Է��ϼ��� : ");
	scanf("%d %c %d", &a, &operator, &b);

	switch (operator)
	{
	case '+':
		printf("%d + %d = %d �Դϴ�.\n", a, b, a + b); break;
	case '-':
		printf("%d - %d = %d �Դϴ�.\n", a, b, a - b); break;
	case '*':
		printf("%d * %d = %d �Դϴ�.\n", a, b, a * b); break;
	case '/':
		printf("%d / %d = %f �Դϴ�.\n", a, b, a / (float)b); break;
	case '%':
		printf("%d %% %d = %d �Դϴ�.\n", a, b, a % b); break;
	default:
		printf("�����ڸ� �߸� �Է��߽��ϴ�.\n");
	}
}

