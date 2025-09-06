#include <cstdio>
#include <algorithm>
#include <queue>
#include <stack>
#include <string.h>
#include <iostream>
//#include <map>
#include <stdio.h>
#include <vector>

//#define MAX 1e9


using namespace std;

// vector <pair <int, int> > graph[1001];

// scanf("%d %d %d", &from, &to, &cost);
// graph[from].push_back(make_pair(to, cost));
// graph[to].push_back(make_pair(from, cost));

// ¿¹) 
//void dfs(int from, int val)
//{
//	check[from] = true;
//	
//	if(from == to)
//	{
//		result = val;
//		return ;
//	}
//	
//	for(int i=0; i<graph[from].size(); i++)
//	{
//		int next_node = graph[from][i].first;
//		int next_val = graph[from][i].second;
//		if(!check[next_node])
//			dfs(next_node, val + next_val);
//	
//	}
//}



//int main(void)
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	int n,m,a,b,c;
//	
//	cin >> n >> m;
//	
//	vector<pair <int, int> > vec[n+1];
//	queue<pair <int, int> > q;
//	
//	for(int i=0; i<n; i++)
//	{
//		cin >> a >> b >> c;
//		vec[a].push_back({b, c});
//		vec[b].push_back({a, c});
//	}
//	
//	for(int i=0; i<m; i++)
//	{
//		int min = 1e9;
//		bool v[n+1];
//		memset(v, false, sizeof(bool) * (n+1));
//		cin >> a >> b;
//		q.push({a,0});
//		v[a] = true;
//		
//		
//	}
//}


//vector<pair <int ,int> > adj[1001];
//bool visited[1001];
//
//int st, en, mn;
//
//void dfs(int cur, int sum)
//{
//	visited[cur] = true;
//	
//	if(cur == en)
//	{
//		mn = min(mn, sum);
//		return;
//	}
//	
//	for (auto[cost, nxt] : adj[cur])
//	{
//		if(!visited[nxt])
//		{
//			dfs(nxt, sum + cost);			
//		}
//	}
//}
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	int n,m;
//	int a,b,c;
//	
//	cin >> n >> m;
//	
//	for(int i=0; i<n; i++)
//	{
//		cin >> a >> b >> c;
//		adj[a].push_back({c,b});
//		adj[b].push_back({c,a});
//	}
//	
//	while(m--)
//	{
//		mn = 1e9;
//		cin >> st >> en;
//		dfs(st, 0);
//		cout << mn << "\n";
//		fill(visited, visited + 1001, false);
//	}
//}

//int N,M;
//
//vector<pair<int,int> >graph[1001];
//int visited[1001];
// 
//int ans;
// 
//void dfs(int x, int y, int dist){
//    visited[x] = 1;
//    
//    if(x==y)
//    {
//        ans = dist;
//        return;
//    }
//    
//    for(int i=0; i<graph[x].size(); i++)
//    {
//        int cost = dist + graph[x][i].second;
//       
//		  int next_node = graph[x][i].first;
//        
//		  if(visited[next_node]) continue;
//        
//		  visited[next_node]=1;
//        dfs(graph[x][i].first, y, cost) ;
//    }
//}
// 
// 
//int main()
//{
//    ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    cin>>N>>M;
//    
//    for(int i=0; i<N-1; i++)
//    {
//        int a,b,dist; cin>>a>>b>>dist;
//        graph[a].push_back({b,dist});
//        graph[b].push_back({a,dist});
//    }
//    
//    
//    for(int i=0; i<M; i++)
//    {
//        int a,b; cin>>a>>b;
//        dfs(a,b,0);
//        
//        memset(visited,0,sizeof(visited));
//        
//		  cout<<ans<<'\n';
//    }
//    
//}


vector<pair<int,int> > list[10001];

bool c[10001] = {false};

int Dfs(int x)
{
	if (c[x]) return -1000;
	int sum = 0;
	c[x] = true;
	for (int i = 0; i < list[x].size(); i++)
	{
		int node = list[x][i].first;
		
		int value = list[x][i].second;
		
		sum = max(sum, value + Dfs(node));
	}
	
	return sum;
}


int main()
{
	cin.tie(0);
	cout.tie(0);
	ios::sync_with_stdio(false);
	
	int n;
	int answer = 0;
	cin >> n;
	
	for (int i = 1; i < n; i++)
	{
		int v1, v2, v3;
		
		cin >> v1 >> v2 >> v3;
		
		list[v1].push_back(make_pair(v2, v3));
		list[v2].push_back(make_pair(v1, v3));
	}
	
	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++) c[j] = false;
		answer = max(answer,Dfs(i));
	}
	
	cout << answer;
}

