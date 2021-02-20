#include<iostream>
#include <algorithm>
using namespace std;

int arr[10] = { 0, };
int print[10] = { 0, };

void Recursion(int N, int M, int count)
{
	for (int i = 0; i < N; i++)
	{
		if(print[count] == 0)
		{
			print[count] = arr[i];
			count++;
			if (M == count)
			{
				for (int j = 0; j < M; j++)
					cout << print[j] << " ";
				cout << "\n";
			}
			if (M > count)
				Recursion(N, M, count);
			count--;
			print[count] = 0;
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
		cin >> arr[i];
	}
	sort(arr, arr + N);
	
	Recursion(N, M, idx);
	return 0;
}