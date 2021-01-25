#include<iostream>
#include<queue>
#include<vector>
#include<utility>
using namespace std;

int map[8][8] = { 0, };
int max(int a, int b)
{
	return a > b ? a : b;
}

void Virus(int N, int M, int i, int j)
{
	queue<pair<int, int>> q;
	q.push(make_pair(i, j));
	while (!q.empty())
	{
		int x = q.front().first;
		int y = q.front().second;
		q.pop();
		for (int i = 0; i < 4; i++)
		{
			if (x - 1 >= 0 && map[x - 1][y] == 0)
			{
				map[x - 1][y] = 3;
				q.push(make_pair(x - 1, y));
			}
			if (x + 1 < N && map[x + 1][y] == 0)
			{
				map[x + 1][y] = 3;
				q.push(make_pair(x + 1, y));
			}
			if (y - 1 >= 0 && map[x][y - 1] == 0)
			{
				map[x][y - 1] = 3;
				q.push(make_pair(x, y - 1));
			}
			if (y + 1 < M && map[x][y + 1] == 0)
			{
				map[x][y + 1] = 3;
				q.push(make_pair(x, y + 1));
			}
		}
	}
}

int Zero(int N, int M)
{
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (map[i][j] == 0)
				count++;
			else if (map[i][j] == 3)
				map[i][j] = 0;
		}
	}
	return count;
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	vector<pair<int, int>> v;
	
	int temp1, temp2;
	int answer = 0, count = 0;
	int N, M;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			cin >> map[i][j];
			if (map[i][j] == 0)
			{
				v.push_back(pair<int, int>(i, j));
				count++;
			}
		}
	}

	for (int i = 0; i < count - 2; i++)
	{
		for (int j = i+1; j < count - 1; j++)
		{
			for (int k = j + 1; k < count; k++)
			{
				map[v[i].first][v[i].second] = 1;
				map[v[j].first][v[j].second] = 1;
				map[v[k].first][v[k].second] = 1;
				for (int i = 0; i < N; i++)
				{
					for (int j = 0; j < M; j++)
					{
						if (map[i][j] == 2)
						{
							temp1 = i;
							temp2 = j;
							Virus(N, M, temp1, temp2);
						}
					}
				}
				answer = max(answer, Zero(N, M));
				map[v[k].first][v[k].second] = 0;
			}
			map[v[j].first][v[j].second] = 0;
		}
		map[v[i].first][v[i].second] = 0;
	}
	cout << answer;
	return 0;
}