#include <stdio.h>
//int main()
//{
//	char c[20];
//	scanf("%s",c);
//	
//	for(int i= 0; i<5; i++)
//	{
//		printf("%c",c[i]-32);
//	}
//}

//int main()
//{
//	for(int i = 65; i<91; i++)
//	{
//		printf("%c",i);
//	}
//	printf("\n");
//	for(int z = 97; z<123; z++)
//	{
//		printf("%c",z);
//	}
//}

//int main()
//{
//	int a;
//	double b;
//	char c;
//	
//	a = 153; b = 12.7; c = 'J';
//	printf("변수 a의 주소 ; %p\n", &a);
//	printf("변수 b의 주소 : %p\n", &b);
//	printf("변수 c의 주소 : %p\n", &c);
//	return 0;
//}

//int main()
//{
//	char ch = 'A';
//	char * pch;
//	pch = &ch;
//	
//	printf("%p\n", pch);
//	printf("%c\n", *pch);
//}

//void add(int *num1, int *num2);
//int main()
//{
//	int number1 = 5;
//	int number2 = 10;
//	add(&number1, &number2);
//	printf("number1 = %d\n", number1);
//	printf("number2 = %d\n", number2);	
//}
//void add(int* num1, int* num2)
//{
//	*num1 = *num1+10;
//	*num2 = *num2+10;
//}

//int main()
//{
//	int n;
//	int *pn, *pr;
//	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80,90, 100};
//	
//	n = 49;
//	pn = &n;
//	pr = &ar[2];
//	printf("%d %d %p %p\n", n, ar[2], pn, pr);
//	*pn  = 59;
//	*pr =  33;
//	printf("%d %d\n",*pn, *pr);
//	
//	printf("%d %d",n,ar[2]);
//	return 0;
//}

//int main()
//{
//	int a, b;
//	int add, sub, mul, div;
//	int *pa, *pb;
//	
//	pa = &a;
//	pb = &b;
//	
//	a = 30;
//	b = 55;
//	add = *pa + *pb;
//	printf("add = %d\n", add);
//	
//	*pa = 9;
//	*pb = 7;
//	sub = *pa - *pb;
//	printf("sub = %d\n", sub);
//	
//	*pa = 12;
//	b = 3;
//	mul = *pa * *pb;
//	printf("mul = %d\n", mul);
//	
//	a =  45;
//	*pb = 5;
//	div = *pa / *pb;
//	printf("div = %d\n", div);
//	
//	return 0;
//}

int main()
{
	char c[1000];
	int n;
	scanf("%s",c);
	scanf("%d", &n);
	
	int i = 0;
	while(c[i]!=0)
	{
		if(i==n)
		{
			printf("%c",c[i-1]);
			
		}
		i++;
	}
}