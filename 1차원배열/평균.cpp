#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	float score[1000] = { 0, };
	int N, max = 0;
	double sum = 0;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		cin >> score[i];
		if (score[i] > max)
			max = score[i];
	}

	for (int i = 0; i < N; i++)
	{
		score[i] = (float)(score[i] / max) * 100;
		sum += score[i];
	}
	cout.precision(7);
	cout << sum / N;
	return 0;
}