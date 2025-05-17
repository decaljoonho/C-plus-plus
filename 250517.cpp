#include <stdio.h>
#include <string.h>
#include <string>
#include <iostream>
#include <utility>

using namespace std;
//int main()
//{
//	int a,b;
//	scanf("%d %d", &a, &b);
//	printf("%d\n", a*(b%100%10));
//	printf("%d\n", a*(b%100/10));
//	printf("%d\n", a*(b/100));
//	printf("%d\n", a*b);
//}

//struct Person
//{
//	int id;
//	int a;
//	int b;
//	string n;
//};
//
//int main()
//{
//	Person st[10000];
//	int c;
//	scanf("%d", &c);
//	for(int i=0; i<c; i++)
//	{
//		int id,a,b;
//		char n[21];
//		scanf("%d %s %d %d", &id, &n, &a, &b);
//		st[i].id = id;
//		st[i].n=n;
//		st[i].a=a;
//		st[i].b=b;	
//	}
//	int d;
//	scanf("%d", &d);
//	for(int i=0; i<d; i++)
//	{
//		string sn;
//		cin >> sn;
//		int e =1;
//		for(int j=0; j<c; j++)
//		{
//			if(st[j].n == sn)
//			{
//				printf("%d %d %d\n", st[j].id, st[j].a, st[j].b);
//				e=0;
//				
//			}
//			
//		}
//		if(e)
//		{
//			printf("-1\n");
//		}
//	}
//	
//	return 0;
//}

//int main()
//{
//	pair <int,int> t[10000];
//	int n;
//	scanf("%d", &n);
//	for(int i=0; i<n; i++)
//	{
//		int a,b;
//		scanf("%d %d", &a, &b);
//		t[i] = make_pair(a,b);
//	}
//	pair<int,int> q = {-1,-1};
//	int d = 0;
//	for(int i=0; i<n; i++)
//	{
//		if(t[i] > q)
//		{
//			q = t[i];
//			d = i;
//		}
//	}
//	printf("%d", d);
//	return 0;
//	 
//}

//int main()
//{
//	pair <int, int> p[51][51];
//	int n,m;
//	scanf("%d %d", &n, &m);
//	for(int i=1; i<=n; i++)
//	{
//		for(int j=1; j<=m; j++)
//		{
//			int a,b;
//			scanf("%d %d", &a, &b);
//			p[i][j] = make_pair(a,b);
//		}
//	}
//	
//	int q,w,e,r;
//	scanf("%d %d", &q, &w);
//	scanf("%d %d", &e, &r);
//	pair <int, int> sum = p[q][w];
//	p[q][w] = p[e][r];
//	p[e][r] = sum;
//	
//	for(int i=1; i<=n; i++)
//	{
//		for(int j=1; j<=m; j++)
//		{
//			printf("%d %d", p[i][j].first, p[i][j].second);
//		}
//		printf("\n");
//	}
//	return 0;
//}

int main()
{
	pair<int, double> p[1000];
	int n;
	
	scanf("%d", &n);
	for(int i=0; i<n; i++)
	{
		int m;
		double a;
		scanf("%d %lf", &m, &a);
		p[i] = make_pair(m, a);
   }

	int q,w;
	double e;
	
	scanf("%d %d %lf", &q, &w, &e);
	p[q-1] = make_pair(w,e);
	int sum_1 = 0;
	double sum_2 = 1;
	for(int i=0; i<n; i++)
   {
   	sum_1 += p[i].first;
		sum_2 *= p[i].second;
	}
   int r = sum_1  * sum_2;
   printf("%d", r);
   
	return 0;
}



