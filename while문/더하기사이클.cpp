#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int a, b, N, comp, temp, count = 0;
	cin >> N;
	comp = N;

	while (1)
	{
		a = N / 10;
		b = N % 10;
		temp = a + b;
		count++;
		N = (10 * b) + (temp % 10);
		if (comp == N)
			break;
	}
	cout << count;
	return 0;
}