#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main()
//{
//	int i;
//	i = 0;
//
//	while (i < 5) {
//		printf("while���� �����մϴ�.\n");
//		i++;
//	}
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	i = 1;
//	while (i <= 10) {
//		hap = hap + i;
//		i++;
//	}
//
//	printf("1���� 10������ ��: %d \n", hap);
//}

//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("���� �� �� �Է� (���߷��� Ctrl+C) : ");
//		scanf_s("%d %d", &a, &b);
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//}

//void main()
//{
//	int a, b;
//	char ch;
//
//	while (1)
//	{
//		printf("����� �� ���� �Է� (���߷��� Ctrl+C) : ");
//		scanf("%d %d", &a, &b);
//
//		printf("����� �����ڸ� �Է��ϼ��� : ");
//		scanf(" %c", &ch);
//
//		switch (ch)
//		{
//		case '+' :
//			printf("%d + %d = %d �Դϴ�. \n", a, b, a + b);
//			break;
//		case '-':
//			printf("%d - %d = %d �Դϴ�. \n", a, b, a - b);
//			break;
//		case '*':
//			printf("%d * %d = %d �Դϴ�. \n", a, b, a * b);
//			break;
//		case '/':
//			printf("%d / %d = %f �Դϴ�. \n", a, b, a /(float) b);
//			break;
//		case '%':
//			printf("%d %% %d = %d �Դϴ�. \n", a, b, a % b);
//			break;
//		default :
//			printf("�����ڸ� �߸� �Է��߽��ϴ�. \n");
//		}
//	}
//}

//void main()
//{
//	int a = 100;
//
//	while (a == 200)
//	{
//		printf("while�� ���ο� ��� �Խ��ϴ�. \n");
//	}
//
//	do {
//		printf("do ~ while�� ���ο� ��� �Խ��ϴ�. \n");
//	} while (a == 200);
//}

//void main()
//{
//	int menu;
//
//	do {
//		printf("\n�մ� �ֹ��Ͻðڽ��ϱ� ? \n");
//		printf("<1>ī��� <2>īǪġ�� <3>�Ƹ޸�ī�� <4>�׸� ��ų���� ==> ");
//		scanf("%d", &menu);
//		switch (menu)
//		{
//		case 1: printf("#ī��� �ֹ��ϼ̽��ϴ�.\n"); break;
//		case 2: printf("#īǪġ�� �ֹ��ϼ̽��ϴ�.\n"); break;
//		case 3: printf("#�Ƹ޸�ī�� �ֹ��ϼ̽��ϴ�.\n"); break;
//		case 4: printf("#�ֹ��Ͻ� Ŀ�� �غ��ϰڽ��ϴ�.\n"); break;
//		default : printf("#�߸� �ֹ��ϼ̽��ϴ�.\n"); break;
//		}
//	} while (menu != 4);
//}

//void main()
//{
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		printf("for���� %dȸ �����߽��ϴ�.\n", i);
//		break;
//	}
//
//	printf("for���� �����߽��ϴ�.\n");
//}

//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("���� �� �� �Է� (���߷��� 0�� �Է�) : ");
//		scanf_s("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//
//	printf("0�� �Է��ؼ� for���� Ż���߽��ϴ�.\n");
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		hap = hap + 1;
//
//		if (hap >= 1000)
//			break;
//	}
//
//	printf(" 1~100�� �տ��� ���ʷ� 1000�� �Ѵ� ��ġ��? : %d\n", i);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 3 == 0)
//			continue;
//
//		hap += i;
//	}
//
//	printf("1~100������ ��(3�� ��� ����): %d\n", hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		hap += i;
//
//		if (hap > 2000)
//			goto mygoto;
//	}
//
//mygoto:
//	printf("1���� %d���� ���ϸ� 2000�� �Ѿ��.\n", i);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//		hap += i;
//
//	printf("1���� 100������ ���� %d �Դϴ�.\n", hap);
//	return;
//
//	printf("���α׷��� ���Դϴ�.");
//}

void main()
{
	int start, end;
	int multiple;
	int i;
	int sum = 0;

	printf("�հ��� ���۰� ==> ");
	scanf("%d", &start);
	printf("�հ��� ���� ==> ");
	scanf("%d", &end);
	printf("��� ==> ");
	scanf("%d", &multiple);

	i = start;
	while (i <= end)
	{
		if (i % multiple == 0)
			sum = sum + i;

		i++;
	}

	printf("%d���� %d������ %d����� �հ� ==> %d\n", start, end, multiple, sum);
}