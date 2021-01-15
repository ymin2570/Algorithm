#include<iostream>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int a;
	cin >> a;
	for (int i = 0; i < a; i++)
	{
		int b, c;
		cin >> b >> c;
		cout << "Case #" << i+1 << ": "<< b << " + " << c << " = " << b + c << "\n";
	}
	return 0;
}