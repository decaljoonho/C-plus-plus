#include <stdio.h>
//int main()
//{
//	printf("\"õ��� 1%%�� ������ 99 %%�� ������� �̷������\"");
//}

//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("%d + %d = %d\n",a,b,a+b);
//    printf("%d - %d = %d\n",a,b,a-b);
//    printf("%d x %d = %d\n",a,b,a*b);
//    printf("%d / %d = %d",a,b,a/b);
//
//}

//{
//	int a,b;
//	scanf("%d %d",&a,&b);
//	printf("%d",a+b);
//}

//{
//	int a;
//	scanf("%d",&a);
//	printf("%d + %d + %d = %d",a/100,a/10-a/100*10,a%10,a/100+a/10-a/100*10+a%10);	
//	
//}

//int main()
//{
//	int a, b;
//	
//	a= 23;
//	b = 24;
//	printf("%d\n",a>b);
//	printf("%d\n",a<b);
//}

//int main()
//{
//	printf("%d\n", 10 > 5 && 8<3);
//	printf("%d\n",10>5 || 8<3);
//	printf("%d\n",!(10>8));
//}

int main()
{
	int res;
	
	res = 0 && 0;
	printf("%d\n", res);
	res = 0 && 1;
	printf("%d\n", res);
	res = 1 && 0;
	printf("%d\n", res);
	res = 1 && 1;
	printf("%d\n", res);
	
	res = 0 || 0 ;
	printf("%d\n", res);
	res = 0||1;
	printf("%d\n", res);
	res = 1 || 0;
	printf("%d\n", res);
	res = 1 || 1;
	printf("%d\n", res);
	
	printf("%d\n", !res);
}
