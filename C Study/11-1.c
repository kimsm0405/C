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
//	printf("������ �Է� : ");
//	scanf("%d", &a);
//	printf("�Ǽ��� �Է� : ");
//	scanf("%f", &b);
//	printf("���ڸ� �Է� : ");
//	scanf("%c", &ch);
//	printf("���ڿ��� �Է� : ");
//	scanf("%s", s);
//
//	printf("\n������ 10���� ==> %d\n", a);
//	printf("������ 16���� ==> %X\n", a);
//	printf("������ 8���� ==> %o\n", a);
//	printf("�Ǽ� ==> %10.3f\n", b);
//	printf("�Ǽ�(���п�) ==> %e\n", b);
//	printf("���� ==> %c\n", ch);
//	printf("���ڿ� ==> %s\n", s);
//}

//void main()
//{
//	char s[20];
//
//	printf("���ڿ��� �Է� : ");
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
//	printf("��й�ȣ 4���ڸ� �Է��ϼ��� : ");
//	for (i = 0; i < 4; i++)
//		input[i] = getch();
//
//	if (strncmp(password, input, 4) == 0)
//	{
//		printf("\n��й�ȣ ���~~\n");
//	}
//	else
//	{
//		printf("\n�Է��� ��й�ȣ ");
//
//		for (i = 0; i < 4; i++)
//			putch(input[i]);
//
//		printf(" �� Ʋ����\n");
//	}
//}

//void main()
//{	// ���� ����
//	char s[20];
//	FILE* rfp;
//
//	// ���� ����
//	rfp = fopen("c:\\temp\\data1.txt", "r");
//
//	// ���� ���
//	fgets(s, 20, rfp);
//
//	printf("���Ͽ��� ���� ���ڿ� : ");
//	puts(s);
//
//	// ���� �ݱ�
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
//	printf("�հ� ==> %d\n", hap);
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
//	printf("���ڿ��� �Է�(�ִ� 19��) : ");
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
//		printf(" ���� %d : ", i + 1);
//		scanf("%d", &in);
//		hap = hap + in;
//	}
//
//	fprintf(wfp, "�հ� ==> : %d\n", hap);
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

