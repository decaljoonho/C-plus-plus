#include <stdio.h>
int main()
//{
//	int a;
//    scanf("%d", &a);
//    
//    if(a%2 == 0,a!=0)
//    {
//    	printf("Â¦¼ö") ;
//	}
//	if(a == 0)
//	{
//	    printf("0");
//	}
//	if(a%2!=0)
//	{
//		printf("È¦¼ö");
//	}
//}

//{
//	for(int i=1; i<=10;i++)
//	{
//		printf("¾¾Å¥ºêÄÚµù");
//	}
//
//}

//{
//   int n;
//   for (n = -10; n <= -1; n++)
//   {
//       printf("%d", n);
//   }
//}

//{
//    int n;
//    
//    for(n = 100; n >= 0; n=n-10)
//    {
//    	printf("%d",n);
//	}
//}

//{
//   int n,i;
//   scanf("%d",&n);
//   for(i=-n; i<=n; i=i+1)
//   {
//   	printf("%d",i);
//   }
//}

//{
//	int i,n,x=0;
//	scanf("%d",&n);
//	for(i=1;i<=n; i=i+1)
//	{
//		x += i;
//	}
//	printf("%d",x);
//}

//{
//	int i,n;
//	scanf("%d",&n);
//	for(i=9;i>=2; i--)
//	{
//		printf("%d x %d = %d\n",n,i,n*i);
//	}
//}

//{
//	int i,n;
//	scanf("%d",&n);
//	for(i=1;i<=n; i++)
//	{
//		if(i%3==0)
//		{
//			printf("%d",i);
//		}
//	}
//}

//{
//	int i,n,a=0;
//	scanf("%d",&n);
//	for(i=1;i<=n; i++)
//	{
//		if(i%6==0)
//		{
//			printf("%d\n",i);
//			a+=i;
//		}
//		
//	}
//	printf("%d\n",a);
//	printf("%d",n/6);
//}

{
    int i,n,m,a,z,o=0;
    scanf("%d",&n);
    scanf("%d",&m);
    for(i=1;i<=m; i++)
    {
    	scanf("%d %d",&a ,&z);
    	o += a*z;
    }
	if(n==o)
	{
		printf("Yes");
	}
	else
	{
		printf("No");
	}
}
