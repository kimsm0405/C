#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main()
//{
//	int a = 99;
//
//	if (a < 100)
//		printf("100보다 작군요..\n");
//}

//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//	{
//		printf("100보다 작군요..\n");
//		printf("거짓이므로 이 문장은 안 보이겠죠\n");
//	}
//		
//
//		printf("프로그램 끝! \n");
//}

//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//		printf("100보다 작군요..\n");
//	else
//		printf("100보다 크군요..\n");
//}

//void main()
//{
//	int a = 200;
//
//	if (a < 100)
//	{
//		printf("100보다 작군요..\n");
//		printf("참이면 이 문장도 보이겠죠?\n");
//	}
//		
//	else
//	{
//		printf("100보다 크군요..\n");
//		printf("거짓이면 이 문장도 보이겠죠?\n");
//	}
//
//	printf("프로그램 끝! \n");
//}

//void main()
//{
//	int a;
//
//	printf("정수를 입력하세요 : ");
//	scanf_s("%d", &a);
//
//	if (a % 2 == 0)
//	{
//		printf("짝수를 입력했군요..\n");
//	}
//	else
//	{
//		printf("홀수를 입력했군요..\n");
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
//			printf("50보다 크고 100보다 작군요..\n");
//		}
//		else
//		{
//			printf("와~~ 100보다 크군요..\n");
//		}
//	}
//	else
//	{
//		printf("에게~ 50보다 작군요..\n");
//	}
//}

//void main()
//{
//	int a;
//
//	printf("점수를 입력하세요 : ");
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
//	printf(" 학점 입니다. \n");
//}

//void main()
//{
//	int a;
//
//	printf("1 ~ 4 중에 선택하세요 : ");
//	scanf_s("%d", &a);
//
//	switch (a)
//	{
//	case 1:
//		printf("1을 선택했다\n");
//		break;
//	case 2:
//		printf("2를 선택했다\n");
//		break;
//	case 3:
//		printf("3을 선택했다\n");
//		break;
//	case 4:
//		printf("4를 선택했다\n");
//		break;
//	default:
//		printf("이상한 걸 선택했다\n");
//	}
//}

//void main()
//{
//	int year;
//
//	printf("출생연도를 입력하세요 : ");
//	scanf_s("%d", &year);
//
//	switch (year % 12)
//	{
//	case 0: printf("원숭이띠\n"); break;
//	case 1: printf("닭띠\n"); break;
//	case 2: printf("개띠\n"); break;
//	case 3: printf("돼지띠\n"); break;
//	case 4: printf("쥐띠\n"); break;
//	case 5: printf("소띠\n"); break;
//	case 6: printf("호랑이띠\n"); break;
//	case 7: printf("토끼띠\n"); break;
//	case 8: printf("용띠\n"); break;
//	case 9: printf("뱀띠\n"); break;
//	case 10: printf("말띠\n"); break;
//	case 11: printf("양띠\n"); break;
//	}
//}

//void main()
//{
//	int a, b;
//	char operator;
//
//	printf("첫 번째 수를 입력하세요 : ");
//	scanf_s("%d", &a);
//	printf("계산할 연산자를 입력하세요 : ");
//	scanf_s(" %c", &operator, 1);
//	printf("두 번째 수를 입력하세요 : ");
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
//	printf("첫 번째 수를 입력하세요 : ");
//	scanf_s("%d", &a);
//	printf("계산할 연산자를 입력하세요 : ");
//	scanf_s(" %c", &operator, 1); // %c 앞에 한칸 띄우는 이유는, 바로 직전에 숫자 입력 후 엔터키를 누르면 그게 '문자'로 인식되어버리기 때문에 공백을 만들어 줌으로써 그것을 상쇄하기 위함.
//	printf("두 번째 수를 입력하세요 : ");
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
//						printf("연산자를 잘못 입력했습니다.");
//}


void main()
{
	int a, b;
	char operator;

	printf("수식을 한 줄로 띄어쓰기로 입력하세요 : ");
	scanf("%d %c %d", &a, &operator, &b);

	switch (operator)
	{
	case '+':
		printf("%d + %d = %d 입니다.\n", a, b, a + b); break;
	case '-':
		printf("%d - %d = %d 입니다.\n", a, b, a - b); break;
	case '*':
		printf("%d * %d = %d 입니다.\n", a, b, a * b); break;
	case '/':
		printf("%d / %d = %f 입니다.\n", a, b, a / (float)b); break;
	case '%':
		printf("%d %% %d = %d 입니다.\n", a, b, a % b); break;
	default:
		printf("연산자를 잘못 입력했습니다.\n");
	}
}

