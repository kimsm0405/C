#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//void main() {
//
//	// 변수 선언 부분
//	int a, b;
//	int result;
//
//	// 사용자로 부터 입력 받은 값으로 초기화
//	printf("첫 번째 계산할 값을 입력하세요. : ");
//	scanf("%d", &a);
//
//	printf("두 번째 계산할 값을 입력하세요. : ");
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

	printf("첫 번째 계산할 값을 입력하세요. ");
	scanf("%d", &a);

	printf("두 번째 계산할 값을 입력하세요. ");
	scanf("%d", &b);

	printf("세 번째 계산할 값을 입력하세요. ");
	scanf("%d", &c);

	printf("네 번째 계산할 값을 입력하세요. ");
	scanf("%d", &d);

	result = a + b + c + d;
	printf("%d + %d + %d + %d = %d \n", a, b, c, d, result);

}