//#include <cstdio>
//#include <algorithm>
//#include <queue>
//#include <stack>
#include <string>
#include <iostream>
//#include <map>
//#include <stdio.h>
using namespace std;

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	for(int i=2; i*i<=n; i++)
//	{
//		while(n%i==0)
//		{
//			printf("%d\n", i);
//			n /= i;
//		}
//	}
//	
//	if(n>1)
//	{
//		printf("%d\n", n);
//	}
//}

//int main()
//{
//	string s;
//	cin >> s;
//	int n=s.size();
//	if(n%3==1)
//	{
//		cout<<s[0];
//	}
//	else if(n%3==2)
//	{
//		cout<<(s[0] - '0') *2 + (s[1] - '0');
//	}
//	for(int i=n%3; i<n; i+=3)
//	{
//		cout << (s[i] - '0') * 4 + (s[i+1]-'0') *2 + (s[i+2]-'0');
//	}
//}

int main()
{
	string s;
	int b, sum=0;
	cin >> s >> b;
	for (int i=0; i<s.size(); i++)
	{
		if (s[i] >= '0'&& s[i] <= '9')
			sum = sum*b + (s[i] - 48);
		else
			sum = sum*b + (s[i]-65 + 10);
	}
	cout << sum;
	return 0;		
}

