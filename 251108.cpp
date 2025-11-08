#include <bits/stdc++.h>
#define MAX 100000001

using namespace std;

//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//	int V, E;
//	cin >> V >> E;
//	int graph[401][401] = { 0, };
//	for (int i = 0; i < E; i++)
//	{
//		int a, b, c;
//		cin >> a >> b >> c;
//		graph[a][b] = c; 
//	}
//
//	for (int k = 1; k <= V; k++) 
//		for (int i = 1; i <= V; i++)
//			for (int j = 1; j <= V; j++)
//				if (graph[i][k] && graph[k][j])
//				{
//					if (graph[i][j] != 0)
//						graph[i][j] = min(graph[i][j], graph[i][k] + graph[k][j]);
//					else
//						graph[i][j] = graph[i][k] + graph[k][j];
//				}
//
//	int answer = 1000001;
//	int check = 0;
//	for (int i = 1; i <= V; i++) 
//	{
//		if (graph[i][i] != 0) {
//			answer = min(answer, graph[i][i]);
//			check = 1;
//		}
//	}
//
//	if (check == 0)
//		cout << "-1\n";
//	else
//		cout << answer << "\n";
//
//
//	return 0;
//}

int n, m;
int d[102][102] = { 0, };
int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	
	cin >> n >> m;
	
	for (int i = 1; i <= 101; i++)
		for (int j = 1; j <= 101; j++)
		{
			if (i == j) d[i][j] = 0;
			else d[i][j] = MAX;
		}
	
	while (m--)
	{
		int a, b, c;
		cin >> a >> b >> c;
		d[a][b] = min(d[a][b], c);
	}
	
	for (int k = 1; k <= n; k++)
		for (int i = 1; i <= n; i++)
			for (int j = 1; j <= n; j++)
				d[i][j] = min(d[i][j], d[i][k] + d[k][j]);

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= n; j++)
		{
			if (d[i][j] == MAX) cout << "0 ";
			else cout << d[i][j] << " ";
		}
		cout << "\n";
	}
}







