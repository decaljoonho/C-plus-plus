#include <stdio.h>
//int main()
//{
//	long long a = 21000000000;
//	printf("%lld",a);
//	
//}

//int main()
//{
//	int a,b,c,d;
//	scanf("%d %d %d", &a, &b, &c);
//	scanf("%d", &d);
//	c -= d%60;
//	d /= 60;
//	if(0>c)
//	{
//		c += 60;
//		b--;
//	}
//	b -= d%60;
//	d /= 60;
//	if (b<0)
//	{
//		b += 60;
//		a--;
//	}
//	a -= d%60;
//	d/=60;
//    a -= d;
//	printf("%d %d %d",a,b,c);
//	
//	return 0;
//}

//int main()
//{
//	int a;
//	int b = 0;
//	for(int i = 0; i <4; i++)
//	{
//		scanf("%1d", &a);
//		b += a;
//	}
//	printf("%d", b);
//	
//	return 0;
//	
//}

// (백준 문제) 
//int main()
//{
//	int a,b;
//	scanf("%d %d", &a, &b);
//	
//	b -= 45;
//	
//	if (b<0)
//	{
//		b += 60;
//		a --;
//	}
//	if (a<0)
//	{
//		a += 24;
//	}
//	printf("%d %d",a,b);
//}
//
//int main()
//{
//	long long N, M, i;
//	scanf("%lld %lld %lld", &N, &M, &i);
//	if (N / M == (i - 1)/M)
//	     printf("0");
//	else prntf("%lld", (i-1) % M+ 1);
//	
//	return 0;
//}

int main()
{
	int a,b,c,d;
	int sum = 0;
	for (int i = 0; i <3; i++)
	{
	scanf("%d %d %d %d", &a,&b,&c,&d);
	sum = a+b+c+d;
		if (sum == 0)
	{
		printf("D\n");
		sum = 0;
	}
	else if (sum == 1)
	{
		printf("C\n");
		sum = 0;
	}
	else if (sum == 2)
	{
		printf("B\n");
		sum = 0;
	}
	else if (sum == 3)
	{
		printf("A\n");
		sum = 0;
	}
	else if (sum == 4)
	{
		printf("E\n");
		sum = 0;
	}
	}

}

