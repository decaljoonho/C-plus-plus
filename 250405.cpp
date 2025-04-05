#include <stdio.h>
//int main()
//{
//	int map[101][101] = {0,};
//	int n;
//	scanf("%d", &n);
//	for (int i =0; i < n; i++)
//	{
//		int x,y;
//		scanf("%d %d", &x, &y);
//		for (int j = y; j < y+10; j++)
//		{
//			for(int k = x; k < x + 10; k++)
//			{
//				map[j][k] = 1;
//			}
//		}
//	}
//	
//	int ans = 0;
//	for(int i = 0; i<101; i++)
//	{
//		for(int j = 0; j<101; j++)
//		{
//			ans += map[i][j];
//		}
//	}
//	printf("%d",ans);
//	return 0;
//}

//int main()
//{
//	int a[30] = {};
//	int n;
//	for(int i = 0; i<28; i++)
//	{
//		scanf("%d", &n);
//		a[n-1] = 1;
//	}
//	for (int i = 0; i<30; i++)
//	{
//		if (a[i]==0)
//		{
//			printf("%d\n",i+1);
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n;
//	scanf("%d",&n);
//	int arr[n][2];
//	
//	for(int i = 0; i<n; i++)
//	{
//		scanf("%d %d",&arr[i][0], &arr[i][1]);
//		int a = arr[i][0];
//		for(int j = 1; j<arr[i][1]; j++)
//		{
//			arr[i][0] = arr[i][0] * a%10;
//		}
//	}
//	
//	for(int i = 0; i<n; i++)
//	{
//		if(arr[i][0] % 10 == 0)
//		{
//			printf("%d\n", 10);
//		}
//		
//		else
//		{
//			printf("%d\n", arr[i][0] % 10);
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	int n;
//	int a,b,c,d;
//	int e[101][101];
//	int sum = 0;
//	
//    scanf("%d",&n);
//    for(int i = 1; i<= n; i++)
//    {
//    	scanf("%d %d %d %d", &a,&b,&c,&d);
//    	
//    	for (int j = 0; i < c; j++)
//    	{
//    		for(int k = 0; k<d; k++)
//    		{
//    			e[a+j][b+k] = i;
//			}
//		}
//	}
//	
//	for (int i = 1; i<= n; i++)
//	{
//		for(int j = 0; j<= 100; j++)
//		{
//			
//		}
//
//    }
//    
//    for(int i =  ; i< i++)
//    {
//    	a
//	}
//    
//    return 0;
//	
//}

//int main()
//{
//	int a[101][101] = { 0 };
//	int b;
//	int c,d,e,f;
//	int cnt[101] = { 0 };
//
//	scanf("%d", &b);
//
//	for (int i = 1; i < b + 1; i++) {
//		scanf("%d %d %d %d", &c, &d, &e, &f);
//		for (int j = 0; j < f; j++) {
//			for (int k = 0; k < e; k++) {
//				a[c][d+k] = i;
//			}
//			c++;
//		}
//	}
//
//	for (int i = 0; i < 101; i++) {
//		for (int j = 0; j < 101; j++) {
//			cnt[a[i][j]]++; 
//
//
//		}
//	}
//
//	for (int i = 1; i < b + 1; i++) {
//		printf("%d\n", cnt[i]);
//	}
//	
//	return 0;
//}

//int arr[1001][1001];
//int main()
//{
//    int n, a, b, x, y, cnt;
//    int i, j, k;
//    scanf("%d", &n);
//
//    for(i = 0; i < n; i++)
//    {   
//		scanf("%d%d%d%d", &a, &b, &x, &y);
//        for(j = a; j < a+x; j++) 
//        {
//		     
//			for(k = b; k < b+y; k++) 
//            {
//			
//			    arr[j][k] = i + 1;
//            }
//        }
//    }
//
//    for(i = 0; i < n; i++) 
//    {
//	    cnt = 0;
//        for(j = 0; j < 1001; j++)
//        {
//		    for(k = 0; k < 1001; k++) 
//            {
//			    if(arr[j][k] == i + 1) cnt++;
//            }
//        }
//        printf("%d\n", cnt);
//    }
//    
//
//    return 0;
//}

void print(int a, int b)
{
	int sum = 0, min = 10000;

	for (int i = 1; i <= 100; i++)
	{
		if (i * i >= a && i * i <= b)
		{
			sum = sum + i * i;
			
			if (i * i <= min)
			{
				min = i * i;
			}
		}
	}
	if (sum != 0 && min != 10000)
	{
		printf("%d\n", sum);
		printf("%d\n", min);
	}
	else
		printf("%d", -1);
}

int main()
{
	int a, b; 

	scanf("%d %d", &a, &b);
	
	print(a, b);
}






