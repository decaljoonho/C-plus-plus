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
//	printf("���ڸ� �Է��ϼ��� :");
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
//	printf("���� : %.1f, ������ : %.1f",num1,num2);
//}

//int main()
//{
//	char ch;
//	printf("");
//	scanf("%c",&ch);
//	printf("�Է��Ͻ� ���ڴ� : %c�Դϴ�",ch);
//}

//int main()
//{
//	float num1;
//	int num2;
//	printf("Ű ������ : \n");
//	scanf("%f %d", &num1,&num2);
//	printf("Ű : %.2f\n", num1);
//	printf("������ : %d",num2);
//}

//int main()
//{
//	int num1,num2,num3;
//	printf("�г�,��,��ȣ : \n");
//	scanf("%d %d %d", &num1,&num2,&num3);
//	printf("�г� : %d\n",num1);
//	printf("�� : %d\n",num2);
//	printf("��ȣ : %d",num3);
//}

//int main()
//{
//	char num1,num2,num3,num4,num5;
//	printf("�ܾ�\n");
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
