#include<iostream>
using namespace std;

int arr[10] = { 0, };
int print[10] = { 0, };
bool check[10] = { false, };

void Recursion(int N, int M, int count, int idx)
{
	for (int i = idx; i < N; i++)
	{
		if (!check[i])
		{
			print[count] = arr[i];
			check[i] = true;
			count++;
			if (M == count)
			{
				for (int j = 0; j < M; j++)
					cout << print[j] << " ";
				cout << "\n";
			}
			if (M > count)
				Recursion(N, M, count, i);
			count--;
			print[count] = 0;
			check[i] = false;
		}
	}
	return;
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int N, M, idx = 0;
	cin >> N >> M;
	for (int i = 0; i < N; i++)
	{
		arr[i] = i + 1;
	}
	Recursion(N, M, idx, 0);
	return 0;
}