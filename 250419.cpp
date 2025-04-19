#include <cstdio>
#include <cstring>
#include <iostream>
#include <stdio.h>

//int main()
//{
//	char str[1001];
//	scanf("%[^\n]", str);
//	for(int i = 0; str[i]; i++)
//	{
//		if('A' <= str[i] && str[i] <= 'Z')
//		{
//			str[i] = str[i] - 'A' + 'a';
//		}
//	}
//	printf("%s", str);
//	return 0;
//}

//using namespace std;
//
//int main()
//{
//	string str;
//	getline(cin, str);
//	
//	for(int i=0; i<str.length(); i++)
//	{
//		if('A' <= str[i] && str[i] <= 'Z')
//		{
//			str[i] = str[i] - 'A' + 'a';
//		}
//	}
//	
//	cout << str;
//	
//	return 0;
//}

//int main()
//{
//	char str[1001];
//	scanf("%s",str);
//	int count[26]={};
//	
//	for(int i = 0; str[i];i++)
//	{
//		if('a' <= str[i] && str[i] <= 'z')
//		{
//			str[i] = str[i] - 'a' + 'A';
//		}
//		count[str[i]-'A']++;
//	}
//	
//	for(int i = 0; i < 26; i++)
//	{
//		printf("%d ",count[i]);
//	}
//	return 0;
//}


//int main()
//{
//
//   char str[1001];
//
//	int i, length;
//
//	scanf("%s", str);
//
//	length = strlen(str);
//
//	for(i = 0; i < length; i++)
//   {
//		if(str[i] - 3 < 65)
//      {
//      	str[i] = str[i] + 26 - 3;
//		}
//		else
//		{
//		str[i] -= 3;
//      }
//	}
//   printf("%s", str);
//}

//int main()
//{
//	int a;
//	char b[101];
//	
//	scanf("%d %s", &a,b);
//	int sum=0;
//	
//	for(int i = 0;i<a; i++)
//	{
//		sum += b[i] - '0';
//	}
//	
//	printf("%d", sum);
//	return 0;
//}
char a[1000005];
int arr[26];
int main()
{
	int max = 0;
	int size;
	char ans;
	
	scanf("%s",a);
	size = strlen(a);
	
	for(int i = 0; i<size; i++)
	{
		if(a[i]>='a')
		{
			arr[a[i]-'a']++;
		}
		else
		{
			arr[a[i]-'A']++;
		}
	}
	
	for(int i = 0; i<26; i++)
	{
		if(arr[i] == max)
		{
			ans='?';
		}
		else if(arr[i] > max)
		{
			max = arr[i];
			ans = 'A' + i;
		}
	}
	
	printf("%c", ans);
	
	return 0;
}
	
	

