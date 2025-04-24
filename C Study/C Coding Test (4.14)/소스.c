#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() // 문제1 : 소수 구하기
//{ 
//    int i, n;
//
//    printf("자연수를 입력하세요: ");
//    scanf_s("%d", &n);
//
//    if (n < 2) {
//        printf("%d는 소수가 아닙니다.\n", n);
//        return 0;
//    }
//
//    for (i = 2; i < n; i++) {
//        if (n % i == 0) {
//            printf("%d는 소수가 아닙니다.\n", n);
//            return 0; 
//        }
//    }
//
//    printf("%d는 소수입니다.\n", n);
//    return 0;
//}

//int main() // 문제2 : 신기한 소수 찾기
//{
//	int i, n;
//
//	printf("숫자를 입력하세요: ");
//	scanf_s("%d", &n);
//
//	
//
//}

//int main() // 문제3 : 소수 구하기 3 (에라토스테네스의 체)
//{
//    int i, n;
//
//    printf("자연수를 입력하세요: ");
//    scanf_s("%d", &n);
//
//    if (n < 2) {
//        printf("%d는 false이며, 소수가 아닙니다.\n", n);
//        return 0;
//    }
//
//    for (i = 2; i < n; i++) {
//        if (n % i == 0) {
//            printf("%d는 false이며, 소수가 아닙니다.\n", n);
//            return 0;
//        }
//    }
//
//    printf("%d는 true이며, 소수입니다.\n", n);
//    return 0;
//} 

//int main() // 문제4 : 큰 수의 법칙
//{
//	int M;
//	int K;
//	int i;
//	int num[10];
//	int first = 0;
//	int second = 0;
//	int result = 0;
//	int count = 0;
//
//	srand(3);
//
//	printf("큰 수의 법칙! \n");
//	printf("주어진 수들을 몇 번 더할지 입력하세요. ");
//	scanf_s("%d", &M);
//
//	printf("연속해서 몇 번까지 더할 수 있나요? ");
//	scanf_s("%d", &K);
//
//	for (i = 0; i < 5; i++)
//	{
//		num[i] = (rand() % 9 + 1);
//	}
//
//	for (i = 0; i < 5; i++) 
//	{
//		if (num[i] > first)
//		{
//			second = first;
//			first = num[i];
//		}
//		else if (num[i] > second)
//		{
//			second = num[i];
//		}
//	}
//
//	for (i = 0; i < M; i++) 
//	{
//		if (count < K)
//		{
//			result += first;
//			count++;
//		}
//		else
//		{
//			result += second;
//			count = 0;
//		}
//	}
//
//	printf("가장 큰 수 : %d, 두 번째 큰 수 : %d", first, second);
//	printf("\n큰 수의 법칙 결과: %d\n", result);
//
//}


//#include <stdlib.h>
//#include <time.h>
//
//int main() // 문제4 : 큰 수의 법칙
//{
//    int M;
//    int K;
//    int i;
//    int num[5];
//    int first = 0;
//    int second = 0;
//    int result = 0;
//    int count = 0;
//
//    srand(time(NULL)); // 랜덤 초기화
//
//    printf("큰 수의 법칙! \n");
//    printf("주어진 수들을 몇 번 더할지 입력하세요. ");
//    scanf_s("%d", &M);
//
//    printf("연속해서 몇 번까지 더할 수 있나요? ");
//    scanf_s("%d", &K);
//
//    // 랜덤 숫자 생성
//    for (i = 0; i < 5; i++) {
//        num[i] = (rand() % 9 + 1);
//    }
//
//    // 랜덤 배열 출력
//    printf("랜덤 배열: ");
//    for (i = 0; i < 5; i++) {
//        printf("%d ", num[i]);
//    }
//    printf("\n");
//
//    // 가장 큰 수와 두 번째 큰 수 찾기
//    for (i = 0; i < 5; i++) {
//        if (num[i] > first) {
//            second = first;
//            first = num[i];
//        }
//        else if (num[i] > second) {
//            second = num[i];
//        }
//    }
//
//    // 큰 수의 법칙 구현
//    for (i = 0; i < M; i++) {
//        if (count < K) {
//            result += first;
//            count++;
//        }
//        else {
//            result += second;
//            count = 0;
//        }
//    }
//
//    // 결과 출력
//    printf("가장 큰 수 : %d, 두 번째 큰 수 : %d\n", first, second);
//    printf("큰 수의 법칙 결과: %d\n", result);
//
//    return 0;
//}




//int main() // 문제5 : 1이 될 때까지
//{
//	int N;
//	int K;
//	int count = 0;
//
//	printf("자연수 N을 입력하세요. 해당 숫자가 1이 될 때까지 연산을 수행합니다. ");
//	scanf_s("%d", &N);
//	printf("해당 숫자가 연산 도중 K 값으로 나눌 수 있게 된다면, 몇으로(K) 나누시겠습니까? ");
//	scanf_s("%d", &K);
//
//	while (N > 1)
//	{
//		if (N % K == 0) {
//			N = N / K;
//		}
//			
//		else {
//			N = N - 1;
//		}
//		count++;
//		printf("%d \n", N);
//	}
//	printf("\n숫자가 최종적으로 %d이 되어, 연산을 종료합니다.\n", N);
//	printf("1이 될 때까지 수행한 연산의 횟수는 %d번입니다.\n", count);
//}


//#include <math.h>
//
//// 소수인지 확인하는 함수
//int isPrime(int num) {
//    if (num < 2) return 0;
//    for (int i = 2; i <= sqrt(num); i++) {
//        if (num % i == 0) return 0;
//    }
//    return 1;
//}
//
//// 재귀적으로 신기한 소수를 탐색하는 함수
//void findAmazingPrimes(int current, int digits, int n) {
//    if (digits == n) { // 원하는 자리수에 도달한 경우
//        printf("%d\n", current);
//        return;
//    }
//    for (int i = 1; i <= 9; i += 2) { // 짝수로 끝나는 숫자는 소수가 될 수 없음 (2 제외)
//        int next = current * 10 + i;
//        if (isPrime(next)) { // 현재 숫자가 소수인지 확인
//            findAmazingPrimes(next, digits + 1, n);
//        }
//    }
//}
//
//int main() {
//    int n;
//    printf("자리수를 입력하세요: ");
//    scanf("%d", &n);
//
//    // 한 자리 소수부터 시작
//    int firstPrimes[] = { 2, 3, 5, 7 };
//    for (int i = 0; i < 4; i++) {
//        findAmazingPrimes(firstPrimes[i], 1, n);
//    }
//
//    return 0;
//}

