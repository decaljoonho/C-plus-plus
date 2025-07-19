#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <iostream>
#include <map>
#include <stdio.h>
#define ss 1000000000
using namespace std;

//int main()
//{
//	int a[300];
//	int b[300][3];
//	int n;
//	cin >> n;
//	for(int i=1; i<=n; i++)
//		cin>>a[i];
//	b[1][1] = a[1];
//	for(int i=2; i<=n; i++)
//	{
//		b[i][2] = b[i-1][1] + a[i];
//		b[i][1] = max(b[i-2][1], b[i-2][2]) + a[i];
//	}
//	printf("%d\n",max(b[n][1], b[n][2]));
//	
//	return 0;	
//}


//int main()
//{
//	int a[10001];
//	int b[10001];
//	int n;
//	
//	cin>>n;
//	for(int i=1; i<=n; i++)
//		cin>>a[i];
//	b[1] = a[1];
//	b[2] = a[1] + a[2];
//	
//	for(int i=3; i<=n; i++)
//	{
//		b[i] = b[i-1];
//		if(b[i] < b[i-2]+a[i])
//			b[i] = b[i-2] + a[i];
//		if(b[i] < b[i-3] + a[i] + a[i-1])
//			b[i] = b[i-3] + a[i] + a[i-1];
//	}	
//	
//	printf("%d\n", b[n]);
//	return 0;
//}
long long dp[101][10];
	
int main()
{
	int n;
	long long sum = 0;
	
	scanf("%d", &n);
	
	for (int i = 1; i < 10; i++) {
		dp[1][i] = 1;
	
	}
	for (int i = 2; i <= n; i++) {
		dp[i][0] = dp[i - 1][1];
		dp[i][9] = dp[i - 1][8];
		for (int j = 1; j <= 8; j++) {
			dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
		}
	}
	
	for (int i = 0; i <= 9; i++) {
		sum += dp[n][i];
	}
	
	
	printf("%lld", sum % 1000000000);
	
	return 0;
}
