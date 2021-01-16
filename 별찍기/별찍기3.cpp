#include<iostream>
using namespace std;

void Shape(int num) {
	for (int i = 0; i < num; i++)
	{
		for (int j = 0; j < num; j++) {
			if ((i / 729) % 3 == 1) {
				if ((j / 729) % 3 == 1) {
					cout << " ";
					continue;
				}
			}
			if ((i / 243) % 3 == 1) {
				if ((j / 243) % 3 == 1) {
					cout << " ";
					continue;
				}
			}
			if ((i / 81) % 3 == 1) {
				if ((j / 81) % 3 == 1) {
					cout << " ";
					continue;
				}
			}
			if ((i / 27) % 3 == 1) {
				if ((j / 27) % 3 == 1) {
					cout << " ";
					continue;
				}
			}
			if ((i / 9) % 3 == 1) {
				if ((j / 9) % 3 == 1) {
					cout << " ";
					continue;
				}
			}
			if ((i / 3) % 3 == 1) {
				if ((j / 3) % 3 == 1) {
					cout << " ";
					continue;
				}
			}
			if (i % 3 == 1) {
				if (j % 3 == 1) {
					cout << " ";
				}
				else
					cout << "*";
			}
			else
				cout << "*";
		}
		cout << endl;
	}
}

int main() {
	cin.tie(NULL);
	cin.sync_with_stdio(false);
	int number;
	cin >> number;
	Shape(number);
	return 0;
}