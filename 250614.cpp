#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <stdio.h>
#include <string>
#include <iostream>
#include <map>
using namespace std;
//int n=10;
//int a[11], b[11];
//
//int main()
//{
//	for(int i=1; i<=n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	for(int i=1; i<=n; i++)
//	{
//		scanf("%d", &b[i]);
//	}
//	
//	int win=0;
//	int lose=0;
//	int draw=0;
//	
//	for(int i=1; i<=n; i++)
//	{
//		if(a[i] > b[i])
//		{
//			win++;
//		}
//		else if(a[i] < b[i])
//		{
//			lose++;
//		}
//		else
//		{
//			draw++;
//		}
//	}
//	
//	if(win>lose)
//	{
//		printf("A\n");
//	}
//	else if(win<lose)
//	{
//		printf("B\n");
//	}
//	else
//	{
//		printf("D\n");
//	}
//	
//	return 0;
//}

//int n;
//int a[101];
//int b[101];
//
//int main()
//{
//	for(int i=0; i<10; i++)
//	{
//		cin>>a[i];
//	}
//	for(int i=0; i<10; i++)
//	{
//		cin>>b[i];
//	}
//	
//	int ascore=0;
//	int bscore=0;
//	
//	for(int i=0; i<10; i++)
//	{
//		if(a[i]>b[i])
//		{
//			ascore += 3;
//		}
//		if(a[i]<b[i])
//		{
//			bscore += 3;
//		}
//		if(a[i] == b[i])
//		{
//			ascore++;
//			bscore++;
//		}
//		
//	}
//	
//	printf("%d %d\n", ascore, bscore);
//	
//	if(ascore>bscore)
//	{
//		cout << "A";
//	}
//	else if(ascore < bscore)
//	{
//		cout << "B";
//	}
//	else
//	{
//		cout << "D";
//	}
//	
//	
//	
//	return 0;
//	
//}

int main()
{
	stack<int> s;
	string str;
	int n=0;
	cin>>str;
	for(int i=0; i<str.size(); i++)
	{
		if(str[i] == '(' && str[i+1] == ')')
		{
			n += s.size();
			i++;
		}
		else if (str[i] == '(')
			s.push(i);
		else if (str[i] == ')')
		{
			n++;
			s.pop();
		}
	}
	cout<<n;
}

