#include <stdio.h>

//void main()
//{
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//	printf("�ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n");
//}

//void main()
//{
//	int i;
//
//	for (i = 1; i < 20000; i*=2)
//	{
//		printf("%d������ : �ȳ��ϼ���? ���ۺ��� for���� ���� ���Դϴ�. ^^\n", i);
//	}
//}

//void main()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("�ȳ��ϼ���? \n");
//		printf("##�� �ȳ��ϼ���?## \n");
//	}
//
//	printf("\n\n");
//
//	for(i = 0; i < 3; i++)
//		printf("�ȳ��ϼ���? \n");
//		printf("##�� �ȳ��ϼ���?## \n");
//}

//void main()
//{
//	int i;
//
//	for (i = 1; i <= 5; i++)
//	{
//		printf("%d \n", i);
//	}
//}

//void main()
//{
//	int hap;
//
//	hap = 1 + 2 + 3 + 4 + 5 + 6 + 7 + 8 + 9 + 10;
//
//	printf("1���� 10������ ��: %d \n", hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 10; i++) {
//		hap += i;
//	}
//
//	printf("1���� 10������ ��: %d \n", hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 501; i <= 1000; i = i + 2)
//	{
//		hap = hap + i;
//	}
//
//	printf("500���� 1000������ Ȧ���� ��: %d \n", hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//	int num;
//
//	printf(" �� �Է� : ");
//	scanf_s("%d", &num);
//
//	for (i = 1; i <= num; i++)
//	{
//		hap = hap + i;
//	}
//
//	printf(" 1���� %d������ ��: %d \n", num, hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//	int num1, num2, num3;
//
//	printf(" ���۰�, ����, ������ �Է� : ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i=i+num3)
//	{
//		hap = hap + i;
//	}
//
//	printf(" %d���� %d���� %d�� ������ ���� ��: %d \n", num1,num2, num3, hap);
//}

//void main()
//{
//	int i;
//	int dan;
//
//	printf(" �� �� ? ");
//	scanf_s("%d", &dan);
//
//	for (i = 1; i <= 9; i++) {
//		printf(" %d X %d = %d \n", dan, i, dan * i);
//	}
//}

//void main()
//{
//	int i, k;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 2; k++)
//		{
//			printf("��ø for���Դϴ�. (i��: %d, k��: %d)\n", i, k);
//		}
//	}
//}

//void main()
//{
//	int i, k;
//
//	for (i = 2; i <= 9; i++)
//	{
//		for (k = 1; k <= 9; k++)
//		{
//			printf(" %d X %d = %2d \t", i, k, i * k); // (�ٹٲ��� �ƴ� tab �� �Ϸ���, \n �� �ƴ� \t�� �ؾߵ�)
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	int i, k;
//
//	for (i = 1; k = 1; i <= 9;i++, k++)
//		printf(" %d X %d = %d \n", i, k, i * k);
//}

//void main()
//{
//	int i;
//	i = 0;
//	for ( ; ; )
//	{
//		printf("%d \n", i);
//		i++;
//	}
//}

//void main()
//{
//	int a, b;
//
//	for (; ; )
//	{
//		printf("���� �� �� �Է� (���߷��� Ctrl+C) : ");
//		scanf_s("%d %d", &a, &b);
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//}

//void main()
//{
//	int i, k;
//
//	for (i = 2; i <= 9; i++)
//	{
//		printf("#��%d��# \t", i);
//	}
//
//	printf("\n\n");
//
//	for (i = 2; i <= 9; i++)
//	{
//		for (k = 1; k <= 9; k++)
//			printf("%2d X %2d = %2d \t", i, k, i * k);
//	}
//	printf("\n");
//}

//void main()
//{
//	int i;
//
//	for (i = 0; i <= 127; i++)
//	{
//		if (i%16==0)
//		{
//			printf("----------------\n");
//			printf("10���� 16���� ���� \n");
//			printf("----------------\n");
//		}
//		printf("%5d %5x %5c \n", i, i, i);
//	}
//	
//}

