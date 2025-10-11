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

using namespace std;
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int N=0;
//	int M=0;
//	int c=1000;
//	int d=1000;
//	
//	cin>>N>>M;
//	
//	int a=0;
//	int b=0;
//	
//	while(M--)
//	{
//		cin >> a >> b;
//		c = min(c, a);
//		d = min(d, b);	
//	}
//	
//	 cout << min((N/6+1)*c, min(N/6*c + N%6*d, N*d)) << '\n';
//	 
//	 return 0;
//}

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int a,b;
//	int cnt = 0;
//	
//	cin >> a >> b;
//	
//	for(int i = b; i>a; i--)
//	{
//		if(b%2==0)
//		{
//			b=  b/2;
//			cnt++;
//		}
//		if(b%2==1)
//		{
//			b=b-'1';
//			cnt++;
//		}
//		if(!b%2==0 and !b%2==1)
//		{
//			cnt=-1;
//		}
//	}
//	printf("%d", cnt);
//	
//	
//}
	
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int a,b;
//	cin >> a >> b;
//	
//	int result = 1;
//	
//	while(true)
//	{
//		if(a==b)
//			break;
//		
//		else if (a>b)
//		{
//			result = -1;
//			break;
//	    }
//		
//		if (b%2 == 0)
//			b = b/2;
//		
//		else if (b%10==1)
//			b= (b-1) / 10;
//		
//		else
//		{
//			result = -1;
//			break;
//	    }
//			
//	    result ++;
//	}
//	
//	cout << result;
//	return 0;
//}


//int main() {
//	
//	while(true) {
//	
//	int i = 1;
//	int l, p, g;
//	cin >> l >> p >> g;
//	
//	if (l == 0 && p == 0 && g == 0)
//		break;
//		
//	int sum = l * (g / p);
//		
//	if (l > (g % p))
//		sum += (g % p);
//	
//	else 
//		sum += l;
//	
//	printf("Case ")
//
//	i++;
//	}
//	
//	return 0;
//}

//int main()
//{
//    ios_base::sync_with_stdio(false);
//	cout.tie(0);
//    cin.tie(0);
//    
//    int cnt = 1;
//   
//    while (1) 
//    {
//        int L, P, V;
//        cin >> L >> P >> V;
//
//        if (L==0 && P==0 && V==0) 
//			break;
//			
//        int use = V / P;
//        int remain = V % P;
//        
//		if (L < remain) 
//			remain = L;
//
//        int result = L * use + remain;
//
//        cout << "Case "<< cnt << ": " << result << endl;
//        
//		cnt++;
//    }
//    
//	return 0;
//}

//int N;
//vector<int> cost;

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cout.tie(0);
//	cin.tie(0);
//	
//	int N;
//    vector<int> cost;
//    
//	int num, res=0;
//	
//	cin >> N;
//	
//	for(int i=0; i<N; i++)
//	{
//		cin >> num;
//		cost.push_back(num);
//	}
//	
//	sort(cost.begin(), cost.end(), greater<int>());
//	
//	for(int i=0; i<cost.size(); i++)
//	{
//		if((i+1)%3==0)
//		{
//			continue;
//		}
//		res += cost[i];
//	}
//	
//	cout << res << endl;
//	return 0;
//}


//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int n;
//	
//	int cost[100001];
//	int dist[100001];
//	
//	long long total= 0;
//	long long cnt;
//	
//	cin >> n;
//	
//	for(int i=1; i<n; i++)
//	{
//		cin >> dist[i];
//	}
//	
//	for(int i=0; i<n; i++)
//	{
//		cin >> cost[i];
//	}
//	
//	cnt = cost[0];
//	total = cnt * dist[1];
//	
//	for(int i=1; i<n; i++)
//	{
//		if(cnt < cost[i])
//		{
//			total += cnt * dist[i+1];
//		}
//		
//		else
//		{
//			cnt = cost[i];
//			total += cnt * dist[i+1];
//		}
//	}
//	
//	printf("%lld\n", total);
//	
//	return 0;
//}


//int main()
//{
//    int N;
//    
//	vector<int> price;
//    vector<int> distances;
//    
//	ios::sync_with_stdio(false);
//    cin.tie(0);
//    cout.tie(0);
//
//    cin >> N;
//
//   
//    for (int i = 0; i < N - 1; i++)
//    {
//        int p;
//        cin >> p;
//        distances.push_back(p);
//    } 
//    for (int i = 0; i < N; ++i) {
//        int p1;
//        cin >> p1;
//        price.push_back(p1);
//    }
//
//    long long sum = 0;
//    long long smallest = price[0];
//    
//    for (int i = 0; i < N-1; ++i)
//    {
//        if (price[i] < smallest) {
//            smallest = price[i];
//        }
//        
//		sum += smallest *distances[i];   
//    }
//    
//    cout << sum << "\n";
//}




