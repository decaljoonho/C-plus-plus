#include <stdio.h>
//int main()
//{
//	int a,b;
//	scanf("%d\n",&a);
//	for(int i =0; i<a; i++)
//	{
//		scanf("%d",b);
//		
//	}
//	int c = b;
//	int d = b;
//	
//	for(int i = 0; i<a; i++)
//	{
//		if(b>c)
//		{
//			c = b;
//		}
//		if(b<d)
//		{
//			d = b;
//		}
//	}
//	
//	printf("%d %d", c,d);
//	return 0;
//}




int main()
{
	int N = 0;
	scanf("%d", &N);
	
	int A[N];
	
	for(int i = 0; i < N; i++)
    {
    	scanf("%d",&A[i]);
	}
	
	int min = A[0];
	int max = A[0];
	
	for(int i = 0; i<N; i++)
	{
		if(A[i] > max)
		{
			max = A[i];
		}
		if(A[i] < min)
		{
			min = A[i];
		}
	}
	
	printf("%d %d", min, max);
}
