#include <stdio.h>
#include <string.h>

//int main()
//{
//	int a,b;
//	scanf("%d %d", &a,&b);
//	if(a>b)
//	{
//		printf(">");
//	}
//	else if(a<b)
//	{
//		printf("<");
//	}
//   else if (a=b)
//	{
//		printf("==");
//	}
//}

//int main()
//{
//	int a;
//	scanf("%d", &a);
//	printf("%d",a-543);
//}

//int main()
//{
//	char a[100000];
//	int b[100000];
//	int c;
//	int num = 0;
//	
//	while(1)
//	{
//		scanf("%s", num);
//		while (a[num] != '/0')
//		{
//			num++;
//		}
//		for (int i = 0; i<num; i++)
//		{
//			b[i] = a[i];
//		}
//		if(a[0] == '0')
//		{
//			break;
//		}
//		if(num == 1)
//		{
//			printf("yes\n");
//			num = 0;
//		}
//		for(int i = 0; i<num/2;i++)
//		{
//			if(b[i] != b[num-i-1])
//			{
//				printf("no\n");
//				num = 0;
//				break;
//			}
//			else
//			{
//				if(b[i + 1] == b[num - i - 2])
//				{
//					printf("yes\n");
//					num = 0;
//					break;
//				}
//				else
//				{
//					printf("no\n");
//					num = 0;
//					break;
//				}
//			}
//		}
//   }
//   return 0;
//}


//int main()
//{
//	char num[100000];
//	int arr[100000];
//	int len = 0;
//	int n;
//
//	while (1)
//	{
//		scanf("%s", num);
//		
//		while (num[len] != '\0')
//		{
//			len++;
//		}
//		
//		for (int i = 0; i < len; i++)
//		{
//			arr[i] = num[i];
//		}
//
//		if (num[0] == '0')
//	   {
//	   	break;
//		}
//
//		if (len == 1)
//		{
//			printf("yes\n");
//			len = 0;
//		}
//
//		for (int i = 0; i < len / 2; i++)
//		{
//
//			if (arr[i] != arr[len - i - 1])
//			{
//				printf("no\n");
//				len = 0;
//				break;
//			}
//			
//			else
//			{
//				if (arr[i + 1] == arr[len - i - 2])
//				{
//					printf("yes\n");
//					len = 0;
//					break;
//				}
//			
//				else
//				{
//					printf("no\n");
//					len = 0;
//					break;
//				}
//			}
//		}
//	}
//	return 0;
//}


//char str[100000];
//int f(int st, int en)
//{
//	if(st > en) return 1;
//	else if (str[st] == str[en])
//	{
//		return f(st+1, en-1);
//	}
//	else return 0;
//	
//}
//
//int main()
//{
//	int len;
//	scanf("%s", str);
//	len = strlen(str);
//	
//   printf("%d",f(0,len-1));
//	
//	return 0;
//   
//}

int a=0;
char str[100000];

int f(int st, int en)
{
	a = a+1;
	
	if(st >= en) 
	{
		
		return 1;
	} 
	  
	  
	else if (str[st]==str[en])
	{
		
		return f(st+1, en-1);
	
	}
	
	else return 0;
	
}

int main()
{
	
   int b;
   int len, result=0;
	scanf("%d", &b);
	for(int i = 0; i<b; i++)
	{	
		scanf("%s", str);
	   len = strlen(str);
	   result=f(0,len-1);

      printf("%d %d\n",result,a);
      a=0;
	}

	
	return 0;
   
}




