#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string>
#include <iostream>
#include <map>
using namespace std;

//int main()
//{
//	int n,m;
//	vector <int> v;
//	scanf("%d", &n);
//	
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &m);
//		v.push_back(m);
//	}
//	
//	sort(v.begin(), v.end());
//	for(int i=0; i<n; i++)
//	{
//		printf("%d\n", v[i]);
//		
//	}
//	
//	return 0;
//}

//int main() {
//	int a[10];
//	int n = 3;
//	int num = 0; 
//	
//	cin >> num;
//
//	for (int i = 0; i < num; i++) {
//		for (int j = 0; j < 10; j++) {
//			cin >> a[j];
//		}
//		sort(a, a + 10);
//		cout << a[10 - n] << endl;
//	}
//	return 0;
//}

//long long a[1000000];
//int main()
//{
//	int n;
//
//	scanf("%d", &n);
//	
//	for(int i=0; i<n; i++)
//	{
//		scanf("%lld",&a[i]);
//	}
//	
//	sort(a, a+n);
//	long long b = a[0];
//	int c =1;
//	int d =1;
//	
//	for(int i=1; i<n; i++)
//	{
//		if(a[i] == a[i-1])
//		{
//			d++;
//		}
//		else
//		{
//			d=1;
//		}
//		
//		if(c<d)
//		{
//			c =d;
//			b =a[i];
//		}
//	}
//	printf("%lld\n", b);
//	return 0;
//	
//}

//int main()
//{
//	int n;
//	int a[1001];
//	int sum=0;
//	
//	scanf("%d", &n);
//	
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &a[i]);
//	}
//	
//	sort(a,a+n);
//	
//	for(int i=0; i<n; i++)
//	{
//		sum += a[i] * (n-i);
//	}
//	
//	printf("%d", sum);
//	return 0;
//
//}



//int main()
//{
//	int r[100001];
//	int n;
//	int a;
//	int b;
//	
//	scanf("%d", &n);
//	
//	for(int i=0; i<n; i++)
//	{
//		scanf("%d", &r[i]);
//	}
//	
//	sort(r, r+n);
//	b = r[n-1];
//	
//	for(int i= n-1; i>=0; i--)
//	{
//		a = r[i] * (n-i);
//		if (b<a)
//		{
//			b=a;
//		}
//	}
//	printf("%d", b);
//	return 0;
//	
//}


int main(void)
{
	int a[10] = {0, };
	int sum =0;
	string s;
	int l = s.length();
	
	
	cin >> s;
	
	for(int i=0; i<l; i++)
	{
		sum += (s[i]-'0');
	}
	
	if (a[0] == 0 || sum % 3 != 0)
	{
		cout << -1;
	}
	
	else
	{
		for(int i=9; i>=0; i--)
		{
			for(int j =0; j<a[i]; j++)
			{
				cout << i;
			}
		}
	}
	
	return 0;		
}
