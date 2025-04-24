#include <stdio.h>

//void main()
//{
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//	printf("안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n");
//}

//void main()
//{
//	int i;
//
//	for (i = 1; i < 20000; i*=2)
//	{
//		printf("%d번실행 : 안녕하세요? 빙글빙글 for문을 공부 중입니다. ^^\n", i);
//	}
//}

//void main()
//{
//	int i;
//	for (i = 0; i < 3; i++)
//	{
//		printf("안녕하세요? \n");
//		printf("##또 안녕하세요?## \n");
//	}
//
//	printf("\n\n");
//
//	for(i = 0; i < 3; i++)
//		printf("안녕하세요? \n");
//		printf("##또 안녕하세요?## \n");
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
//	printf("1에서 10까지의 합: %d \n", hap);
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
//	printf("1에서 10까지의 합: %d \n", hap);
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
//	printf("500에서 1000까지의 홀수의 합: %d \n", hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//	int num;
//
//	printf(" 값 입력 : ");
//	scanf_s("%d", &num);
//
//	for (i = 1; i <= num; i++)
//	{
//		hap = hap + i;
//	}
//
//	printf(" 1에서 %d까지의 합: %d \n", num, hap);
//}

//void main()
//{
//	int hap = 0;
//	int i;
//	int num1, num2, num3;
//
//	printf(" 시작값, 끝값, 증가값 입력 : ");
//	scanf_s("%d %d %d", &num1, &num2, &num3);
//
//	for (i = num1; i <= num2; i=i+num3)
//	{
//		hap = hap + i;
//	}
//
//	printf(" %d에서 %d까지 %d씩 증가한 값의 합: %d \n", num1,num2, num3, hap);
//}

//void main()
//{
//	int i;
//	int dan;
//
//	printf(" 몇 단 ? ");
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
//			printf("중첩 for문입니다. (i값: %d, k값: %d)\n", i, k);
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
//			printf(" %d X %d = %2d \t", i, k, i * k); // (줄바꿈이 아닌 tab 을 하려면, \n 이 아닌 \t로 해야됨)
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
//		printf("더할 두 수 입력 (멈추려면 Ctrl+C) : ");
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
//		printf("#제%d단# \t", i);
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
//			printf("10진수 16진수 문자 \n");
//			printf("----------------\n");
//		}
//		printf("%5d %5x %5c \n", i, i, i);
//	}
//	
//}

