#include <iostream>
using namespace std;

int arr[501][501] = { 0 };

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			cin >> arr[i][j];
		}
	}

	int result = 0;
	
	for (int i = 2; i <= N; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			arr[i][j] = max(arr[i - 1][j - 1], arr[i - 1][j]) + arr[i][j];
		}
	}

	for (int i = 1; i <= N; i++)
	{
		if (result < arr[N][i])
		{
			result = arr[N][i];
		}
	}

	cout << result;
	return 0;
}