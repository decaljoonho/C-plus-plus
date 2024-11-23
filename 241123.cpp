#include <stdio.h>
//int main()
//{
//	for(int i = 6; i>= 1; i--)
//	{
//		printf("%d학년 ",i);
//		for(int j = 1; j <= 7; j++)
//		{
//
//			printf("%d반 ", j);
//		}
//		printf("\n");
//	}
//	
//}

//int main()
//{
//	int j = 6;
//	while(j>= 1)
//	{
//		printf("%d 학년 ",j);
//		j--;
//		
//		int i = 1;
//		while(i <= 7)
//	    {
//	    	printf("%d 반 ",i);
//	    	i++;
//			
//		}
//	    printf("\n");
//	}   
//	
//}

//int main()
//{
//	int j = 1;
//	do
//	{
//		printf("%d학년 ",j);
//		
//		int i =7;
//		do
//		{
//			printf("%d반 ",i);
//		 	i--;
//		
//		 
//		}while(i>=1);
//	    printf("\n");
//	j++;
//	}while(j<=6);
//}

//int main()
//{
//	for(int j = 6; j>= 1; j--)
//	{
//		printf("%d학년 ",j);
//		int i = 7;
//		while(i>=1)
//		{
//			printf("%d반 ",i);
//			i--;
//			
//		}
//		printf("\n");
//     }
//}

//int main()
//{
//	for(int i = 1; i <= 5; i++)
//	{
//		for(int j =1; j<= i; j++ )
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//	
//	
//}

//int main()
//{
//	for(int i = 5; i >= 1; i--)
//	{
//		for(int j = 1; j<= i; j++)
//		{
//			printf("%d ",j);
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	for(int i = 5; i >= 1; i--)
//	{
//		for(int j = i;  j <= 5; j++)
//		{
//			printf("%d ",j);
//			
//		}
//		printf("\n");
//	}
//}

//int main()
//{
//	for(int i = 5; i>= 1; i --)
//	{
//		for(int j = i; j >= 1; j --)
//		{
//			printf("%d ",j);
//			
//		}
//		printf("\n");
//	}
//}

int main()
{
	for(int i = 1; i<= 100; i++)
	{
		for(int j = 1; j <= i; j++)
		{
			if(i%j==0)
			{
				printf("%d ",j);
			}
		}
		printf("\n");
	}
}

//int main()
//{
//	int a,b;
//	scanf("%d %d",&a, &b);
//	if (a%b==0)
//	{
//		printf("yes");
//		
//	}
//	else
//	{
//		printf("no");
//	}
//}