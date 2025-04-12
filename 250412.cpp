#include <cstdio>
//
//int plus(int x, int y)
//{
//	return x+y;
//}
//
//int main()
//{
//	int a,b;
//	scanf("%d %d", &a,&b);
//	printf("%d", plus(a,b));
//}]

//void print_num(int n)
//{
//	if(n<1) return ;
//	printf("%d", n);
//	print_num(n-1);
//	printf("%d", n);
//}
//
//int main()
//{
//	print_num(3);
//}

//int fibo(int n)
//{
//	if(n<=1) return n;
//	return fibo(n-1) + fibo(n-2);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fibo(n));
//}


//int fact(int n)
//{
//	if(n>1)
//	{
//		return n*fact(n-1);
//	}
//	else
//	{
//		return 1;
//	}	
//}	
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fact(n));
//	return 0;
//	
//}

//int fact(int n)
//{
//	if (n<=1) return n;
//	return n * fact(n-1);
//}
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d", fact(n));
//	return 0;
//	
//}



// ------ 하노이의 탑 ---- -----------------
//using namespace std;
//
//void hanoi(int n, int start, int mid, int end)
//{
//	if(n==1)
//	{
//		printf("%d %d\n", start, end);
//	}
//	else
//	{
//		hanoi(n-1, start,end,mid);
//		printf("%d %d\n", start, end);
//		hanoi(n-1,mid,start,end);
//	}
//}	
//
//int main()
//{
//	int n;
//	scanf("%d", &n);
//	printf("%d\n", (1<<n)-1);
//	hanoi(n,1,2,3);
//	return 0;
//}
// ----------------------------------------------

int tel[1001];

int D(int b, int c)
{
	if(c==0) return b;
	return D(tel[b],c-1);
}


int main()
{
	int a,b,c;
	scanf("%d %d %d", &a,&b,&c);
	for(int i = 1; i <= a; i++)
	{
		scanf("%d", tel[i]);
	}
	
	printf("%d", D(b,c));
	return 0;
	
} 
