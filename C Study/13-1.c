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
//	printf("이름 : ");
//	scanf("%s", name, 9);
//
//	printf("국어 점수 : ");
//	scanf("%d", &kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &eng);
//
//	avg = (kor + eng) / 2.0f;
//
//	printf("\n");
//	printf("학생 이름 ==> %s\n", name);
//	printf("국어 점수  ==> %d\n", kor);
//	printf("영어 점수  ==> %d\n", eng);
//	printf("평균 점수  ==> %5.1f\n", avg);
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
//	printf("이름 : ");
//	scanf("%s", s.name, 9);
//
//	printf("국어 점수 : ");
//	scanf("%d", &s.kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &s.eng);
//
//	s.avg = (s.kor + s.eng) / 2.0f;
//
//	printf("\n--- 구조체 활용 ---\n");
//	printf("학생 이름 ==> %s\n", s.name);
//	printf("국어 점수  ==> %d\n", s.kor);
//	printf("영어 점수  ==> %d\n", s.eng);
//	printf("평균 점수  ==> %5.1f\n", s.avg);
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
//		printf("학생 이름 ==> %s\n", name[i]);
//		printf("국어 점수  ==> %d\n", kor[i]);
//		printf("영어 점수  ==> %d\n", eng[i]);
//		printf("평균 점수  ==> %5.1f\n", avg[i]);
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
//	printf("-- 구조체 배열 -- \n");
//	for (i = 0; i < 3; i++)
//	{
//		printf("학생 이름 ==> %s\n", s[i].name);
//		printf("국어 점수  ==> %d\n", s[i].kor);
//		printf("영어 점수  ==> %d\n", s[i].eng);
//		printf("평균 점수  ==> %5.1f\n", s[i].avg);
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
//	printf("이름 입력 : ");
//	scanf("%s", p->name);
//
//	printf("국어 점수 : ");
//	scanf("%d", &p->kor);
//
//	printf("영어 점수 : ");
//	scanf("%d", &p->eng);
//
//	p->avg = (p->kor + p->eng) / 2.0f;
//
//	printf("\n--- 구조체 포인터 활용 ---\n");
//	printf("학생 이름 ==> %s\n", p->name);
//	printf("국어 점수  ==> %d\n", p->kor);
//	printf("영어 점수  ==> %d\n", p->eng);
//	printf("평균 점수  ==> %5.1f\n", p->avg);
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
//	printf("\n--- 공용체 활용 ---\n");
//	printf("총점 ==> %d\n", u.tot);
//	printf("등급 ==> %c\n", u.grade);
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
//		printf("오늘은 일요일입니다.\n");
//	else
//		printf("오늘은 일요일이 아닙니다.\n");
//}

