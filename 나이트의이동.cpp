#include <iostream>
#include <queue>
#define SIZE 300
using namespace std;
int visit[SIZE][SIZE];
int dx[8] = { 1,2,2,1,-1,-2,-2,-1 };
int dy[8] = { -2,-1,1,2,2,1,-1,-2 };
int width1, height1, width2, height2, length;
void bfs(int i, int j)
{
	queue<pair<int, int>> q;
	q.push({ i,j });
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		if (x == width2 && y == height2)
			break;
		q.pop();
		for (int k = 0; k < 8; k++)
		{
			int nx = x + dx[k];
			int ny = y + dy[k];
			if (nx >= 0 && nx < length && ny >= 0 && ny < length)
			{
				if(visit[nx][ny]==0)
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
	int n,length;
	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> length;
		cin >> width1 >> height1>>width2>>height2;
		bfs(width1, height1);
		cout << visit[width2][height2] << '\n';
		for (int j = 0; j < length; j++)
		{
			for (int k = 0; k < length; k++)
			{
				visit[j][k] = 0;
			}
		}
	}
	return 0;
}