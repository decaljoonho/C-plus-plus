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
#define MAX 101

using namespace std;

//while(!q.empty())
//{
//	int a = q.front().first;
//	int b = q.front().second;
//	q.pop();
//	
//	for(int i=0; i<4; i++)
//	{
//		int ax = a + dx[i];
//		int by = b + dy[i];
//		
//		if(a<=x && 0<=by && ax<n && by < m && map[ax][by] == 1 && check[ax][by] == false)
//		{
//			q.push({ax, by});
//			check[ax][by] = true;
//		}
//	}
//}
//------------------------
//int n;
//int cnt = 0;
//string arr[26];
//bool visited[26][26] = {0, };
//
//
//
//
//int main()
//{
//	ios_base::sync_with_stdio(false);
//    cin.tie(NULL);
//    cout.tie(NULL);
//    
//    
//}

// scanf("%1d", &map[i][j])

//int main()
//{
//	ios_base::sync_with_stdio(false);
//	cin.tie(NULL);
//	cout.tie(NULL);
//	
//	int arr[501][501];
//	bool ch[501][501];
//	
//	int n,m;
//	int ar = 0;
//	int max = 0;
//	int num = 0;
//	
//	queue<pair <int, int> > Q;
//	
//	cin >> n >> m;
//	
//	int dx[4] = {1,0,-1,0};
//	int dy[4] = {0,1,0,-1};
//	
//	for(int=0; i<n; i++)
//	{
//		for(int j=0; j<m; j++)
//		{
//			cin >> arr[i][j];
//		}
//	}
//	
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<m; j++)
//		{
//			if(ch[i][j] || arr[i][j] == 0)
//			{
//				continue;
//			}
//			
//			ch[i][j] = 1;
//			Q.push({i, j})
//			num++;
//			
//			while(!Q.empty())
//			{
//				pair<int ,int> cur = Q.front();
//				Q.pop();
//				
//				ar++;
//				
//				for(int )
//			}
//		}
//	}
//	
//	
//	
//	
//	
//}

//using namespace std;
//
//int main(){
//	
//	ios::sync_with_stdio(0);
//	cin.tie(0);
//	cout.tie(0);
//	
//	int arr[501][501];
//	bool chk[501][501];
//	int n,m; 
//	
//	int area = 0;  
//	int max = 0; 
//	int num = 0;
//	
//	queue<pair<int,int> > Q;
//
//	cin >> n >> m;
//	
//	int dx[4] = {1,0,-1,0};
//	int dy[4] = {0,1,0,-1};
//	
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<m; j++)
//		{
//			cin >> arr[i][j];	
//		}		
//	} 
//	
//	for(int i=0; i<n; i++)
//	{
//		for(int j=0; j<m; j++)
//		{
//			
//			if(chk[i][j] || arr[i][j]==0)
//				continue;
//				
//			chk[i][j] = 1;
//			Q.push({i,j});
//			
//			area = 0;
//			
//			num++;
//			
//			while(!Q.empty())
//			{
//				pair<int,int> cur = Q.front();
//				Q.pop();
//				
//				area++;
//				
//				for(int dir=0; dir<4; dir++)
//				{
//			
//					int nx = cur.first + dx[dir];
//					int ny = cur.second + dy[dir];
//					
//					if(nx < 0 || nx >= n || ny < 0 || ny >=m)
//						continue;
//						
//					if(chk[nx][ny] || arr[nx][ny]==0)
//						continue;
//					
//					chk[nx][ny]=1;
//					Q.push({nx,ny});
//				}
//				
//				if(max < area)
//					max = area;
//				
//			}
//		}
//	}
//	
//	cout << num << "\n" << max;
//	
//	return 0; 
//
//}



//int map[25][25];
//int visited[25][25];
//
//vector<int> V;
//
//int dr[4] = {-1, 0, 1, 0};
//int dc[4] = {0,1,0,-1};
//int N;
//int cnt;
//
//void dfs(int r, int c)
//{
//	for(int i=0; i<4; i++)
//	{
//		int nr = r + dr[i];
//		int nc = c = dc[i];
//		
//		if(nr >= N || nr<0 || nc>=N || nc<0)
//		{
//			continue;
//		}
//		
//		if(visited[nr][nc] == 0 && map[nr][nc] == 1)
//		{
//			visited[nr][nc] = 1;
//			cnt++;
//			dfs(nr,nc);
//		}
//	}
//}
//
//int main()
//{
//	int res = 0;
//	
//	cin >> N;
//	string str;
//	
//	for(int i=0; i<N; i++)
//	{
//		cin >> str;
//		
//		for(int j=0; j<str.length(); j++)
//		{
//			visited[i][j] = 0;
//			
//			if(str[j] == '1')
//			{
//				map[i][j] = 1;
//			}
//			else
//			{
//				map[i][j] = 0;
//			}
//		}
//	}
//	
//	for(int i=0; i<N; i++)
//	{
//		for(int j=0; j<N; j++)
//		{
//			if(map[i][j] == 1 && visited[i][j] == 0)
//			{
//				visited[i][j] == 1;
//				cnt = 1;
//				dfs(i,j);
//				V.push_back(cnt);
//				res++;
//			}
//		}
//	}
//	
//    sort(V.begin(), V.end());
//	cout << res << "\n";
//	
//	for(int i=0; i<V.size(); i++)
//	{
//		cout << V[i] << "\n";
//	}
//	return 0;
//}

//int map[25][25];
//int visited[25][25];
//vector<int> cntVec;
// 
//
//int dr[4] = {-1,0,1,0};
//int dc[4] = {0,1,0,-1};
//int N;
//int cnt;
// 
//void dfs(int r, int c){
// 
//    for(int i = 0; i<4; i++){
//        
//        int nr = r + dr[i];
//        int nc = c + dc[i];
//        
//        if(nr>=N || nr<0 || nc>=N || nc<0) continue;
//        
//        if(visited[nr][nc]==0 && map[nr][nc]==1){   
//            visited[nr][nc] = 1;                    
//            cnt+=1;                                 
//            dfs(nr,nc);
//        }
//    }
// 
//}
// 
// 
//int main(){
//    
//    int res=0;
//    
//    cin >> N;
//    string str;
//    
//    for(int i = 0; i<N; i++){
//        cin >> str;
//        for(int j = 0; j<str.length(); j++){           
//            visited[i][j] = 0;
//            
//            if(str[j] == '1'){
//                map[i][j] = 1;
//            }
//            else map[i][j] = 0;
//        }
//    }
//    
//    
//    for(int i = 0; i<N; i++){
//        for(int j = 0; j<N; j++){
//            
//            if(map[i][j]==1 && visited[i][j]==0){
//                visited[i][j] = 1;
//                cnt = 1;                       
//                dfs(i,j);
//                cntVec.push_back(cnt);
//                res++;                          
//            }
//        }
//    }
//    
//    sort(cntVec.begin(), cntVec.end());
//    cout << res << "\n";
//    
//    for(int i = 0; i<cntVec.size(); i++){
//        cout << cntVec[i] << "\n";
//    }
// 
//    return 0;
//}


//int N,M;
//int m1[101][101];
//int visited[101][101];
//int m2[101][101];
//
//int x_dir[4] = {-1, 1, 0, 0};
//int y_dir[4] = {0, 0, -1, 1};
//
//queue<pair<int, int> > q;
//
//void bfs(int st_x, int st_y)
//{
//	visited[st_x][st_y] = 1;
//	q.push(make_pair(st_x, st_y));
//	m2[st_x][st_y]++;
//	
//	while (q.empty())
//	{
//		int x = q.front().first;
//		int y = q.front().second;
//		
//		q.pop();
//		
//		for(int i=0; i<4; i++)
//		{
//			int x_new = x + x_dir[i];
//			int y_new = y + y_dir[i];
//			
//			if ( (0 <= x_new && x_new < N) && (0 <= y_new && y_new < M) 
//            && !visited[x_new][y_new] && m1[x_new][y_new] == 1 )
//            {
//            	visited[x_new][y_new] = 1;
//            	q.push(make_pair(x_new, y_new));
//            	m2[x_new][y_new] = m2[x][y] + 1;
//			}
//		}
//		
//	}
//}
//
//int main()
//{
//	cin >> N >> M;
//	
//	for(int i=0; i<N; i++)
//	{
//		string row;
//		
//		cin >> row;
//		
//		for(int j=0; j<M; j++)
//		{
//			m1[i][j] = row[j]-'0';
//		}
//	}
//	
//	bfs(0,0);
//	
//	cout << m2[N-1][M-1];
//	
//}

int N, M;                 
int maze[MAX][MAX];      
int visited[MAX][MAX];        
int dist[MAX][MAX];          

int x_dir[4] = {-1, 1, 0, 0};   
int y_dir[4] = {0, 0, -1, 1};   

queue<pair<int,int> > q;      


void bfs(int start_x, int start_y){         

    visited[start_x][start_y] = 1;          
    q.push(make_pair(start_x,start_y));     
    dist[start_x][start_y]++;              


    while (!q.empty()){

      
        int x = q.front().first;
        int y = q.front().second;

      
        q.pop();

    
        for (int i=0; i<4; ++i){
            int x_new = x + x_dir[i];
            int y_new = y + y_dir[i];

           
            if ( (0 <= x_new && x_new < N) && (0 <= y_new && y_new < M) 
            && !visited[x_new][y_new] && maze[x_new][y_new] == 1 ){

                visited[x_new][y_new] = 1;             
                q.push(make_pair(x_new, y_new));       
                dist[x_new][y_new] = dist[x][y] + 1;    
            }
        }
    }
}

int main(){

    cin >> N >> M;                      

    for (int i=0; i<N; ++i){            

        string row;                     
        cin >> row;

        for (int j=0; j<M; ++j){        
            maze[i][j] = row[j]-'0';    
        }
    }

    bfs(0, 0);                          

    cout << dist[N-1][M-1];             
}
