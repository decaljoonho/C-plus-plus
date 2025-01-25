#include <stdio.h>
#include <stdlib.h>
#define MAX 10
#define PI 3.141592
#define C3C "씨큐브코딩"
#define PRN printf
#define MACRO "## 매크로 상수##\n"
#define SUM(n,m) ((n)+(m))
#define SUB(s,b) ((s)-(b))
//
//int main()
//{
//	FILE *out = fopen("NumberFile.txt", "w");
//	int n, m;
//	double d1, d2;
//	
//	if (out == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//    printf("정수를 두개 입력하세요 : ");
//    scanf("%d %d", &n , &m);
//    printf("실수를 두개 입력하세요 : ");
//	scanf("%lf lf", &d1, &d2);
//	
//	printf("\n\n\n입력 받은 수들은 모두 출력되었습니다.\n");
//	printf(">>>>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
//	printf("왜 콘솔에서 찾으세요?");
//	
//	fprintf(out, "%d %d\n", n, m);
//	fprintf(out, "%lf %lf", d1, d2);
//	
//	fclose(out);
//	return 0;
//
//}

//int main()
//{
//	FILE *in = fopen("NumberFile.txt","r");
//	int n,m;
//	double d1, d2;
//	
//	if(in == NULL)
//	{
//		printf("파일 없음\n");
//		exit(1);
//	}
//	
//	printf("정수를 두개 입력합니다\n");
//	fscanf(in, "%d %d", &n, &m);
//	printf("실수를 두개 입력합니다\n");
//	fscanf(in, "%lf %lf",&d1, &d2);
//	
//	printf("\n입력받은 수들을 모두 출력합니다.\n");
//	printf("%d %d\n",n,m);
//	printf("%lf %lf\n", d1, d2);
//	printf("\n\n>>>>>>>>>>>>>>>>>>>>>>>>>>>\n");
//	printf("어디서 입력받았을까요?\n");
//	
//	fclose(in);
//	return 0;
//}

//int main()
//{
//	FILE *out = fopen("DrinkFile.txt", "w");
//	int n,m;
//	char str[10];
//	
//	if ( out == NULL )
//	{
//		printf("파일 없음");
//		exit(1);
//	}
//	gets(str);
//	scanf("%d %d", &n, &m);
//	
//	
//	fprintf(out, "%d %d\n", n, m);
//	fprintf(out, "%s",str);
//	
//	fclose(out);
//	return 0;
//	
//}

//int main()
//{
//	int a,b;
//	
//	a=12;
//	b = 20;
//	printf("a = %d, b = %d\n", a,b);
//	
//	{
//		int a,c;
//		
//		a = 30;
//		c = 50;
//		printf("a =%d, b = %d, c = %d\n", a,b,c);
//		
//		a = 90;
//		b = 45;
//		c = 75;
//	}
//	
//	printf("a = %d, b = %d \n",a,b);
//	return 0;
//}

//void PrintFun1(int m, int n);
//void PrintFun2(int m, int n);
//
//int main()
//{
//	int m,n;
//	
//	m = 10;
//	n = 30;
//	
//	printf("main before : m = %d n = %d\n", m,n);
//	PrintFun1(m, n);
//	printf("main after : m = %d n = %d\n", m,n);
//	
//	return 0;	
//}
//
//void PrintFun1(int m, int n)
//{
//	printf("fun1 before : m = %d n = %d\n",m,n);
//	m = m+50;
//	n = n*10;
//	PrintFun2(m,n);
//	printf("fun1 after : m = %d n = %d\n", m,n);
//	
//}
//void PrintFun2(int m, int n)
//{
//	printf("fun2 before : m = %d n = %d\n",m,n);
//	m = m + 50;
//	n = n*10;
//	printf("fun2 after : m = %d n = %d\n",m,n);
//}

int main()
{
	PRN(MACRO);
	PRN("MAX = %d\n", MAX);
	PRN("PI = %lf\n",PI);
	PRN("C3C = %s\n", C3C);
	PRN("%d\n",SUM(3,8));
	PRN("lf\n",SUM(3.6,8.34));
	PRN("%d\n",SUB(13,5));
	PRN("lf\n", SUB(4.3, 3.4));
	
	return 0;

}

