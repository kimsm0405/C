#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void main()
//{
//	int a;
//	float b;
//	char ch;
//	char s[20];
//
//	printf("정수를 입력 : ");
//	scanf("%d", &a);
//	printf("실수를 입력 : ");
//	scanf("%f", &b);
//	printf("문자를 입력 : ");
//	scanf("%c", &ch);
//	printf("문자열을 입력 : ");
//	scanf("%s", s);
//
//	printf("\n정수의 10진수 ==> %d\n", a);
//	printf("정수의 16진수 ==> %X\n", a);
//	printf("정수의 8진수 ==> %o\n", a);
//	printf("실수 ==> %10.3f\n", b);
//	printf("실수(공학용) ==> %e\n", b);
//	printf("문자 ==> %c\n", ch);
//	printf("문자열 ==> %s\n", s);
//}

//void main()
//{
//	char s[20];
//
//	printf("문자열을 입려 : ");
//	gets(s);
//
//	puts(s);
//}

//void main()
//{
//	char password[5] = "5678";
//	char input[5];
//	int i;
//
//	printf("비밀번호 4글자를 입력하세요 : ");
//	for (i = 0; i < 4; i++)
//		input[i] = getch();
//
//	if (strncmp(password, input, 4) == 0)
//	{
//		printf("\n비밀번호 통과~~\n");
//	}
//	else
//	{
//		printf("\n입력한 비밀번호 ");
//
//		for (i = 0; i < 4; i++)
//			putch(input[i]);
//
//		printf(" 가 틀렸음\n");
//	}
//}

//void main()
//{	// 변수 선언
//	char s[20];
//	FILE* rfp;
//
//	// 파일 오픈
//	rfp = fopen("c:\\temp\\data1.txt", "r");
//
//	// 파일 사용
//	fgets(s, 20, rfp);
//
//	printf("파일에서 읽은 문자열 : ");
//	puts(s);
//
//	// 파일 닫기
//	fclose(rfp);
//}

//void main()
//{
//	char str[200];
//	FILE* rfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//
//	for (;;)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		printf("%s", str);
//	}
//
//	fclose(rfp);
//}

//void main()
//{
//	FILE* rfp;
//	int hap = 0;
//	int in, i;
//
//	rfp = fopen("c:\\temp\\data2.txt", "r");
//
//	for (i = 0; i < 5; i++)
//	{
//		fscanf(rfp, "%d", &in);
//		hap = hap + in;
//	}
//
//	printf("합계 ==> %d\n", hap);
//
//	fclose(rfp);
//}

//void main()
//{
//	char s[20];
//	FILE* wfp;
//
//	wfp = fopen("c:\\temp\\data3.txt", "w");
//
//	printf("문자열을 입력(최대 19자) : ");
//	gets(s);
//
//	fputs(s, wfp);
//
//	fclose(wfp);
//}

//void main()
//{
//	char str[200];
//	FILE* rfp;
//	FILE* wfp;
//
//	rfp = fopen("c:\\windows\\win.ini", "r");
//	wfp = fopen("c:\\temp\\data5.txt", "w");
//
//	for (;;)
//	{
//		fgets(str, 200, rfp);
//
//		if (feof(rfp))
//			break;
//
//		fputs(str, wfp);
//	}
//
//	fclose(rfp);
//	fclose(wfp);
//}

//void main()
//{
//	FILE* wfp;
//	int hap = 0;
//	int in, i;
//
//	wfp = fopen("c:\\temp\\data7.txt", "w");
//
//	for (i = 0; i < 5; i++)
//	{
//		printf(" 숫자 %d : ", i + 1);
//		scanf("%d", &in);
//		hap = hap + in;
//	}
//
//	fprintf(wfp, "합계 ==> : %d\n", hap);
//
//	fclose(wfp);
//}

//void main()
//{
//	FILE* wfp;
//	int multiple;
//
//	wfp = fopen("c:\\temp\\gugu.txt", "w");
//	for (i = 2; i < 10; i++)
//
//	
//	
//}

