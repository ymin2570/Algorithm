#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 0; i < 9; i++)
	{
		cout << a << " * " << i + 1 << " = " << a * (i + 1) << "\n";
	}
	return 0;
}