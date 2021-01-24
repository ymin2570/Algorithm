#include<iostream>
#define MAX 16
using namespace std;

int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int N, result = 0;
	int T[MAX + 1] = { 0, }, P[MAX + 1] = { 0, }, Value[MAX + 1] = { 0, };
	cin >> N;
	for (int i = 1; i <= N; i++)
	{
		cin >> T[i] >> P[i];
	}

	for (int i = 1; i <= N; i++)
	{
		if (i + T[i] <= N + 1)
		{
			Value[i + T[i]] = max(Value[i + T[i]], Value[i] + P[i]);
			result = max(result, Value[i + T[i]]);
		}

		Value[i + 1] = max(Value[i + 1], Value[i]);
		result = max(result, Value[i + 1]);
	}

	cout << result;
	return 0;
}