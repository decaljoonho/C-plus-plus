#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//int main()
//{
//	int ar[6][6] = {0};
//	int i,j;
//	
//	srand(time(NULL));
//	
//	for(i = 0; i<6;i++)
//	{
//		for(j = 0; j<6; j++)
//		{
//			ar[i][j] = rand()%99+1;
//		}
//	}
//	i=0;
//	while(i<6)
//	{
//		j=0;
//		while(j<6)
//		{
//			printf("%3d", ar[i][j]);
//			j++;
//		}
//		printf("\n");
//		i++;
//	}
//    int sum=0;
//	for(int q = 0; q<6; q++)
//    {
//    	for(int a=0; a<6; a++)
//    	{
//    		if(ar[q][a] > sum )
//    		{
//    			sum = ar[q][a];
//			}
//		}
//	}
//	printf("max : %d",sum);
//    int a,check=0;
//    scanf("%d",&a);
//    for(int q = 0; q<6; q++)
//    {
//    	for(int b = 0; b<6; b++)
//    	{
//    		if (ar[q][b] == a)
//    		{
//    			check=1;
//			}
//			else
//			{
//				check=0;
//			}
//		}
//	}
//	if(check ==1)
//	{
//		printf("%d는 존재한다.", a);
//	}
//	else
//	{
//		printf("%d는 존재하지 않는다", a);
//	}
//	
//}

//int main()
//{
//	int ar[10] = {10, 20, 30, 40, 50, 60, 70, 80,90, 100};	
//	
//	printf("%d\n", ar);
//	printf("%d\n", &ar[1]);
//	printf("%d\n", &ar[2]);
//	
//	return 0;
//}

//int main()
//{
//	int n, *p;
//	p = &n;
//	*p = 70;
//	
//	printf("%d %d", n, *p);
//	
//	return 0;
//}

//int main()
//{
//	int ar[10] = {10, 20 ,30, 40, 50, 60, 70, 80, 90, 100};
//	int i;
//	
//	*(ar+0) = 34;
//	*(ar+1) = 21;
//	
//	printf("%d %d\n",ar[0], *(ar+0));
//	printf("%d %d\n",ar[1], *(ar+1));
//	printf("%d %d",*(ar+2), *(ar+3));
//	
//	return 0;
//}

int main()
{
	srand(time(NULL));
	int ar[10];
	
	for(int i=0; i<10; i++)
	{
		ar[i] = rand()%41 + 20;
	}
	
	printf("#################\n");
	printf("# 가로 막대 그래프 #\n");
	printf("#################\n");
	
	for(int i = 0; i < 10; i++)
	{
		printf("ar[%d] : ",i);
		for(int j = 0; j<ar[i]; j++)
		{
			printf("*");
		}
		printf("%d\n",ar[i]);
	}
	
}