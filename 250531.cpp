#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <stdio.h>
#include <string>
#include <iostream>

using namespace std;

//bool cmp(int left, int right)
//{
//	return left > right;
//}
//
//int main()
//{
//	int data[10];
//	for (int i=0; i<10; i++)
//	{
//		scanf("%d", &data[i]);
//	}
//	sort(data, data+10);
//	for(int i=0; i<10; i++)
//	{
//		printf("%d ",data[i]);
//	}
//	printf("\n");
//	sort(data, data + 10, cmp);
//	for(int i=0; i<10; i++)
//	{
//		printf("%d ", data[i]);
//	}
//	return 0;
//}

//double a[100000];
//double b[100000];
//
//int main()
//{
//	int c=0,n;
//	scanf("%d", &n);
//	for (int i=0; i<n; i++)
//	{
//	
//		scanf("%lf", &a[i]);
//		b[i]= a[i];
//   }
//   
//   sort(a, a+n);
//   for(int i=0; i<n; i++)
//   	if(a[i] != b[i])
//   		c+=1;
//   printf("%d", c);
//   return 0;   
//}

//struct character
//{
//	int level;
//	int exp;
//	int power;
//};
//
//bool cmp(character left, character right)
//{
//	if (left.level > right.level)
//	{
//		return true;
//	}
//	else if (left.level == right.level)
//	{
//		if(left.exp > right.exp)
//		{
//			return true;
//		}
//		else if (left.exp == right.exp)
//		{
//			return left.power > right.power;
//		}
//		else
//				return false;
//	}
//	else
//			return false;
//}
//
//int main()
//{
//	character c[100001];
//	int n;
//	scanf("%d", &n);
//	for (int i=0; i<n; i++)
//	{
//		scanf("%d %d %d", &c[i].level, &c[i].exp, &c[i].power);
//	}
//	sort(c, c+n, cmp);
//	
//	for(int i=0; i<n; i++)
//	{
//		printf("%d %d %d\n", c[i].level, c[i].exp, c[i].power);
//	}
//	return 0;
//}

//int main()
//{
//	int a[100001];
//	int n,sum,c=0,count=0;
//	scanf("%d", &n);
//	for(int i=0; i<n; i++)
//		scanf("%d", &a[i]);
//	sort (a, a+n);
//	sum = a[0];
//	for(int i=0; i<n; i++)
//	{
//		if (a[i] == a[i+1])
//			c++;
//		else
//			c=1;
//		if(c>count)
//		{
//			count = c;
//			sum = a[i];
//		}
//	}
//	printf("%d", sum);
//	return 0;
//
//}

//int main()
//{
//	stack<int> s;
//	queue<int> q;
//	int a;
//	
//	for(int i=0; i<10; i++)
//	{
//		scanf("%d", &a);
//		s.push(a);
//		q.push(a);
//	}
//	while(!q.empty())
//	{
//		printf("%d ", q.front());
//		q.pop();
//	}
//	printf("\n");
//	while(!s.empty())
//	{
//		printf("%d ", s.top());
//		s.pop();
//	}
//
//	return 0;
//}

//int main()
//{
//	int n;
//	int a;
//	stack<int> s;
//	queue<string> q;
//	
//	scanf("%d", &n);
//	for(int i=0; i<n; i++)
//	{
//		string b;
//		scanf("%d", &a);
//		cin >> b;
//		s.push(a);
//		q.push(b);
//	}
//	
//	while(!s.empty())
//	{
//		printf("%d ", s.top());
//		s.pop();
//	}
//	printf("\n");
//	
//	while (!q.empty())
//	{
//      cout << q.front();
//		printf(" ");
//		q.pop();
//	}
//	
//	return 0;
//}

int main()
{
	int n, a;
	queue<int> q;
	
	scanf("%d %d", &n, &a);
  	for(int i=1; i<=n; i++)
  		q.push(i);	
	
	while(!q.empty())
	{
		for(int i=0; i<a-1; i++)
		{
			q.push(q.front());
			q.pop();
		}
		printf("%d ", q.front());
		q.pop();
	}
	return 0;
}

