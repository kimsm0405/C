#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void main()
//{
//	int coffee;
//
//	printf("� Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
//	scanf("%d", &coffee);
//
//	printf("\n# 1. �߰ſ� ���� �غ��Ѵ�\n");
//	printf("# 2. �������� �غ��Ѵ�\n");
//
//	switch (coffee)
//	{
//	case 1: printf("# 3. ����Ŀ�Ǹ� ź��\n"); break;
//	case 2: printf("# 3. ����Ŀ�Ǹ� ź��\n"); break;
//	case 3: printf("# 3. ��Ŀ�Ǹ� ź��\n"); break;
//	default: printf("# 3. �ƹ��ų� ź��\n"); break;
//	}
//
//	printf("# 4. ���� �״´�\n");
//	printf("# 5. ��Ǭ���� ��� ���δ�\n\n");
//
//	printf("�մ�~ Ŀ�� ���� �ֽ��ϴ�.\n\n");
//}

//int coffee_machine(int button)
//{
//	printf("\n# 1. (�ڵ�����) �߰ſ� ���� �غ��Ѵ�\n");
//	printf("# 2. (�ڵ�����) �������� �غ��Ѵ�\n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
//	case 2: printf("# 3. (�ڵ�����) ����Ŀ�Ǹ� ź��\n"); break;
//	case 3: printf("# 3. (�ڵ�����) ��Ŀ�Ǹ� ź��\n"); break;
//	default: printf("# 3. (�ڵ�����) �ƹ��ų� ź��\n"); break;
//	}
//
//	printf("# 4. (�ڵ�����) ���� �״´�\n");
//	printf("# 5. (�ڵ�����) ��Ǭ���� ��� ���δ�\n\n");
//
//	
//}
// 
//void main()
//{
//	int coffee;
//	int ret;
//	
//	printf("A��, � Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
//	scanf("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("A�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
//
//	printf("B��, � Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
//	scanf("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("B�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
//
//	printf("C��, � Ŀ�� �帱���? (1:����, 2:����, 3:��) ");
//	scanf("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("C�� Ŀ�� ���� �ֽ��ϴ�.\n\n");
//}

//int calc(int v1, int v2, int op)
//{
//	int result;
//
//	switch (op)
//	{
//	case 1:  result = v1 + v2; break;
//	case 2:  result = v1 - v2; break;
//	case 3:  result = v1 * v2; break;
//	case 4:  result = v1 / v2; break;
//	}
//
//	return result;
//}
//
//void main()
//{
//	int res;
//	int oper, a, b;
//
//	printf("��� �Է� (1:+, 2:-, 3:*, 4:/) : ");
//	scanf("%d", &oper);
//
//	printf("����� �� ���ڸ� �Է� : ");
//	scanf("%d %d", &a, &b);
//
//	res = calc(a, b, oper);
//	
//	printf("��� ����� : %d\n", res);
//}

//int a = 100;
//
//void func1()
//{
//	int a = 200;
//	printf("func1()���� a�� ��==> %d\n", a);
//}
//
//void main()
//{
//	func1();
//	printf("main() ���� a�� ��==> %d\n", a);
//}

//void func1()
//{
//	printf("void �� �Լ��� ������ �� ����.\n");
//}
//
//int func2()
//{
//	return 100;
//}
//
//void main()
//{
//	int a;
//
//	func1();
//
//	a = func2();
//	printf("int �� �Լ����� ������ �� ==> %d\n", a);
//}

//void func1(int a)
//{
//	a = a + 1;
//	printf("���޹��� a ==> %d\n", a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(a);
//	printf("func1() ���� ���� a ==> %d\n", a);
//}

//void func1(int* a)
//{
//	*a = *a + 1;
//	printf("���޹��� a ==> %d\n", *a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(&a);
//	printf("func1() ���� ���� a ==> %d\n", a);
//}

//void lotto()
//{
//	int i, j;
//	int a[6];
//
//	printf("** �ζ� ��÷�� �����մϴ�.\n\n");
//	printf("��÷�� �ζ� ��ȣ => ");
//
//	for (i = 0;i < 6;i++) {
//		/*printf("%4d", rand() % 45 + 1);*/
//		a[i] = rand() % 45 + 1;
//		for (j = 0;j < i;j++) {
//			
//		}
//	}
//}
//
//int main() {
//
//	srand(time(NULL));
//
//	lotto();
//
//	return 0;
//}

//void multiple(int table)
//{
//	int i;
//
//	for (i = 0; i < 10; i++)
//	{
//		printf("%2d * %2d = %2d\n", table, i, table * i);
//	}
//}
//
//void main()
//{
//	int number;
//	
//	printf("����ϰ� ���� ���� �Է� : ");
//
//	scanf("%d", &number);
//
//	multiple(number);
//}

