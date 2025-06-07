#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <stdio.h>
#include <string>
#include <iostream>
#include <map>
using namespace std;

//int main()
//{
//	int n;
//	scanf("%d", &n);
//	while(n--)
//	{
//		char str[51];
//		scanf("%s", str);
//		int sum=0;
//		stack<char> s;
//		for(int i=0; str[i]; i++)
//		{
//			if(str[i] == '(')
//			{
//				s.push(str[i]);
//			}
//			else
//			{
//				if(s.empty() || s.top() == ')')
//				{
//					sum=1;
//				}
//				else
//				{
//					s.pop();
//				}
//			}
//		}
//		if (!s.empty() || sum)
//		{
//			printf("NO\n");
//		}
//		else
//		{
//			printf("YES\n");
//		}
//	}
//	return 0;
//}


//int main()
//{
//	stack<int>s;
//	int k;
//	int num;
//	int p;
//	int sum=0;
//	
//	scanf("%d", &k);
//	
//	for(int i=0; i<k; i++)
//	{
//		scanf("%d", &num);
//		if(num==0)
//		{
//			s.pop();
//		}
//		else
//		{
//			s.push(num);
//		}
//	}
//	
//	p=s.size();
//	for(int i=0; i<p; i++)
//	{
//		sum += s.top();
//		s.pop();
//	}
//	
//	printf("%d", sum);
//	return 0;
//}

//int main()
//{
//	map<int, int> m;
//	m.insert(make_pair(4,5));
//	m[5]=6;
//	
//	printf("%d\n", m.find(4)->second);
//	return 0;
//}

//int main()
//{
//	int n,k;
//	int a=0;
//	scanf("%d %d", &n, &k);
//	queue<int> q;
//	for(int i=1; i<=n; i++)
//	{
//		q.push(i);
//	}
//	printf("<");
//	while(!q.empty())
//	{
//		for(int i=0; i<k-1; i++)
//		{
//			q.push(q.front());
//			q.pop();
//		}
//		
//		if(a==0)
//		{
//			cout<<q.front();
//			a++;
//		}
//		else
//		{
//			cout<<", "<<q.front();
//		}
//		q.pop();
//	}
//	printf(">");
//	return 0;
//}


//	
//int main()
//{
//	queue<int> q;
//	int n;
//	cin >> n;
//
//	for (int i = 1; i < n+1; i++)
//		q.push(i);
//
//	while (q.size() > 1) 
//	{
//		q.pop();
//		q.push(q.front());
//		q.pop();
//	}
//
//	printf("%d", q.front());
//   return 0;
//}



int main() 
{
    deque<int> q;
	 int N;
	 cin>>N;
    int T;
    cin>>T;
    for(int i = 0; i < 2*N; i++)
    {
  		  int a;
  		  cin>> a;
        q.push_back(a);
    }
    for(int i = 0; i < T; i++)
    {
        int b;
        cin >> b;
        for(int j = 0; j < b-1; j++)
        {
            int temp = q.front();
            q.pop_front();
            q.push_back(temp);
        }
        printf("%d ", q.front());
    }
    return 0;
}






