#include <stdio.h>

//int main()
//{
//	float aaaa;
//	
//	scanf("%f", &aaaa);
//	printf("Ű : %.1f",aaaa);
//}

//int main()
//{
//	printf("%d\n", 10/3);
//	printf("%d\n", 10/3.0);
//	printf("%f\n", 10/3.0);
//}

//int main()
//{
//	int a = 70, b = 7;
//	float f1 = 77.0, f2 = 7.0;
//	printf("%d\n", a/b);
//	printf("%f\n", f1/b);
//	printf("%f\n", a/f2);
//	printf("%f\n", f1/f2);
//}

//int main()
//{
//	int a,b,c;
//	
//	printf("�����Է� : ");
//	scanf("%d", &a);
//	printf("���� �Է� : ");
//	scanf("%d", &b);
//	printf("%d\n", 10%3);
//	printf("%d\n", a%10);
//	c = a%b;
//    printf("%d\n", c);
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d",a/10 + a%10);
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d",a/100+a%10+a/10-a/100*10);
//}

//int main()
//{
//	int a=34;
//	printf("%d���� �ٲٰ�  %d���� ���´�",34/7,34%7);
//	
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d",a%7);
//}

int main()
{
	int a,b;
	scanf("%d %d", &a,&b);
	printf("%d\n",a*(b%10));
	printf("%d\n",a*(b/10-b/100*10));
	printf("%d\n",a*(b/100));
	printf("%d",a*b);
}
