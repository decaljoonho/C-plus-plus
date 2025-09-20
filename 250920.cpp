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

//int map[100][100], check[100][100], n;
//int answer = INT_MIN;
//int dx[4] = { 0,0,1,-1 };
//int dy[4] = { 1,-1,0,0 }; 
//
//void dfs(int y, int x) {
//	for (int i = 0; i < 4; i++) { 
//		int nx = dx[i] + x; 
//		int ny = dy[i] + y; 
//		if (nx < 0 || nx >= n || ny < 0 || ny >= n) continue;
//		if (check[ny][nx] == -1) continue;  
//		check[ny][nx] = -1; 
//		dfs(ny, nx); 
//	}
//	return; 
//}
//int main() {
//	ios_base::sync_with_stdio(false);
//	cin.tie(0);
//	cout.tie(0);
//	
//	cin >> n;
//	for (int y = 0; y < n; y++) {
//		for (int x = 0; x < n; x++) {
//			cin>>map[y][x];
//		}
//	}
//	for (int h = 0; h <= 100; h++) { 
//		for (int y = 0; y < n; y++) {
//			for (int x = 0; x < n; x++) {
//				if (h >= map[y][x])check[y][x] = -1; 
//				else { 
//					check[y][x] = 0; 
//				}
//			}
//		}
//		int cnt = 0; 
//		for (int x = 0; x < n; x++) {
//			for (int y = 0; y < n; y++) {
//				if (check[y][x] == 0) {
//					check[y][x] = -1; 
//					cnt++; 
//					dfs(y, x); 
//				}
//			}
//		}
//		answer = max(answer, cnt); 
//	}
//	cout << answer; 
//	return 0; 
//}


//int n, cnt;
//char grid[101][101]; 
//string input; 
//bool visited[101][101]; 
//
//int dx[] = { 1,-1,0,0 }; 
//int dy[] = { 0,0,1,-1 };
//
//void dfs(int zx, int zy)
//{
//	if (visited[zx][zy]) return;  
//
//	visited[zx][zy] = true; 
//
//	for (int i = 0; i < 4; i++) 
//	{
//		int X = dx[i] + zx; 
//		int Y = dy[i] + zy;
//		
//		if ((grid[zx][zy] == grid[X][Y]) && !visited[X][Y])  
//		{
//			dfs(X, Y);
//		}
//	}
//}
//
//int main(void)
//{
//	ios::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//
//
//	cin >> n;
//	for (int i = 0; i < n; i++)
//	{
//		cin >> input; 
//		for (int j = 0; j < n; j++) 
//			grid[i][j] = input[j];
//	}
//	
//
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (!visited[i][j])
//			{
//				dfs(i, j);
//				cnt++;
//			}
//		}
//	}
//		
//	cout << cnt << " "; 
//	cnt = 0; 
//	memset(visited, false, sizeof(visited));
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (grid[i][j] == 'G') grid[i][j] = 'R'; 
//		}
//	}
//
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n; j++)
//		{
//			if (!visited[i][j]) 
//			{
//				dfs(i, j); 
//				cnt++;
//			}
//		}
//	}
//
//	cout << cnt; 
//
//	return 0;
//}


int arr[500][500];
int visit[500][500];
int n,m;
int dx[] = {-1, 1, 0, 0};
int dy[] = {0, 0, -1, 1};

int dfs(int x, int y)
{
	if(x == n-1 and y == m-1) return 1;
	if(visit[x][y] == -1)
	{
		visit[x][y] = 0;
		for(int i=0; i<4; i++)
		{
			int xx = dx[i] + x;
			int yy = dy[i] + y;
			if(xx>=0 and xx<n and yy>=0 and yy<m)
			{
				if(arr[xx][yy] < arr[x][y])
				{
					visit[x][y] += dfs(xx, yy);
				}
			}
		}
	}
	return visit[x][y];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin >> n >> m;
	
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cin >> arr[i][j];
			visit[i][j] = -1;
		}
	}
	
	cout << dfs(0,0) << endl;
	return 0;
}
