#include <stdio.h>
#include <conio.h>

//int main()
//{
//	int n;
//	
//	scanf("%d", &n);
//	printf("%d", n);
//	
//	return 0;
//}

//int main()
//{
//	int a,b,c;
//	
//	scanf("%d", &a);
//	printf("a = %d\n", a);
//	scanf("%d %d", &a, &b);
//	printf("a = %d b = %d\n", a,b);
//	scanf("%d %d %d", &a, &b, &c);
//	printf("a = %d b = %d c = %d\n",a,b,c);
//	
//	return 0;
//}

//int main()
//{
//	char ch;
//	
//	scanf("%c", &ch);
//	printf("%c %d", ch, ch);
//	
//	return 0;
//}

//int main()
//{
//	char ch, ca, cr;
//	
//	scanf("%c", &ch);
//	printf("ch = %c ch = %d\n", ch, ch);
//	scanf("%c%c", &ch, &ca);
//	printf("ch = %c ch = %d\n",ch ,ch);
//	printf("ca = %c ca = %d\n", ca, ca);
//	scanf("%c%c%c",&ch, &ca, &cr);
//	printf("ch = %c ch = %d\n", ch, ch);
//	printf("ca = %c ca = %d\n", ca, ca);
//	printf("cr = %c cr = %d\n", cr, cr);
//	
//	return 0;
//	
//}

//int main()
//{
//	char ch1, ch2, ch3;
//	
//	ch1 = getchar();
//	ch2 = getchar();
//	ch3 = getchar();
//	printf("ch1 = %d : %c\n", ch1 , ch1);
//	printf("ch2 = %d : %c\n", ch2, ch2);
//	printf("ch3 = %d : %c\n", ch3, ch3);
//	
//	return 0;
//}

//int main()
//{
//	char str[80];
//	
//	gets(str);
//	printf("%s\n", str);
//	puts(str);
//	
//	return 0;
//}

//int main()
//{
//	char ch;
//	
//	ch = getche();
//	printf("\nch = %d : %c\n", ch, ch);
//	putchar(ch);
//	
//	return 0;
//}

//int main()
//{
//	int n = 0;
//	
//	while(1)
//	{
//		printf("%d%c",n,32);
//		n++;
//	}
//	return 0;
//}

//int main()
//{
//	int a;
//	char b;
//	scanf("%d", &a);
//	getchar();
//	scanf("%c", &b);
//	
//	printf("나이 : %d\n", a);
//	printf("혈액형 : %c", b);
//	
//}

//int main()
//{
//	char a;
//	int b;
//	
//	while(1)
//	{
//		scanf("%c",&a);
//		if(a =='\n')
//		{
//			break;
//		}
//	}
//	
//	
//	
//	
//	return 0;
//}

int main()
{
	char ch = ' ';
	while(ch!=10)
	{
		ch = getche();
		if((65<= ch && ch <= 90) || (97<=ch && ch <=120))
		{
			printf("\n%c",ch);
		}
	}
	
	
}