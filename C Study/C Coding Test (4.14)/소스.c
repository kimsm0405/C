#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int main() // ����1 : �Ҽ� ���ϱ�
//{ 
//    int i, n;
//
//    printf("�ڿ����� �Է��ϼ���: ");
//    scanf_s("%d", &n);
//
//    if (n < 2) {
//        printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
//        return 0;
//    }
//
//    for (i = 2; i < n; i++) {
//        if (n % i == 0) {
//            printf("%d�� �Ҽ��� �ƴմϴ�.\n", n);
//            return 0; 
//        }
//    }
//
//    printf("%d�� �Ҽ��Դϴ�.\n", n);
//    return 0;
//}

//int main() // ����2 : �ű��� �Ҽ� ã��
//{
//	int i, n;
//
//	printf("���ڸ� �Է��ϼ���: ");
//	scanf_s("%d", &n);
//
//	
//
//}

//int main() // ����3 : �Ҽ� ���ϱ� 3 (�����佺�׳׽��� ü)
//{
//    int i, n;
//
//    printf("�ڿ����� �Է��ϼ���: ");
//    scanf_s("%d", &n);
//
//    if (n < 2) {
//        printf("%d�� false�̸�, �Ҽ��� �ƴմϴ�.\n", n);
//        return 0;
//    }
//
//    for (i = 2; i < n; i++) {
//        if (n % i == 0) {
//            printf("%d�� false�̸�, �Ҽ��� �ƴմϴ�.\n", n);
//            return 0;
//        }
//    }
//
//    printf("%d�� true�̸�, �Ҽ��Դϴ�.\n", n);
//    return 0;
//} 

//int main() // ����4 : ū ���� ��Ģ
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
//	printf("ū ���� ��Ģ! \n");
//	printf("�־��� ������ �� �� ������ �Է��ϼ���. ");
//	scanf_s("%d", &M);
//
//	printf("�����ؼ� �� ������ ���� �� �ֳ���? ");
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
//	printf("���� ū �� : %d, �� ��° ū �� : %d", first, second);
//	printf("\nū ���� ��Ģ ���: %d\n", result);
//
//}


//#include <stdlib.h>
//#include <time.h>
//
//int main() // ����4 : ū ���� ��Ģ
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
//    srand(time(NULL)); // ���� �ʱ�ȭ
//
//    printf("ū ���� ��Ģ! \n");
//    printf("�־��� ������ �� �� ������ �Է��ϼ���. ");
//    scanf_s("%d", &M);
//
//    printf("�����ؼ� �� ������ ���� �� �ֳ���? ");
//    scanf_s("%d", &K);
//
//    // ���� ���� ����
//    for (i = 0; i < 5; i++) {
//        num[i] = (rand() % 9 + 1);
//    }
//
//    // ���� �迭 ���
//    printf("���� �迭: ");
//    for (i = 0; i < 5; i++) {
//        printf("%d ", num[i]);
//    }
//    printf("\n");
//
//    // ���� ū ���� �� ��° ū �� ã��
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
//    // ū ���� ��Ģ ����
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
//    // ��� ���
//    printf("���� ū �� : %d, �� ��° ū �� : %d\n", first, second);
//    printf("ū ���� ��Ģ ���: %d\n", result);
//
//    return 0;
//}




//int main() // ����5 : 1�� �� ������
//{
//	int N;
//	int K;
//	int count = 0;
//
//	printf("�ڿ��� N�� �Է��ϼ���. �ش� ���ڰ� 1�� �� ������ ������ �����մϴ�. ");
//	scanf_s("%d", &N);
//	printf("�ش� ���ڰ� ���� ���� K ������ ���� �� �ְ� �ȴٸ�, ������(K) �����ðڽ��ϱ�? ");
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
//	printf("\n���ڰ� ���������� %d�� �Ǿ�, ������ �����մϴ�.\n", N);
//	printf("1�� �� ������ ������ ������ Ƚ���� %d���Դϴ�.\n", count);
//}


//#include <math.h>
//
//// �Ҽ����� Ȯ���ϴ� �Լ�
//int isPrime(int num) {
//    if (num < 2) return 0;
//    for (int i = 2; i <= sqrt(num); i++) {
//        if (num % i == 0) return 0;
//    }
//    return 1;
//}
//
//// ��������� �ű��� �Ҽ��� Ž���ϴ� �Լ�
//void findAmazingPrimes(int current, int digits, int n) {
//    if (digits == n) { // ���ϴ� �ڸ����� ������ ���
//        printf("%d\n", current);
//        return;
//    }
//    for (int i = 1; i <= 9; i += 2) { // ¦���� ������ ���ڴ� �Ҽ��� �� �� ���� (2 ����)
//        int next = current * 10 + i;
//        if (isPrime(next)) { // ���� ���ڰ� �Ҽ����� Ȯ��
//            findAmazingPrimes(next, digits + 1, n);
//        }
//    }
//}
//
//int main() {
//    int n;
//    printf("�ڸ����� �Է��ϼ���: ");
//    scanf("%d", &n);
//
//    // �� �ڸ� �Ҽ����� ����
//    int firstPrimes[] = { 2, 3, 5, 7 };
//    for (int i = 0; i < 4; i++) {
//        findAmazingPrimes(firstPrimes[i], 1, n);
//    }
//
//    return 0;
//}

