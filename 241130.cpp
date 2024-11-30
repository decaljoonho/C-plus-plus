#include <stdio.h>
//int main()
//{
//	int i;
//	for(i=1; i <= 6; i++)
//	{
//		printf("%d학년 ",i);
//		for(int o = 1; o <= 7; o ++)
//		{
//			printf("%d반 ",o);
//		}
//		printf("\n");	
//		
//
//	}
//
//} 

//void plus()
//{
//	int a = 3;
//	int b = 2;
//	
//	
//	printf("%d", a+b);
//}
//
//int main()
//{
//	plus();
//}

//void plus(int num1, int num2)
//{
//	printf("%d\n", num1 + num2);
//}
//
//int main()
//{
//	int a = 3;
//	int b = 2;
//	plus(a,b);
//	plus(5,3);
//	return 0;
//}

//int plus()
//{
//	int a = 3;
//	int b = 2;
//	
//	return a+b;
//	
//}
//int main()
//{
//	int num = plus();
//	printf("%d\n", num);
//	printf("%d\n", plus());
//	printf("%d\n",plus()+10);
//}

//int plus(int num1, int num2)
//{
//	return num1 + num2;
//}
//
//int main()
//{
//	int a = 3;
//	int b = 2;
//	int num1 = plus(a,b);
//	printf("%d\n", num1);
//	
//	num1 = plus(3, 5);
//	printf("%d\n", num1);
//	
//	num1 = plus(3,5);
//	printf("%d\n", num1 + 10);
//	
//}

//int Power(int n)
//{
//	return n*n;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int result = Power(n);
//	printf("%d", result);
//}

//int Sum(int n)
//{
//	int q = 0;
//    for(int i = 1; i<= n; i++)
//    {
//    	q += i;
//	}
//	return q;
//}
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int a = Sum(n);
//	printf("%d", a);
//	
//}

//int main()
//{
//	int n, a = 0;
//	scanf("%d", &n);
//	for(int i = 1; i <= n; i++)
//	{
//		a += i;
//	}
//	printf("%d",a);
//}

//void Divisor(int n)
//{
//	for(int i = 1; i<= n; i ++)
//	{
//		if(n%i == 0)
//		{
//			printf("%d ",i);
//		}
//	}
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	Divisor(a);
//}

//int DivisorSum(int n)
//{
//	int q;
//	for (int i = 1; i <= n; i++)
//	{
//		if(n%i==0)
//		{
//			q+=i;
//		}
//	}
//	return q;
//}
//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d",DivisorSum(a));
//    
//}

//int AbsoluteValue(int n)
//{
//	int q = 0;
//	if(n<0)
//	{
//		q += n * -1;
//	}
//	else
//	{
//		q += n * 1;
//	}
//    return q;
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	printf("%d",AbsoluteValue(a));
//}

//int DigitNumber(int n)
//{
//	int q = 0;
//	int i = 1;
//	while(i<=n)
//}
//int main()
//{
//	int a;
//	scanf("%d",&a);
//	DigitNumber(a);
//}

int main()
{
	int count = 0;
	int n;
	scanf("%d",&n);
	while(n>0)
	{
		count++;
		n/=10;
	}
	printf("%d",count);
}