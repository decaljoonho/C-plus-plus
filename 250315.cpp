#include <stdio.h>
//int main()
//{
//	int a,b[100000],c;
//	int sum = 0;
//	scanf("%d", &a);
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	for (int i = 0; i < a; i++)
//	{
//		scanf("%d", &c);
//		if (b[i]==c)
//		{
//			sum ++;
//		}
//
//	}
//	printf("%d", sum);
//
//}

//int main()
//{
//	long long N;
//	int a = 0;
//	int b=0;
//	scanf("%lld", &N);
//	while (N>=10)
//	{
//        a = 0;
//		while(N)
//        {
//        	a += N%10;
//        	N /= 10;
//		}
//		N = a;
//		b++;
//	}
//	printf("%d", b);
//	return 0;
//}

//int main()
//{
//	bool prime(int n)
//	{
//		for(int i = 2; i*i<n; i++)
//		    if(n%i==0)
//		        return false;
//		        
//		return true;
//	}
//}


//int main()
//{
//	int a,b;
//	int sum = 0;	
//	int count = 0;
//	
//	scanf("%d", &a);
//	for(int i = 0; i<a;i++)
//	{
//		scanf("%d", &b);
//		if(b==1) continue;
//		for(int j = 2; j<b; j++)
//		{
//			if(b%j==0) count ++;
//		}
//		if (count == 0) sum++;
//		
//		
//	}
//	printf("%d", sum);
//	return 0;
//}

int main()
{
    int n, k, cnt = 0;
    scanf("%d %d", &n, &k);
    
    for(int i = 1; i <= n; i++)
    {
    	if(n%i==0)
    	{
    		cnt ++;
    		if(cnt == k)
    		{
    			printf("%d",i);
    			return 0;
			}
		}
	}
}





