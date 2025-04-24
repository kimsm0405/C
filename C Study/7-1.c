#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main()
//{
//	int i;
//	i = 0;
//
//	while (i < 5) {
//		printf("while문을 공부합니다.\n");
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
//	printf("1에서 10까지의 합: %d \n", hap);
//}

//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("더할 두 수 입력 (멈추려면 Ctrl+C) : ");
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
//		printf("계산할 두 수를 입력 (멈추려면 Ctrl+C) : ");
//		scanf("%d %d", &a, &b);
//
//		printf("계산할 연산자를 입력하세요 : ");
//		scanf(" %c", &ch);
//
//		switch (ch)
//		{
//		case '+' :
//			printf("%d + %d = %d 입니다. \n", a, b, a + b);
//			break;
//		case '-':
//			printf("%d - %d = %d 입니다. \n", a, b, a - b);
//			break;
//		case '*':
//			printf("%d * %d = %d 입니다. \n", a, b, a * b);
//			break;
//		case '/':
//			printf("%d / %d = %f 입니다. \n", a, b, a /(float) b);
//			break;
//		case '%':
//			printf("%d %% %d = %d 입니다. \n", a, b, a % b);
//			break;
//		default :
//			printf("연산자를 잘못 입력했습니다. \n");
//		}
//	}
//}

//void main()
//{
//	int a = 100;
//
//	while (a == 200)
//	{
//		printf("while문 내부에 들어 왔습니다. \n");
//	}
//
//	do {
//		printf("do ~ while문 내부에 들어 왔습니다. \n");
//	} while (a == 200);
//}

//void main()
//{
//	int menu;
//
//	do {
//		printf("\n손님 주문하시겠습니까 ? \n");
//		printf("<1>카페라떼 <2>카푸치노 <3>아메리카노 <4>그만 시킬래요 ==> ");
//		scanf("%d", &menu);
//		switch (menu)
//		{
//		case 1: printf("#카페라떼 주문하셨습니다.\n"); break;
//		case 2: printf("#카푸치노 주문하셨습니다.\n"); break;
//		case 3: printf("#아메리카노 주문하셨습니다.\n"); break;
//		case 4: printf("#주문하신 커피 준비하겠습니다.\n"); break;
//		default : printf("#잘못 주문하셨습니다.\n"); break;
//		}
//	} while (menu != 4);
//}

//void main()
//{
//	int i;
//
//	for (i = 1; i <= 100; i++)
//	{
//		printf("for문을 %d회 실행했습니다.\n", i);
//		break;
//	}
//
//	printf("for문을 종료했습니다.\n");
//}

//void main()
//{
//	int a, b;
//
//	while (1)
//	{
//		printf("더할 두 수 입력 (멈추려면 0을 입력) : ");
//		scanf_s("%d %d", &a, &b);
//
//		if (a == 0)
//			break;
//
//		printf("%d + %d = %d \n", a, b, a + b);
//	}
//
//	printf("0을 입력해서 for문을 탈출했습니다.\n");
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
//	printf(" 1~100의 합에서 최초로 1000이 넘는 위치는? : %d\n", i);
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
//	printf("1~100까지의 합(3의 배수 제외): %d\n", hap);
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
//	printf("1부터 %d까지 합하면 2000이 넘어요.\n", i);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//
//	for (i = 1; i <= 100; i++)
//		hap += i;
//
//	printf("1부터 100까지의 합은 %d 입니다.\n", hap);
//	return;
//
//	printf("프로그램의 끝입니다.");
//}

void main()
{
	int start, end;
	int multiple;
	int i;
	int sum = 0;

	printf("합계의 시작값 ==> ");
	scanf("%d", &start);
	printf("합계의 끝값 ==> ");
	scanf("%d", &end);
	printf("배수 ==> ");
	scanf("%d", &multiple);

	i = start;
	while (i <= end)
	{
		if (i % multiple == 0)
			sum = sum + i;

		i++;
	}

	printf("%d부터 %d까지의 %d배수의 합계 ==> %d\n", start, end, multiple, sum);
}