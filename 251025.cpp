#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string.h>
#include <iostream>
//#include <map>
#include <stdio.h>
#include <vector>
#include <utility>
#include <climits>
//#include <bits/stdc++.h>

using namespace std;

//int a[100001];
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int y;
//	int n;
//	
//	cin>>n;
//	
//	for(int i=0; i<n; i++)
//	{
//		cin>>a[i];
//	}
//	
//	cin>>y;
//	sort(a, a+n);
//	
//	int r=n-1;
//	int l=0;
//	int cnt=0;
//	
//	while(l<r)
//	{
//		int sum = a[l] + a[r];
//		if(sum < y)
//		{
//			l++;
//		}
//		else if (sum > y)
//		{
//			r--;
//		}
//		else
//		{
//			l++;
//			r--;
//			cnt++;
//		}
//	}
//	
//	cout<<cnt;
//	
//	return 0;
//	
//}


//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int n;
//	int m;
//	int cnt=0;
//	int res;
//	
//	cin >> n >> m;
//	int a[n+1];
//	
//	for(int i=0; i<n; i++)
//	{
//		cin >> a[i];
//	}
//	
//	
//}

//int answer = 0;
//int main()
//{
//    int N, M;
//
//    cin >> N >> M;
//    vector<int> arr(N);
//    for (int i = 0; i < N; ++i)
//        cin >> arr[i];
//
//    int start = 0;
//    int end = 0;
//    int sum = arr[0];
//    while (end < N) {       
//        if (sum < M) {
//            end++;
//            if (end < N)
//                sum += arr[end];
//        }
//        else if (sum > M) {
//            sum -= arr[start];
//            start++;
//        }
//        else if (sum == M) {
//            sum -= arr[start];
//            start++;   
//            end++;
//            if (end < N)
//                sum += arr[end];
//            answer++;
//        }
//    }
//
//    cout << answer;
//    return 0;
//}

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int n;
//	int target;
//	int arr[100001];
//	int st = 0;
//	int en = 0;
//	int an = 2000000000;
//	
//	cin >> n >> target;
//	
//	for(int i=0; i<n; i++)
//	{
//		cin >> arr[i];
//	}
//	
//	sort(arr, arr+n);
//	
//	while(st < n && en < n)
//	{
//		
//	}
//}

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//
//	int n, m, num;
//	cin >> n;
//	vector<int> v(n);
//
//	for (int i = 0; i < n; i++)
//	{
//		cin >> v[i];
//	}
//	
//	sort(v.begin(), v.end());
//
//	cin >> m;
//	for(int i = 0; i < m; i++)
//	{
//		cin >> num;
//		if (binary_search(v.begin(), v.end(), num))
//		{
//			cout << "1" << "\n";
//		}
//		else 
//		{
//		cout << "0" << "\n";
//		}
//	}
//	
//	return 0;
//}


//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int n,m;
//	vector<int> v;
//	cin >> n;
//	
//	while(n--)
//	{
//		cin >> m;
//		v.push_back(m);
//	}
//	
//	sort(v.begin(),v.end());
//	cin >> n;
//	while(n--)
//	{
//		cin >> m;
//		cout << binary_search(v.begin(), v.end(), m) << ' ';
//	}
//}

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	vector<int> v;
//	int arr[500001];
//	int n,m;
//	int cnt;
//	
//	cin >> n;
//	
//	for(int i=0; i<n; i++)
//	{
//		cin >> cnt;
//		arr[i] = cnt;
//	}
//	
//	sort(arr, arr+n);
//	
//	cin >> m;
//	
//	for(int i=0; i<m; i++)
//	{
//		cin >> cnt;
//		cout << upper_bound(arr, arr + n, cnt) - lower_bound(arr, arr + n, cnt)<<" ";
//	}
//	
//	return 0;
//	
//}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int k,n;
	int cnt;
	
	
	cin >> k >> n;
	
	
}

