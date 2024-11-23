#include <stdio.h>
//int main()
//{
//	if(0)
//	{
//		printf("True\t참\n");
//		printf("응\t맞아\n");
//	}
//	else
//	{
//		printf("False\t거짓\n");
//		printf("아니\t아니야\n");
//	}
//}

//int main()
//{
//	int a,b;
//	a = 12;
//	b = 56;
//	
//	if(a>b)
//	{
//		printf("%d는 %d보다 크다\n",a,b);	
//	}
//	else
//	{
//		printf("%d는 %d보다 크지 않다\n",a,b);
//	}
//}

int main()
{
	int a,b,c;
	a = 12;
	b = 56;
	c = a>b;
	
	if(c)
	{
		printf("%d는 %d보다 크다\n",a,b);
	}
	else
	{
		printf("%d는 %d보다 크지않다\n",a,b);
	}
}
