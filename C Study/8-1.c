#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1번째 숫자를 입력하세요 : ");
//	scanf("%d", &a);
//	printf("2번째 숫자를 입력하세요 : ");
//	scanf("%d", &b);
//	printf("3번째 숫자를 입력하세요 : ");
//	scanf("%d", &c);
//	printf("4번째 숫자를 입력하세요 : ");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf(" 합계 ==> %d \n", hap);
//}

//void main()
//{
//	int aa[4];
//	int hap;
//
//	printf("1번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[0]);
//	printf("2번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[1]);
//	printf("3번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[2]);
//	printf("4번째 숫자를 입력하세요 : ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계 ==> %d \n", hap);
//}

//void main()  // 다른 방법
//{ 
//	int aa[4];
//	int i, hap=0;
//
//	printf("1번째 숫자를 입력하세요 : ");
//	scanf("%d", aa+0);
//	printf("2번째 숫자를 입력하세요 : ");
//	scanf("%d", aa+1);
//	printf("3번째 숫자를 입력하세요 : ");
//	scanf("%d", aa+2);
//	printf("4번째 숫자를 입력하세요 : ");
//	scanf("%d", aa+3);
//
//	for (i = 0; i < 4; i++) {
//		hap += aa[i];
//	}
//
//	//hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계 ==> %d \n", hap);
//
//	return 0;
//}

//void main()
//{
//	int aa[4];
//	int hap = 0;
//	int i;
//
//	for (i = 0; i <= 3; i++) 
//	{
//		printf("%d번째 숫자를 입력하세요 : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계 ==> %d \n", hap);
//}

//void main()  // 다른 방법
//{
//	int aa[4];
//	int i, hap = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d번째 숫자를 입력하세요 : ", i + 1);
//		scanf("%d", aa+i);
//		hap += *(aa + i);
//	}
//
//	// hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" 합계 ==> %d \n", hap);
//
//	return 0;
//}

//void main()
//{
//	int aa[4] = { 100, 200, 300, 400 };
//	int bb[] = { 100, 200, 300, 400 };
//	int cc[4] = { 100, 200 };
//	int dd[4] = { 0 };
//	int i;
//
//	for (i = 0; i <= 3; i++)
//		printf("aa[%d]==>%d\t", i, aa[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("bb[%d]==>%d\t", i, bb[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("cc[%d]==>%d\t", i, cc[i]);
//	printf("\n");
//
//	for (i = 0; i <= 3; i++)
//		printf("dd[%d]==>%d\t", i, dd[i]);
//	printf("\n");
//}

//void main()
//{
//	int aa[100], bb[100];
//	int i, j;
//
//	for (i = 0; i < 100; i++) {
//		aa[i] = i * 2;
//		printf("aa[%d] = %d  ", i, aa[i]);
//	}
//	for (i = 99, j = 0; i >= 0; i--, j++) {
//		bb[j] = aa[i];
//		printf("aa[%d] = %d  ", i, bb[j]);
//	}
//}

//void main()
//{
//	int aa[] = { 10, 20, 30, 40, 50 };
//	int count;
//
//	count = sizeof(aa) / sizeof(int);
//
//	printf("배열 aa[]의 요소의 개수는 %d 입니다.\n", count);
//}

//void main()
//{
//	char ss[8] = "Basic-C";
//	int i;
//
//	ss[5] = '#';
//
//	for (i = 0; i < 8; i++)
//	{
//		printf("ss[%d] ==> %c \n", i, ss[i]);
//	}
//
//	printf("문자열 배열 ss ==> %s \n", ss);
//}

//void main()
//{
//	char ss[5] = "abcd";
//	char tt[5];
//	int i;
//
//	for (i = 0; i < 4; i++)
//	{
//		tt[i] = ss[3-i] ;
//	}
//	tt[4] = '\0';
//
//	printf("거꾸로 출력한 결과==> %s \n", tt);
//}

//void main()
//{
//	char ss[] = "XYZ";
//	int len;
//
//	len = strlen(ss);
//
//	printf("문자열 \"%s\"의 길이 ==> %d \n", ss, len);
//}

//void main()
//{
//	char ss[4];
//
//	strcpy(ss, "XYZ");
//
//	printf("문자열 ss의 내용 ==> %s \n", ss);
//}

//void main()
//{
//	char ss[7] = "XYZ";
//
//	strcat(ss, "ABC");
//
//	printf("이어진 문자열 ss의 내용 ==> %s \n", ss);
//}

//void main()
//{
//	char ss[20];
//	char tt[20];
//	int r1, r2;
//
//	puts("첫 번째 문자열을 입력하세요.");
//	gets(ss);
//
//	puts("두 번째 문자열을 입력하세요.");
//	gets(tt);
//
//	r1 = strlen(ss);
//	r2 = strlen(tt);
//
//	printf("첫 번째 문자열의 길이 ==> %d \n", r1);
//	printf("두 번째 문자열의 길이 ==> %d \n", r2);
//
//	if (strcmp(ss, tt) == 0)
//		puts("두 문자열의 내용이 같습니다.\n");
//	else
//		puts("두 문자열의 내용이 다릅니다.\n");
//}

//void main()
//{
//	int aa[3][4];
//
//	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
//	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
//	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;
//
//	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
//
//	printf("%3d %3d %3d %3d\n", aa[0][0], aa[0][1], aa[0][2], aa[0][3]);
//	printf("%3d %3d %3d %3d\n", aa[1][0], aa[1][1], aa[1][2], aa[1][3]);
//	printf("%3d %3d %3d %3d\n", aa[2][0], aa[2][1], aa[2][2], aa[2][3]);
//}

//void main()
//{
//	int aa[3][4];
//	int i, k;
//
//	int val = 1;
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			aa[i][k] = val;
//			val++;
//		}
//	}
//
//	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
//
//	for (i = 0; i < 3; i++)
//	{
//		for (k = 0; k < 4; k++)
//		{
//			printf("%3d ", aa[i][k]);
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	int aa[3][4] = {
//		{1, 2, 3, 4},
//		{5, 6, 7, 8},
//		{9, 10, 11, 12}
//	};
//
//	int i, k;
//	printf("aa[0][0]부터 aa[2][3]까지 출력 \n");
//
//	for (i = 0;i < 3;i++)
//	{
//		for (k = 0;k < 4;k++)
//		{
//			printf("%3d", aa[i][k]);
//		}
//		printf("\n");
//	}
//}

//void main()
//{
//	char aa[100];
//	int i;
//
//	printf("문자 입력 : ");
//	scanf("%s", aa);
//
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0') {
//			break;
//		}
//		else {
//			if (aa[i] >= 65 && aa[i] <= 90)
//				aa[i] = aa[i] + 32;
//			else if (aa[i] >= 97 && aa[i] <= 122)
//				aa[i] = aa[i] - 32;
//			else
//				aa[i] = aa[i];
//		}
//	}
//	printf("변환된 문자 ==> ");
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0')
//			break;
//		printf("%c", aa[i]);
//	}
//	return 0;
//} // scanf는 키보드로 입력하는 모든 값(스페이스 키 포함)을 '문자'로 입력하므로 오류발생

//int main() { // gets 함수 사용하는 방법 (copilot)
//	char aa[100];
//	int i;
//
//	printf("문자 입력 : ");
//	fgets(aa, sizeof(aa), stdin);  // 공백 포함 전체 문장을 입력 받음
//
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0' || aa[i] == '\n') {  // '\n' 처리 추가
//			break;
//		}
//		else {
//			if (aa[i] >= 65 && aa[i] <= 90)
//				aa[i] = aa[i] + 32;
//			else if (aa[i] >= 97 && aa[i] <= 122)
//				aa[i] = aa[i] - 32;
//			else
//				aa[i] = aa[i];
//		}
//	}
//
//	printf("변환된 문자 ==> ");
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0' || aa[i] == '\n')  // '\n' 처리 추가
//			break;
//		printf("%c", aa[i]);
//	}
//
//	return 0;
//}

//void main()
//{
//	int aa[9][9];
//	int i, j;
//
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			aa[i - 1][j - 1] = i * j;
//		}
//	}
//
//	for (i = 1; i <= 9; i++) {
//		for (j = 1; j <= 9; j++) {
//			printf("%d X %d = %d \t", i, j, aa[i - 1][j - 1]);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}

//void main()
//{
//	char aa[100];
//	char in, out;
//	int i, len;
//
//	printf("여러 글자를 입력 : ");
//	gets(aa);
//
//	len = strlen(aa);
//
//	printf("기존 문자와 새로운 문자 : ");
//	scanf("%c %c", &in, &out);
//
//	for (i = 0; i < len; i++) {
//		if (aa[i] == in)
//			aa[i] = out;
//	}
//
//	printf("변환된 결과 ==> %s", aa);
//
//	return 0;
//}

//void main()
//{
//	int i, j;
//
//	for (j = 0; j < 10; j++) {
//		for (i = 0; i < j+1; i++) {
//			if (i == 0 || j == 9 || i == j)
//				printf("*");
//			else
//				printf(" ");
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}

void main()
{
	int i, j;

	for (j = 10; j > 0; j++) {
		for (i = 0; i < j+1; i++) {
			if (i == 9 || j == 0 || i == j)
				printf("*");
			else
				printf(" ");
		}
		printf("\n");
	}

	return 0;
}