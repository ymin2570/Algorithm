#include<iostream>
#include<queue>
#include<utility>
using namespace std;

int map[100001] = { 0, };
bool check[100001] = { false, };
queue<int> q;

int Find(int K)
{
	while (!q.empty())
	{
		int x = q.front();
		q.pop();
		if (x - 1 >= 0 && check[x - 1] == false)
		{
			map[x - 1] = map[x] + 1;
			q.push(x - 1);
			check[x - 1] = true;
		}
		if (x + 1 <= 100000  && check[x + 1] == false)
		{
			map[x + 1] = map[x] + 1;
			q.push(x + 1);
			check[x + 1] = true;
		}
		if (2 * x <= 100000 && check[2 * x] == false)
		{
			map[2 * x] = map[x] + 1;
			q.push(2 * x);
			check[2 * x] = true;
		}
	}
	return map[K];
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int N, K;
	cin >> N >> K;

	q.push(N);
	check[N] = true;
	cout << Find(K);
	return 0;
}