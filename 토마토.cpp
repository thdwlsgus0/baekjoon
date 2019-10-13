#include <iostream>
#include <queue>
#define SIZE 1000
using namespace std;
int graph[SIZE][SIZE];
int visit[SIZE][SIZE];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };
int n, m;
queue<pair<int, int>> q;
void bfs(int i, int j, int cnt)
{
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		int point = 0;
		for (int k = 0; k < 4; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx >= 0 && nx < m && ny >= 0 && ny < n)
			{
				if (graph[nx][ny] == 0 && visit[nx][ny] == -1)
				{
					visit[nx][ny] = visit[x][y] + 1;
					q.push({ nx,ny });
				}
			}
		}
	}
}
int main(void)
{
	cin >> n >> m;
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			cin >> graph[i][j];
			visit[i][j] = -1;
			if (graph[i][j] == 1)
			{
				visit[i][j] = 0;
				q.push({ i,j });
			}
		}
	}
	bfs(0, 0);
	
	
	return 0;
}