#include <stdio.h>
//int main()
//{
//	int A[10] = {0};
//	int B[10] = {10};
//	int i;
//	int num_a = 0;
//	int num_b = 0;
//	char result;
//	
//	for(i = 0;i<10;i++)
//	{
//		scanf("%d", &A[i]);
//	}
//	for(i = 0; i<10; i++)
//	{
//		scanf("%d", &B[i]);
//	}
//	for(i = 0; i<10; i++)
//	{
//		if(A[i]>B[i])
//		{
//			num_a = num_a+3;
//			result; 'A';
//		}
//		else if (A[i]<B[i])
//		{
//			num_b = num_b+3;
//			result ;'B';
//		}
//		else 
//		  (num_a = num_a + 1) && (num_b = num_b + 1);
//		
//	}
//	if (num_a > num_b)
//	{
//		printf("%d %d\nA",num_a, num_b);
//		
//	}
//	else if (num_b>num_a)
//	{
//		printf("%d %d\nB",num_a, num_b);
//		
//	}
//	else 
//	{
//		if(num_a == 10 && num_b == 10)
//		{
//			printf("10 10\n0");
//		}
//		else if (result == 'A')
//		{
//			printf("%d %d\nA",num_a, num_b);
//		}
//		else if (result =='B')
//		{
//			printf("%d %d\nB", num_a, num_b);
//		}
//	}
//	
//}


//int main()
//{
//	int a[100][100];
//	int n, m;
//	int x, y;
//	
//	scanf("%d %d", &n, &m);
//	
//	
//	for(int i = 0; i<m; i++)
//	{
//		for(int j = 0; j<n; j++)
//		{
//			scanf("%d", &a[i][j]);
//			if (a[i][j] == 2)
//			{
//				x = j;
//				y = i;
//			}
//		}
//	}
//	
//	while (!(a[y+1][x] && a[y][x+1]))
//	{
//		if (!(a[y+1][x]))
//		{
//			y++;
//		}
//		else if (!(a[y][x+1]))
//		{
//			x++;
//		}
//	}
//	printf("%d %d", x,y);
//	return 0;
//}

//int main()
//{
//	int a[101][101];
//	int n,m;
//	int from,to,num;
//	
//	scanf("%d %d", &n, &m);
//	for (int i = 0; i<m; i++)
//	{
//		scanf("%d %d %d", &from, &to, &num);
//		if(a[from][to] == 0 || a[from][to] < num)
//		{
//			a[from][to] = num;
//		}
//	}
//	
//	for (int i = 1; i<= n; i++)
//	{
//		for(int j = 1; j<= n; j++)
//		{
//			printf("%d ",a[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}


int main()
{
	int a[101][101] = {0, };
	int n,m;
	
	int from, to, num;
	scanf("%d %d", &n,&m);
	
	for(int i = 0; i<m; i++)
	{
		scanf("%d %d %d", &from ,&to, &num);
		if(a[from][to] == 0 || a[from][to] < num)
		{
			a[from][to] = num;
		}
		
	}
	for (int i = 1; i<= n; i++)
	{
		int c =0,b=0;
		for(int j = 1; j<=n; j++)
		{
			c += a[j][i];
			b += a[i][j];
		}
		if (c > b)
		{
			printf("%d", i);
		}
	}
	
	return 0;
	
}
