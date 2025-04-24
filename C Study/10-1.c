#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//void main()
//{
//	int coffee;
//
//	printf("어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
//	scanf("%d", &coffee);
//
//	printf("\n# 1. 뜨거운 물을 준비한다\n");
//	printf("# 2. 종이컵을 준비한다\n");
//
//	switch (coffee)
//	{
//	case 1: printf("# 3. 보통커피를 탄다\n"); break;
//	case 2: printf("# 3. 설탕커피를 탄다\n"); break;
//	case 3: printf("# 3. 블랙커피를 탄다\n"); break;
//	default: printf("# 3. 아무거나 탄다\n"); break;
//	}
//
//	printf("# 4. 물을 붓는다\n");
//	printf("# 5. 스푼으로 저어서 녹인다\n\n");
//
//	printf("손님~ 커피 여기 있습니다.\n\n");
//}

//int coffee_machine(int button)
//{
//	printf("\n# 1. (자동으로) 뜨거운 물을 준비한다\n");
//	printf("# 2. (자동으로) 종이컵을 준비한다\n");
//
//	switch (button)
//	{
//	case 1: printf("# 3. (자동으로) 보통커피를 탄다\n"); break;
//	case 2: printf("# 3. (자동으로) 설탕커피를 탄다\n"); break;
//	case 3: printf("# 3. (자동으로) 블랙커피를 탄다\n"); break;
//	default: printf("# 3. (자동으로) 아무거나 탄다\n"); break;
//	}
//
//	printf("# 4. (자동으로) 물을 붓는다\n");
//	printf("# 5. (자동으로) 스푼으로 저어서 녹인다\n\n");
//
//	
//}
// 
//void main()
//{
//	int coffee;
//	int ret;
//	
//	printf("A님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
//	scanf("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("A님 커피 여기 있습니다.\n\n");
//
//	printf("B님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
//	scanf("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("B님 커피 여기 있습니다.\n\n");
//
//	printf("C님, 어떤 커피 드릴까요? (1:보통, 2:설탕, 3:블랙) ");
//	scanf("%d", &coffee);
//	ret = coffee_machine(coffee);
//	printf("C님 커피 여기 있습니다.\n\n");
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
//	printf("계산 입력 (1:+, 2:-, 3:*, 4:/) : ");
//	scanf("%d", &oper);
//
//	printf("계산할 두 숫자를 입력 : ");
//	scanf("%d %d", &a, &b);
//
//	res = calc(a, b, oper);
//	
//	printf("계산 결과는 : %d\n", res);
//}

//int a = 100;
//
//void func1()
//{
//	int a = 200;
//	printf("func1()에서 a의 값==> %d\n", a);
//}
//
//void main()
//{
//	func1();
//	printf("main() 에서 a의 값==> %d\n", a);
//}

//void func1()
//{
//	printf("void 형 함수는 돌려줄 게 없음.\n");
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
//	printf("int 형 함수에서 돌려준 값 ==> %d\n", a);
//}

//void func1(int a)
//{
//	a = a + 1;
//	printf("전달받은 a ==> %d\n", a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(a);
//	printf("func1() 실행 후의 a ==> %d\n", a);
//}

//void func1(int* a)
//{
//	*a = *a + 1;
//	printf("전달받은 a ==> %d\n", *a);
//}
//
//void main()
//{
//	int a = 10;
//
//	func1(&a);
//	printf("func1() 실행 후의 a ==> %d\n", a);
//}

//void lotto()
//{
//	int i, j;
//	int a[6];
//
//	printf("** 로또 추첨을 시작합니다.\n\n");
//	printf("추첨된 로또 번호 => ");
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
//	printf("출력하고 싶은 단을 입력 : ");
//
//	scanf("%d", &number);
//
//	multiple(number);
//}

