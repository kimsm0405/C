#include <stdio.h>

//void main()
//{
//	int a, b = 5, c = 3;
//
//	a = b + c;
//	printf("%d + %d = %d \n", b, c, a);
//
//	a = b - c;
//	printf("%d - %d = %d \n", b, c, a);
//
//	a = b * c;
//	printf("%d * %d = %d \n", b, c, a);
//
//	a = b / c;
//	printf("%d / %d = %d \n", b, c, a);
//
//	a = b % c;
//	printf("%d %% %d = %d \n", b, c, a);
//}

//void main()
//{
//	int a = 2, b = 3, c = 4;
//	int result1, mok, namugi;
//	float result2;
//
//	result1 = a + b - c;
//	printf(" %d + %d - %d = %d \n", a, b, c, result1);
//
//	result1 = a + b * c;
//	printf(" %d + %d * %d = %d \n", a, b, c, result1);
//
//	result2 = a * b / (float) c;
//	printf(" %d * %d / %d = %f \n", a, b, c, result2);
//
//	mok = c / b;
//	printf(" %d / %d �� ���� %d \n", c, b, mok);
//
//	namugi = c % b;
//	printf(" %d %% %d �� �������� %d \n", c, b, namugi);
//}

//void main()
//{
//	int a = 10;
//
//	a++;
//	printf(" a ++ ==> %d \n", a);
//
//	a--;
//	printf(" a -- ==> %d \n", a);
//
//	a += 5;
//	printf(" a += 5 ==> %d \n", a);
//
//	a -= 5;
//	printf(" a -= 5 ==> %d \n", a);
//
//	a *= 5;
//	printf(" a *= 5 ==> %d \n", a);
//
//	a /= 5;
//	printf(" a /= 5 ==> %d \n", a);
//
//	a %= 5;
//	printf(" a %%= 5 ==> %d \n", a);
//}

//void main()
//{
//	int a = 10, b;
//
//	b = a++;
//	printf(" %d \n", b);
//
//	b = ++a;
//	printf(" %d \n", b);
//}

//void main()
//{
//	int a = 100, b = 200;
//
//	printf(" %d == %d �� %d �̴�.\n", a, b, a == b);
//	printf(" %d != %d �� %d �̴�.\n", a, b, a != b);
//	printf(" %d > %d �� %d �̴�.\n", a, b, a > b);
//	printf(" %d < %d �� %d �̴�.\n", a, b, a < b);
//	printf(" %d >= %d �� %d �̴�.\n", a, b, a >= b);
//	printf(" %d <= %d �� %d �̴�.\n", a, b, a <= b);
//
//	printf(" %d = %d �� %d �̴�.\n", a, b, a = b);
//}

//void main()
//{
//	int a = 99;
//
//	printf(" And ���� : %d \n", (a >= 100) && (a <= 200));
//	printf(" OR ���� : %d \n", (a >= 100) || (a <= 200));
//	printf(" NOT ���� : %d \n", !(a == 100));
//}

//void main()
//{
//	int a = 100, b = -200;
//
//	printf(" ����� And ���� : %d \n", a && b);
//	printf(" ����� OR ���� : %d \n", a || b);
//	printf(" ����� NOT ���� : %d \n", !a);
//}

//void main()
//{
//	char a = 'A', b, c;
//	char mask = 0x0F;
//
//	printf(" %X & %X = %X \n", a, mask, a & mask);
//	printf(" %X | %X = %X \n", a, mask, a | mask);
//
//	mask = 'a' - 'A';
//
//	b = a ^ mask;
//	printf(" %c ^ %d = %c \n", a, mask, b);
//	a = b ^ mask;
//	printf(" %c ^ %d = %c \n", b, mask, a);
//}

//void main()
//{
//	char a = 128;
//	printf("%d �� ���� 1ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a << 1);
//	printf("%d �� ���� 2ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a << 2);
//	printf("%d �� ���� 3ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a << 3);
//	printf("%d �� ���� 4ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a << 4);
//}

//void main()
//{
//	int a = 10;
//	printf("%d �� ������ 1ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a >> 1);
//	printf("%d �� ������ 2ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a >> 2);
//	printf("%d �� ������ 3ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a >> 3);
//	printf("%d �� ������ 4ȸ ����Ʈ�ϸ� %d �̴�. \n", a, a >> 4);
//}

//void main()
//{
//	int a = 100, result;
//	int i;
//
//	for (i = 1; i <= 5; i++)
//	{
//		result = a << i;
//		printf("%d << %d = %d\n", a, i, result);
//	}
//
//	for (i = 1; i <= 5; i++)
//	{
//		result = a >> i;
//		printf("%d >> %d = %d\n", a, i, result);
//	}
//}

void main()
{
	float a, b;
	float result;

	printf("ù ��° ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &a);
	printf("�� ���� ����� ���� �Է��ϼ��� ==> ");
	scanf_s("%f", &b);

	result = a + b;
	printf("%.2f + %.2f = %.2f\n", a, b, result);
	result = a - b;
	printf("%.2f - %.2f = %.2f\n", a, b, result);
	result = a * b;
	printf("%.2f * %.2f = %.2f\n", a, b, result);
	result = a / b;
	printf("%.2f / %.2f = %.2f\n", a, b, result);
	result = (int)a % (int)b;
	printf("%d %% %d = %d\n", (int)a, (int)b, (int)result);
}

