#include<iostream>
#include<vector>
using namespace std;

int main()
{
	cin.tie(NULL);
	cin.sync_with_stdio(false);

	int n, Total_W;																	//Number of item, Maximum weight
	cin >> n >> Total_W;
										
	int *Weight = new int[n + 1];										//Dynamic allocation for Weight
	int *Value = new int[n + 1];											//Dynamic allocation for Value

	int** Knap = new int*[n + 1];										//Dynamic allocation for 2D array
	for (int i = 0; i < n + 1; i++)
	{
		Knap[i] = new int[Total_W + 1];
	}

	for (int i = 0; i < n + 1; i++)
	{
		for (int j = 0; j < Total_W + 1; j++)
		{
			Knap[i][j] = 0;															// Initialize to 0
		}
	}

	for (int i = 1; i < n + 1; i++)
	{
		cin >> Weight[i] >> Value[i];				//Input Weight, Value
	}

	for (int i = 0; i < n + 1; i++)						//The number of items + 1
	{
		for (int j = 0; j < Total_W + 1; j++)	//The Maximum weight + 1
		{
			if (i > 0 && Weight[i] > j)					//Cannot rob more item, same value
				Knap[i][j] = Knap[i - 1][j];
			else if (i > 0 && Weight[i] <= j)		//Can rob more item, compare and select higher value
				Knap[i][j] = Value[i] + Knap[i - 1][j - Weight[i]] > Knap[i - 1][j] ? Value[i] + Knap[i - 1][j - Weight[i]] : Knap[i - 1][j];
		}
	}

	cout << Knap[n][Total_W] << endl;			//Print out Optimal solution

	return 0;
}