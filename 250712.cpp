#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include <stdio.h>
using namespace std;

//int main()
//{
//	int n;
//	int dp[100000];
//	scanf("%d", &n);
//	
//	dp[1] = 1;
//	dp[2] = 2;
//	
//	for(int i=3; i<=n; i++)
//	{
//		dp[i] = (dp[i-1] + dp[i-2]) % 10007;
//	}
//	
//	printf("%d\n", dp[n]);
//	return 0;
//	
//}
//
//int main()
//{
//	int n;
//	int a[45];
//	int b[45];
//	
//	scanf("%d", &n);
	
//	a[0] = 0;
//	a[1] = 1;
//	b[0] = 1;
//	b[1] = 1;
//	
//	for(int i=2; i<n; i++)
//	{
//		a[i] = a[i-1] + a[i-2];
//		b[i] = b[i-1] + b[i-2];
//	}
//	
//	printf("%d %d",a[n-1], b[n-1]);
//	return 0;
//	
//}

//int main()
//{
//	int n;
//	int dp[5000];
//	
//	scanf("%d", &n);
//	
//	dp[3] = 1;
//	dp[5] = 1;
//	
//	for(int i=6; i<=n; i++)
//	{
//		if(dp[i-3])
//		{
//			dp[i] = dp[i-3] + 1;
//		}
//		
//		if(dp[i-5])
//		{
//			dp[i] = dp[i-5] + 1;
//		}
//		
//	}
//	
//	if (dp[n])
//	{
//		printf("%d", dp[n]);
//	}
//	else
//	{
//		printf("%d", -1);
//	}
//	
//	return 0;
//
//}

//int main()
//{
//	int n;
//	int dp[1000];
//	int a;
//	
//	scanf("%d", &n);
//	
//	dp[1] = 1;
//	dp[2] = 2;
//	dp[3] = 4;
//	
//	for(int i=4; i<11; i++)
//	{
//		dp[i] = dp[i-1] + dp[i-2] + dp[i-3];
//	}
//	
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &a);
//		printf("%d\n", dp[a]);
//	}	
//	
//	return 0;
//	
//}

//int main()
//{
//	int n;
//	int sum;
//	int arr[100001], dp[100001] = {0, };
//	
//	scanf("%d", &n);
//	
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//		dp[i] = arr[i];
//	}
//	sum=dp[0];
//	
//	for(int i=0; i<n; i++)
//	{
//		dp[i] = max(dp[i], dp[i-1] + arr[i]);
//		if(dp[i] > sum)
//		{
//			sum=dp[i];
//		}
//	}
//	cout<<sum<<endl;
//	return 0;
//	
//}


int main()
{
	int n,t,i;
	int dp[41] = {0, 1};
	scanf("%d", &t);
	i=2;
	while(i<41)
	{
		if(dp[i] == 0)
		{
			dp[i] = dp[i-1] + dp[i-2];
		}
		i++;
	}
	
	i=0;
	
	while(t--)
	{
		scanf("%d", &n);
		if(n==0)
		{
			printf("1 0\n");
		}
		else
		{
			printf("%d %d\n",dp[n-1], dp[n]);
		}
	}
	
	return 0;
}




