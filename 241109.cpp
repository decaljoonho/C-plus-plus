#include <stdio.h>
int main()
//{
//	int n,a,b;
//	scanf("%d",&n);
//	scanf("%d %d",&a,&b);
//	if (n % a ==0 and n % b ==0)
//	{
//		printf("%d",1);
//	}
//	else
//	{
//		printf("%d",0);
//	}
//}

//{
//	int i,sum = 0;
//	for(i=1; i<=1000; i++)
//	{
//		if(i%3==0)
//		{
//			printf("%d ",i*-1);
//			sum += -i;
//		}
//		else
//		{
//			printf("%d ",i);
//			sum += i;
//		}
//	}
//    printf("%d", sum);
//}

//{
//	int i;
//	for(i = 1; i <= 10; i ++)
//	{
//		printf("%d",i);
//	}
//	
//
//}

//{
//	int i = 1;
//	while(i<=10)
//	{
//		printf("%d ",i);
//		i++;
//	}
//}

//{
//	int i,sum = 0;
//	
//	i = 10;
//	while (i<= 17)
//	{
//		printf("%d ", i);
//		sum += i;
//		i++;
//	}
//	printf("\n합 = %d", sum);
//	return 0;
//}

//{
//	int i,sum = 0;
//    i = 20;
//	while (i >= 15)
//	{
//		printf("%d ", i);
//		i--;
//		sum += 1;
//	} 
//	printf("\n실행횟수 : %d", sum);
//	return 0;
//}

//{
//	int i;
//	
//	i = 1;
//	do
//	{
//		printf("%d ", i);
//		i++;
//		
//	}while (i <= 10);
//	return 0;
//}

//{
//	int i;
//	
//	i = 11;
//	do
//	{
//		printf("%d ", i);
//		i++;
//		
//	}while (i <= 10);
//	return 0;
//}

//{
//	int i = 0;
//	while (i < 10)
//	
//	{
//		printf("i의 값 : %d\n", i);
//		i++;
//		if (i == 5)
//		{
//			break;
//		}
//	}
//}

//{
//	int i = 0;
//	while (i < 10)
//	{
//		if (i == 5)
//		{
//			i++;
//			continue;
//		}
//		printf("i의 값 : %d\n", i);
//		i++;
//	}
//}

//{
//	int i = 0,sum = 0;
//	while(i<=999)
//	{
//		i++;
//		if (i % 3 == 0)
//		{
//			printf("%d ",i*-1);
//			sum += -i;
//		}
//		else
//		{
//			printf("%d ",i);
//			sum += i;
//		}
//		
//	}
//	printf("\n합 : %d", sum);
//}

{
	int i = 1,n,m;
	scanf("%d %d", &n, &m);
	while(i<=n)
	{
       printf("%d ", i);
       i++;



	}
    while(i<m)
    {
    	printf("%d\n ",i);
    	i++;
	}
}
