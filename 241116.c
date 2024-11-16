#include <stdio.h>

//int main()
//{
//	int n;
//	
//	n = 2;
//	switch (1)
//	{
//		case 0:
//			printf("0");
//		case 1:
//			printf("1.");
//		case 2:
//			printf("2");
//		case 3:
//			printf("3입니다");
//	}
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d",&n);
//	if(n % 3 == 0)
//	{
//		printf("3의 배수");
//	}
//	else 
//	{
//		printf("아님");
//	}
//}

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	switch(n%3)
//	{
//		case 0:
//			printf("3의 배수입니다.");
//			break;
//		case 1:
//			printf("3의 배수가 아닙니다.");
//			break;
//		case 2:
//			printf("3의 배수가 아닙니다.");
//			break;
//    }
//}

//int main()
//{
//	int n;
//	scanf("%d",&n);
//	switch(n/10)
//	{
//		case 0:
//			printf("유소년");
//			break;
//			
//			
//		case 1:
//			printf("청소년");
//			break;
//			
//		case 2:
//			printf("청년");
//			break;
//			
//		case 3:
//			printf("청년");
//			break;
//			
//		case 4:
//			printf("중년");
//			break;
//			
//		case 5:
//			printf("중년");
//			break;
//			
//			
//	}
//}

//int main()
//{
//	int a,b,c,d,e,f;
//	scanf("%d %d %d %d",&a, &b , &c , &d);
//	e = (a+b+c+d)/4;
//	f= a+b+c+d;
//	printf("평균 : %d\n",e);
//	printf("총점 : %d\n",f);
//	
//	switch(e/10)
//	{
//		
//		case 10 :
//			printf("참 잘했어요!!");
//			break;
//		
//		case 9 :
//			printf("참 잘했어요!!");
//			break;
//		case 8 :
//			printf("잘했어요!!");
//			break;
//		case 7 :
//			printf("화이팅");
//			break;
//		default :
//			printf("힘내요, 할 수 있어요.");
//			break;
//	}
//}

//int main()
//{
//	int i,sum=0;
//	i = 1;
//	while (i <= 10)
//	{
//		sum = sum + i ;
//		i++;
//		
//		
//	
//	}
//	printf("%d",sum);
//}

//int main()
//{
//	int i,n=0,a=0;
//	i = 1;
//	while  (i <= 10)
//	{
//		 switch(i%2)
//         {
//         	case 0:
//         		n = n + i;
//         	    break;
//         	case 1 :
//         		a = a + i;
//         		break;
//		 }
//		 i++;
//	}
//    printf("짝수의 합 : %d\n", n);
//    printf("홀수의 합 : %d\n", a);
//}

//int main()
//{
//	int a,b=0;
//	int i = 1;
//	scanf("%d", &a);
//	while (i <= a)
//	{
//		if (a % i == 0)
//		{
//            printf("%d ",i);
//		
//		}
//        i++;
//	}
//	
//}

int main()
{
	int i = 1;
	int max=0,n;
	
	while (i <=5)
	{
		scanf("%d",n);
		if(max < n)
		{
			max = n;
		}
		i++;
	}
	printf("%d", max);
}