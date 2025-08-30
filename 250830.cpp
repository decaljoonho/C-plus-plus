#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string.h>
#include <iostream>
//#include <map>
#include <stdio.h>
#include <vector>

using namespace std;

//void dfs (int from)
//{
//	check[from] = true;
//	
//	for(int to=0; to<v[from].size(); to++)
//	{
//		int next = v[from][to];
//		if(check[next] == false)
//		{
//			dfs(next);
//		}
//	}
//}

//void bfs(int x)
//{
//	queue<int> q;
//	q.push(x);
//	
//	while(!q.empty())
//	{
//		int now = q.front();
//		check[now] = true;
//		q.pop();
//	}
//	
//	for(int i=0; i<v[now].size(); i++)
//	{
//		int next = v[now][i];
//		if(check[next] == false)
//		{
//			q.push(next);
//		}
//	}
//}

//vector<int> a[101];
//bool check[101];
//int cnt = 0;
//
//void dfs(int x)
//{
//	check[x] = true;
//	for(int i=0; i<a[x].size(); i++)
//	{
//		int y = a[x][i];
//		if(!check[y])
//		{
//			dfs(y);
//			cnt ++;
//		}
//	}
//}
//
//int main()
//{
//	int n,m;
//	int b,c;
//	cin >> n >> m;
//	for(int i=0; i<m; i++)
//	{
//		cin >> b >> c;
//		a[b].push_back(c);
//		a[c].push_back(b);
//	}
//	
//	dfs(1);
//	printf("%d\n", cnt);
//	
//}

// ios_base::sync_with_stdio(false);
// cin.tie(NULL);
// cout.tie(NULL);

int map[1001][1001]; 
int V1[1001];
int V2[1001]; 
int n, m, v;

queue<int> q; 

void bfs()
{
	while (!q.empty()) 
	{
		int v = q.front(); 
		cout << v << " "; 
		q.pop(); 
		
		for (int j = 1; j <= n; j++)
		{
			if (map[v][j] && V1[j] == 0)
			{
				V1[j] = 1;
				q.push(j); 
			}
		}
	}
}
void dfs(int v)
{
	cout << v << " "; 
	for (int j = 1; j <= n; j++)
	{
		if (map[v][j] && V2[j]==0)
		{
			V2[j] = 1; 
			dfs(j); 
		}
	}
}
int main()
{
	cin >> n >> m >> v; 
	for (int i = 0; i < m; i++)
	{
		int a, b; cin >> a >> b; 
		map[a][b]=1; 
		map[b][a]=1; 
	}
	V2[v] = 1; 
	dfs(v); 
	cout << endl; 
	V1[v] = 1; 
	q.push(v); 
	bfs(); 

}
