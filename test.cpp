#include <cstdio>
int main() 
//{
 
//	int grade, classs,number;
//	float height;

//	printf("학년을 입력하세요 : ");
//	scanf("%d",&grade);
//	printf("반을 입력하세요 :");
//	scanf("%d",&classs);
//	printf("번호를 입력하세요 : ");
//	scanf("%d",&number);
//	printf("키를 입력하세요 : ");
//	scanf("%f",&height);
	
//	printf("%d학년 %d반 %d번, 그리고 키는 %.1fcm 입니다.",grade,classs,number,height); 
//}

//  {
//  	int a,b,c;
//  	
//  	printf("수를 적으세요1 : ");
//  	scanf("%d",&a);
//  	printf("수를 적으세요2 : ");
//  	scanf("%d",&b);
//  	printf("%d + %d = %d\n",a,b,a+b);
//  	printf("%d - %d = %d\n",a,b,a-b);
//  	printf("%d x %d = %d\n",a,b,a*b);
//	printf("%d 나누기 %d = %.1d",a,b,a/b);
//}

//{ 
//  int a;
//  printf(" ");
//  scanf("%d",&a);
//  printf("%d",a - 543);
//}

{
	int a,b;
	printf("수1 : ");
	scanf("%d",&a);
	printf("수2 : ");
	scanf("%d",&b);
	printf("%d\n",a*(b%10));
	
	
	printf("%d\n",(b%100)/10);
	printf("%d",a*b);
}

