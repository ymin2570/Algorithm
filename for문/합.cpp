#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int a, sum = 0;
	cin >> a;
	for (int i = 1; i <= a; i++)
	{
		sum += i;
	}
	cout << sum;
	return 0;
}