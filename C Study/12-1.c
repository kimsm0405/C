#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <malloc.h>
#include <string.h>

//void main()
//{
//	int aa[3];
//	int* p;
//	int i, hap = 0;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	p = aa;
//
//	for (i = 0; i < 3; i++)
//		hap = hap + *(p + i);
//
//	printf("�Է� ������ ��=> %d\n", hap);
//}

//void main()
//{
//	int aa[10000];
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������ ? ");
//	scanf("%d", &cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%d", &aa[i]);
//	}
//
//	p = aa;
//
//	for (i = 0; i < cnt; i++)
//		hap = hap + *(p + i);
//
//	printf("�Է� ������ �� ==> %d\n", hap);
//}

//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������ ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%d", &p[i]);
//	}
//
//	for (i = 0; i < cnt; i++)
//		hap = hap + *(p + i);
//
//	printf("�Է� ���� �� ==> %d\n", hap);
//
//	free(p);
//}

//void main()
//{
//	int* p, * s;
//	int i, j;
//
//	printf("malloc() �Լ� ���\n");
//	p = (int*)malloc(sizeof(int) * 3);
//
//	for (i = 0; i < 3; i++)
//		printf("�Ҵ�� ���� �ʱ갪 p[%d] ==> %d\n", i, p[i]);
//
//	free(p);
//
//	printf("\ncalloc() �Լ� ���\n");
//	s = (int*)calloc(sizeof(int), 3);
//
//	for (j = 0;j < 3;j++)
//		printf("�Ҵ�� ���� �ʱ갪 s[%d] ==> %d\n", j, s[j]);
//
//	free(s);
//}

//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt = 0;
//	int data;
//
//	p = (int*)malloc(sizeof(int) * 1);
//	printf(" 1 ��° ���� : ");
//	scanf("%d", &p[0]);
//	cnt++;
//
//	for (i = 2; ; i++)
//	{
//		printf(" %d ��° ���� : ", i);
//		scanf("%d", &data);
//
//		if (data != 0)
//			p = (int*)realloc(p, sizeof(int) * i);
//		else
//			break;
//
//		p[i - 1] = data;
//		cnt++;
//	}
//
//	for (i = 0;i < cnt;i++)
//		hap = hap + p[i];
//
//	printf("�Է� ���� �� ==> %d\n", hap);
//
//	free(p);
//}

//void main()
//{
//	char data[3][100];
//	int i;
//
//	for (i = 0;i < 3;i++)
//	{
//		printf(" %d ��° ���ڿ� : ", i + 1);
//		gets(data[i]);
//	}
//
//	printf("\n -- �Է°� �ݴ�� ���(������ �迭) --\n");
//	for (i = 2; i >= 0; i--)
//	{
//		printf(" %d :%s\n", i + 1, data[i]);
//	}
//}

//void main()
//{
//	char* p[3];
//	char imsi[100];
//	int i, size;
//
//	for (i = 0; i < 3; i++)
//	{
//		printf(" %d ��° ���ڿ� : ", i + 1);
//		gets(imsi);
//
//		size = strlen(imsi);
//		p[i] = (char*)malloc((sizeof(char) * size) + 1);
//
//		strcpy(p[i], imsi);
//	}
//
//	printf("\n -- �Է°� �ݴ�� ���(������) --\n");
//	for (i = 2; i >= 0; i--)
//	{
//		printf(" %d :%s\n", i + 1, p[i]);
//	}
//
//	for (i = 0; i < 3; i++)
//		free(p[i]);
//}

//void main()
//{
//	int* p;
//	int i, hap = 0;
//	int cnt;
//
//	printf(" �Է��� ������ ? ");
//	scanf("%d", &cnt);
//
//	p = (int*)malloc(sizeof(int) * cnt);
//
//	for (i = 0; i < cnt; i++)
//	{
//		printf(" %d ��° ���� : ", i + 1);
//		scanf("%d", &p[i]);
//	}
//
//	for (i = 0; i < cnt; i++)
//	{
//		if (p[i] % 2 == 0)
//			hap = hap + *(p + i);
//	}
//
//	printf("�Է��� ¦���� ==> %d\n", hap);
//
//	free(p);
//}

//int main() // #���ù���
//{
//	int a = 3;
//	int* b = &a;
//	int** c = &b;
//	int*** d = &c;
//
//	printf("a�� ����� �� ==> %d\n", a);
//	printf("b�� ����� �� ==> %d\n", b);
//	printf("c�� ����� �� ==> %d\n", c);
//	printf("d�� ����� �� ==> %d\n", d);
//
//	printf("b�� ����Ű�� �� ==> %d\n", *b);
//	printf("c�� ����Ű�� �� ==> %d\n", *c);
//	printf("c�� ����Ű�� �� ==> %d\n", **c);
//	printf("d�� ����Ű�� �� ==> %d\n", **d);
//	printf("d�� ���������� ����Ű�� �� ==> %d\n", ***d);
//
//	return 0;
//}

void main()
{
	char* p[3];
	char imsi[100];
	int i, j, size;

	for (i = 0; i < 3; i++)
	{
		printf(" %d ��° ���ڿ� : ", i + 1);
		gets(imsi);

		size = strlen(imsi);
		p[i] = (char*)malloc((sizeof(char) * size) + 1);

		strcpy(p[i], imsi);
	}

	printf("\n -- �Է°� �ݴ�� ���(������) --\n");
	for (i = 2; i >= 0; i--)
	{
		size = strlen(p[i]);
		imsi[size] = '\0';
		for (j = size - 1; j >= 0;j--)
			imsi[size - 1 - j] = p[i][j];

		printf(" %d :%s\n", i + 1, imsi);
	}

	for (i = 0; i < 3; i++)
		free(p[i]);
}

