//#include <cstdio>
//#include <algorithm>
//#include <queue>
//#include <stack>
//#include <string.h>
//#include <iostream>
//#include <map>
//#include <stdio.h>
//#include <vector>
//#include <utility>
//#include <climits>
#include <bits/stdc++.h>

using namespace std;

//int main()
//{
//    
//    ios_base::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//    
//    int k, n;
//    long long start = 1, end, mid, sum = 0, total, max = -1;
//    
//	cin >> k >> n;
//
//    int length[k];
//
//    for(int i = 0 ; i < k ; i++)
//    {
//        cin >> length[i];
//        sum += length[i];
//    }
//
//    end = sum / n; 
//
//    while(start <= end)
//    {
//        total = 0;
//        mid = (start + end) / 2;
//
//        for(int i = 0 ; i < k ; i++)
//        {
//            total += length[i] / mid;
//        }
//
//        if(total >= n)
//        {
//            start = mid + 1;
//            if(mid > max)
//            {
//            	max = mid;	
//			}
//        }
//        else
//        {
//            end = mid - 1;
//        }
//    }
//
//    cout << max;
//
//    return 0;
//}


//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	long long n;
//	long long a;
//	
//	cin >> n;
//	
//	a = sqrt(n);
//	
//	if((a*a) < n)
//	{
//		a++;
//	}
//	
//	cout << a;
//	
//	return 0;
//}


int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	int n;
	int t;
	int st = 0;
	int en = 0;	
	int num = 2000000000;
	int arr[100001];
	
	
	cin >> n >> t;
	
	for(int i=0; i<n; i++)
	{
		cin >> arr[i];
	}
	
	sort(arr, arr+n);
	
	while(st < n && en < n)
	{
		int res = arr[en] - arr[st];
		if(res < t)
		{
			en++;
		}
		else
		{
			num = min(num, res);
			st++;
		}
	}

	cout << num;
	
	return 0;

}


