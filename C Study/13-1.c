#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//void main()
//{
//	struct bibim {
//		int a;
//		float b;
//		char c;
//		char d[5];
//	};
//
//	struct bibim b1;
//
//	b1.a = 10;
//	b1.b = 1.1f;
//	b1.c = 'A';
//	strcpy(b1.d, "ABCD");
//
//	printf(" b1.a ==> %d \n", b1.a);
//	printf(" b1.b ==> %f \n", b1.b);
//	printf(" b1.c ==> %c \n", b1.c);
//	printf(" b1.d ==> %s \n", b1.d);
//}

//void main()
//{
//	char name[10];
//	int kor;
//	int eng;
//	float avg;
//
//	printf("�̸� : ");
//	scanf("%s", name, 9);
//
//	printf("���� ���� : ");
//	scanf("%d", &kor);
//
//	printf("���� ���� : ");
//	scanf("%d", &eng);
//
//	avg = (kor + eng) / 2.0f;
//
//	printf("\n");
//	printf("�л� �̸� ==> %s\n", name);
//	printf("���� ����  ==> %d\n", kor);
//	printf("���� ����  ==> %d\n", eng);
//	printf("��� ����  ==> %5.1f\n", avg);
//}

//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//	
//	struct students s;
//
//	printf("�̸� : ");
//	scanf("%s", s.name, 9);
//
//	printf("���� ���� : ");
//	scanf("%d", &s.kor);
//
//	printf("���� ���� : ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n--- ����ü Ȱ�� ---\n");
//	printf("�л� �̸� ==> %s\n", s.name);
//	printf("���� ����  ==> %d\n", s.kor);
//	printf("���� ����  ==> %d\n", s.eng);
//	printf("��� ����  ==> %5.1f\n", s.avg);
//}

//void main()
//{
//	char name[3][10];
//	int kor[3];
//	int eng[3];
//	float avg[3];
//
//	int i;
//
//	strcpy(name[0], "Kim");
//	kor[0] = 90;
//	eng[0] = 80;
//	avg[0] = (kor[0] + eng[0]) / 2.0f;
//
//	strcpy(name[1], "Lee");
//	kor[1] = 70;
//	eng[1] = 60;
//	avg[1] = (kor[1] + eng[1]) / 2.0f;
//
//	strcpy(name[2], "Park");
//	kor[2] = 50;
//	eng[2] = 40;
//	avg[2] = (kor[2] + eng[2]) / 2.0f;
//
//	for (i = 0;i < 3;i++)
//	{
//		printf("�л� �̸� ==> %s\n", name[i]);
//		printf("���� ����  ==> %d\n", kor[i]);
//		printf("���� ����  ==> %d\n", eng[i]);
//		printf("��� ����  ==> %5.1f\n", avg[i]);
//		printf("\n");
//	}
//}

//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s[3];
//
//	int i;
//
//	strcpy(s[0].name, "Kim");
//	s[0].kor = 90;
//	s[0].eng = 80;
//	s[0].avg = (s[0].kor + s[0].eng) / 2.0f;
//
//	strcpy(s[1].name, "Lee");
//	s[1].kor = 70;
//	s[1].eng = 60;
//	s[1].avg = (s[1].kor + s[1].eng) / 2.0f;
//
//	strcpy(s[2].name, "Park");
//	s[2].kor = 50;
//	s[2].eng = 40;
//	s[2].avg = (s[2].kor + s[2].eng) / 2.0f;
//
//	printf("-- ����ü �迭 -- \n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("�л� �̸� ==> %s\n", s[i].name);
//		printf("���� ����  ==> %d\n", s[i].kor);
//		printf("���� ����  ==> %d\n", s[i].eng);
//		printf("��� ����  ==> %5.1f\n", s[i].avg);
//		printf("\n");
//	}
//}

//void main()
//{
//	struct student {
//		char name[10];
//		int kor;
//		int eng;
//		float avg;
//	};
//
//	struct student s;
//	struct student* p;
//
//	p = &s;
//
//	printf("�̸� �Է� : ");
//	scanf("%s", p->name);
//
//	printf("���� ���� : ");
//	scanf("%d", &p->kor);
//
//	printf("���� ���� : ");
//	scanf("%d", &p->eng);
//
//	p->avg = (p->kor + p->eng) / 2.0f;
//
//	printf("\n--- ����ü ������ Ȱ�� ---\n");
//	printf("�л� �̸� ==> %s\n", p->name);
//	printf("���� ����  ==> %d\n", p->kor);
//	printf("���� ����  ==> %d\n", p->eng);
//	printf("��� ����  ==> %5.1f\n", p->avg);
//}

//void main()
//{
//	union student {
//		int tot;
//		char grade;
//	};
//
//	union student u;
//
//	u.tot = 300;
//	u.grade = 'A';
//
//	printf("\n--- ����ü Ȱ�� ---\n");
//	printf("���� ==> %d\n", u.tot);
//	printf("��� ==> %c\n", u.grade);
//}

//void main()
//{
//	enum week {sun, mon, tue, wed, thu, fri, sat};
//
//	enum week ww;
//
//	ww = sat;
//
//	if (ww == sun)
//		printf("������ �Ͽ����Դϴ�.\n");
//	else
//		printf("������ �Ͽ����� �ƴմϴ�.\n");
//}

