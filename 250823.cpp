#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string.h>
#include <iostream>
#include <map>
#include <stdio.h>

using namespace std;

//int main()
//{
//	int N,H;
//	int j;
//	scanf("%d %d", &N, &H);
//	
//	for(int i=0; i<N; i++)
//	{
//		 scanf("%d", &j);
//		 H -= j;
//		 
//      if (H <= 0)
//      {
//         printf("%d", i+1);
//         return 0;
//      }
//	}
//	printf("-1");
//	
//	return 0;
//
//}

//ABABABABA
//8
//BBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBB 
//52
//BBBBBBBBBBBBBBBBBABBBBBBBBBBBBBBBBB 
//34

//int main()
//{
//	char s[500000] = {};
//	
//	int num = 0;
//	int sum = 1;
//	
//	scanf("%s", s);
//	
//	for(int i=0; i<strlen(s)/2; i++)
//		if(s[i] != s[strlen(s) - 1 - i])
//			num = 1;
//	
//	for(int i=0; i<strlen(s)-1; i++)
//		if(s[i] != s[i+1])
//			sum = 0;	
//	
//	if(sum == 1)
//		printf("-1");
//	
//	else if (num == 1)
//		printf("%lu", strlen(s));
//	
//	else if (num == 0)
//		printf("%lu", strlen(s)-1);
//		
//	return 0;
//	
//}

//int n;
//int arr[1000001];
//int result[1000001];
//
//stack<int> st;
//
//int main()
//{
//	scanf("%d", &n);
//
//	for (int i = 0; i<n; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//
//	for (int i = n-1; i >= 0; i--)
//	{
//		while (!st.empty())
//		{
//			if (st.top() > arr[i])
//			{
//				result[i] = st.top();
//				break;
//			}
//			else
//				st.pop();
//		}
//		
//		if (st.empty())
//		{
//			result[i] = -1;
//		}
//		
//		st.push(arr[i]);
//	}
//
//	for (int i=0; i<n; i++)
//	{
//		printf("%d ", result[i]);
//	}
//	
//	return 0;
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	int dp[201];
//	int arr[201];
//	
//	for(int i=0; i<n; i++)
//	{
//		cin>>arr[i];
//	}
//	
//	int ans=0;
//	
//	dp[0] = 1;
//	
//    for(int i=1 ; i<n ; i++)
//    {
//        int now = 0;
//        
//        for(int j=0 ; j<i ; j++)
//        {
//            if(arr[i]>arr[j])
//            {
//                now = max(now, dp[j]);
//            }
//        }
//        dp[i] = now+1;
//        
//		  ans = max(ans, dp[i]);
//    }
//    
//	 cout << n-ans;
//    
//	 return 0;
//	
//}

//int main()
//{
//	int N;
//	scanf("%d", &N);
//	
//	int arr[1001];
//	
//	for(int i=1; i<=N; i++)
//	{
//		scanf("%d", &arr[i]);
//	}
//	
//	int dp[1001];
//	
//	for(int i=1; i<=N; i++)
//	{
//		dp[i] = 1;
//	}
//	
//	for(int i=1; i<=N; i++)
//	{
//		for(int j=1; j<i; j++)
//		{
//			if(arr[i] > arr[j])
//			{
//				dp[i] = max(dp[i], dp[j] + 1);
//			}
//		}
//	}
//	
//	sort(dp, dp+N+1);
//	
//	printf("%d", dp[N]);
//}

int main()
{
	int n;
	int a[1010], d[1010];
	
	cin >> n;
	
	for (int i = 0; i < n; ++i) cin >> a[i];

   fill(d, d + n, 1);
  
   for (int i = 0; i < n; ++i)
     for (int j = 0; j < i; ++j)
       if (a[j] < a[i]) d[i] = max(d[i], d[j] + 1);
  
   printf("%d", d+d+n);
}

