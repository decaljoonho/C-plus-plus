#include <stdio.h>
//
//int main()
//{ 
//  int a
//  float f1;
//  char ch;
  
//  a = 15;
//  f1 = 123.456;
//  ch = 'A';
//  printf("%d\n", a);
//  printf("%.3f\n", f1);
//  printf("%c\n", ch);
//}

//int main()
//{
//	int num1,num2;
//	printf("숫자를 입력하세요 :");
//	scanf("%d %d",&num1,&num2);
///	printf("%d + %d = %d\n",num1,num2,num1+num2);
//	printf("%d - %d = %d\n",num1,num2,num1-num2);
//	printf("%d x %d = %d\n",num1,num2,num1*num2);
//}

//int main()
//{
//	float num1,num2;
//	printf("");
//	scanf("%f %f",&num1,&num2);
//	printf("왼쪽 : %.1f, 오른쪽 : %.1f",num1,num2);
//}

//int main()
//{
//	char ch;
//	printf("");
//	scanf("%c",&ch);
//	printf("입력하신 문자는 : %c입니다",ch);
//}

//int main()
//{
//	float num1;
//	int num2;
//	printf("키 몸무게 : \n");
//	scanf("%f %d", &num1,&num2);
//	printf("키 : %.2f\n", num1);
//	printf("몸무게 : %d",num2);
//}

//int main()
//{
//	int num1,num2,num3;
//	printf("학년,반,번호 : \n");
//	scanf("%d %d %d", &num1,&num2,&num3);
//	printf("학년 : %d\n",num1);
//	printf("반 : %d\n",num2);
//	printf("번호 : %d",num3);
//}

//int main()
//{
//	char num1,num2,num3,num4,num5;
//	printf("단어\n");
//	scanf("%c %c %c %c %c",&num1,&num2,&num3,&num4,&num5);
//	printf("%c%c%c%c%c",num1,num2,num3,num4,num5);
//}

#include <stdlib.h>
#include <time.h>

int main()
{
	srand(time(NULL));
	int a;
	a = rand();
	printf("%d",a);
}
