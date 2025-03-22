#include <stdio.h>
#include <vector>


//int main()
//{
//	int x;
//	scanf("%d", &x);
//	
//	int y, cnt = 0;
//	for(int i = 0; i<5; i++)
//	{
//		scanf("%d", &y);
//		if(x==y) cnt ++;
//	}
//	printf("%d", cnt);
//	return 0;
//}

//int main()
//{
//	int out, in, sum = 0
//	,ans = 0;
//	for(int i = 0; i<4; i++)
//	{
//		scanf("%d %d", &out, &in);
//		sum = sum - out + in;
//		if (sum > ans) ans = sum;
//	}
//	printf("%d\n", ans);
//	return 0;
//}

//int main()
//{
//	int a,b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a+b);
//	printf("%d\n", a-b);
//	printf("%d", a*b);
//	printf("%d", a/b);
//	printf("%d", a%b);
//}

//using namespace std;
//
//int main()
//{
//	vector<int> v;
//	for (int i = 0; i<10; i++)
//	{
//		int temp;
//		scanf("%d", &temp);
//		v.push_back(temp);
//	}
//	for(int i = v.size()-1; i>=0; i--)
//	       printf("%d\n", v[i]);
//	return 0;
//}

//int main()
//{
//	int i, A[10], B[10];
//	for (i = 0; i<10; i++)
//	       scanf("%d", &A[i]);
//	for (i = 0; i<10; i++)
//	       scanf("%d", &B[i]);
//	
//	int A_win = 0,B_win = 0;
//	
//	for(i = 0; i<10; i++)
//	{
//		if (A[i]>B[i]) A_win ++;
//		else if (A[i]<B[i]) B_win++;
//	}
//	if (A_win > B_win) printf("A");
//	else if (A_win < B_win) printf("B");
//	else printf("D");
//	
//	return 0;
//}

//int main()
//{
//	int a, b[100000];
//	int sum = 0; int count = 100; int um = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (int i = 0; i<a; i++)
//	{
//		if (sum <b[i])
//		{
//			sum = b[i];
//		}
//		if (count < b[i])
//		{
//			count = b[i];
//		}
//		um += b[i];
//	}
//	printf("%d",(um-count-sum)/ (a-2));
//	
//	return 0;
//
//}

//int main()
//{
//	int a, b[100000];
//	int sum = 0,count = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//
//	for (int i = 1 ;i < a; i++)
//	{
//		if (sum < b[i]-b[i-1])
//		{
//			sum = b[i] - b[i-1];
//			count = i;
//		}
//	}
//	if(sum > 0) 
//	{
//		printf("%d %d", count, count + 1);
//	}	
//		
//	
//	else
//	{
//		printf("0");
//	}
//	
//	
//	
//	return 0;
//}

//int main()
//{
//	int a,b[10000], c[10000];
//	scanf("%d", &a);
//	for (int i = 0; i<a; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	
//	for(int i = 0; i < a; i++)
//	{
//	    
//		for(int j = 0; j<a; j++)
//		{
//			if (b[i]<b[j])
//			{
//				c[i] += 1;
//			}
//		}
//		c[i] += 1;
//	}
//	for (int i = 0; i < a; i++)
//	{
//		printf("%d\n", c[i]);
//	
//	}
//	return 0;
//}

int main()
{
	int a;
	int b[10 ] = {0,};
	scanf("%d", &a);
	for(int i = 0; i < 8; i++)
	{
		b[a%10]++;
		a /= 10;
	}
	b[6] += b[9] + 1;
	b[6] /= 2;
	b[9] = b[6];
		int sum = 0;
	for(int i = 0; i < 10; i++)
	{
		if(sum < b[i])
		{
			sum = b[i];
		}
	}
	printf("%d", sum );
	return 0;
	
}



