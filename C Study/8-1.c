#define _CRT_SECURE_NO_WARNINGS
#include <string.h>
#include <stdio.h>

//void main()
//{
//	int a, b, c, d;
//	int hap;
//
//	printf("1��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &a);
//	printf("2��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &b);
//	printf("3��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &c);
//	printf("4��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &d);
//
//	hap = a + b + c + d;
//
//	printf(" �հ� ==> %d \n", hap);
//}

//void main()
//{
//	int aa[4];
//	int hap;
//
//	printf("1��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[0]);
//	printf("2��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[1]);
//	printf("3��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[2]);
//	printf("4��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", &aa[3]);
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" �հ� ==> %d \n", hap);
//}

//void main()  // �ٸ� ���
//{ 
//	int aa[4];
//	int i, hap=0;
//
//	printf("1��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", aa+0);
//	printf("2��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", aa+1);
//	printf("3��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", aa+2);
//	printf("4��° ���ڸ� �Է��ϼ��� : ");
//	scanf("%d", aa+3);
//
//	for (i = 0; i < 4; i++) {
//		hap += aa[i];
//	}
//
//	//hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" �հ� ==> %d \n", hap);
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
//		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" �հ� ==> %d \n", hap);
//}

//void main()  // �ٸ� ���
//{
//	int aa[4];
//	int i, hap = 0;
//
//	for (i = 0; i < 4; i++)
//	{
//		printf("%d��° ���ڸ� �Է��ϼ��� : ", i + 1);
//		scanf("%d", aa+i);
//		hap += *(aa + i);
//	}
//
//	// hap = aa[0] + aa[1] + aa[2] + aa[3];
//
//	printf(" �հ� ==> %d \n", hap);
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
//	printf("�迭 aa[]�� ����� ������ %d �Դϴ�.\n", count);
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
//	printf("���ڿ� �迭 ss ==> %s \n", ss);
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
//	printf("�Ųٷ� ����� ���==> %s \n", tt);
//}

//void main()
//{
//	char ss[] = "XYZ";
//	int len;
//
//	len = strlen(ss);
//
//	printf("���ڿ� \"%s\"�� ���� ==> %d \n", ss, len);
//}

//void main()
//{
//	char ss[4];
//
//	strcpy(ss, "XYZ");
//
//	printf("���ڿ� ss�� ���� ==> %s \n", ss);
//}

//void main()
//{
//	char ss[7] = "XYZ";
//
//	strcat(ss, "ABC");
//
//	printf("�̾��� ���ڿ� ss�� ���� ==> %s \n", ss);
//}

//void main()
//{
//	char ss[20];
//	char tt[20];
//	int r1, r2;
//
//	puts("ù ��° ���ڿ��� �Է��ϼ���.");
//	gets(ss);
//
//	puts("�� ��° ���ڿ��� �Է��ϼ���.");
//	gets(tt);
//
//	r1 = strlen(ss);
//	r2 = strlen(tt);
//
//	printf("ù ��° ���ڿ��� ���� ==> %d \n", r1);
//	printf("�� ��° ���ڿ��� ���� ==> %d \n", r2);
//
//	if (strcmp(ss, tt) == 0)
//		puts("�� ���ڿ��� ������ �����ϴ�.\n");
//	else
//		puts("�� ���ڿ��� ������ �ٸ��ϴ�.\n");
//}

//void main()
//{
//	int aa[3][4];
//
//	aa[0][0] = 1; aa[0][1] = 2; aa[0][2] = 3; aa[0][3] = 4;
//	aa[1][0] = 5; aa[1][1] = 6; aa[1][2] = 7; aa[1][3] = 8;
//	aa[2][0] = 9; aa[2][1] = 10; aa[2][2] = 11; aa[2][3] = 12;
//
//	printf("aa[0][0]���� aa[2][3]���� ��� \n");
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
//	printf("aa[0][0]���� aa[2][3]���� ��� \n");
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
//	printf("aa[0][0]���� aa[2][3]���� ��� \n");
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
//	printf("���� �Է� : ");
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
//	printf("��ȯ�� ���� ==> ");
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0')
//			break;
//		printf("%c", aa[i]);
//	}
//	return 0;
//} // scanf�� Ű����� �Է��ϴ� ��� ��(�����̽� Ű ����)�� '����'�� �Է��ϹǷ� �����߻�

//int main() { // gets �Լ� ����ϴ� ��� (copilot)
//	char aa[100];
//	int i;
//
//	printf("���� �Է� : ");
//	fgets(aa, sizeof(aa), stdin);  // ���� ���� ��ü ������ �Է� ����
//
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0' || aa[i] == '\n') {  // '\n' ó�� �߰�
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
//	printf("��ȯ�� ���� ==> ");
//	for (i = 0; i < 100; i++) {
//		if (aa[i] == '\0' || aa[i] == '\n')  // '\n' ó�� �߰�
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
//	printf("���� ���ڸ� �Է� : ");
//	gets(aa);
//
//	len = strlen(aa);
//
//	printf("���� ���ڿ� ���ο� ���� : ");
//	scanf("%c %c", &in, &out);
//
//	for (i = 0; i < len; i++) {
//		if (aa[i] == in)
//			aa[i] = out;
//	}
//
//	printf("��ȯ�� ��� ==> %s", aa);
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