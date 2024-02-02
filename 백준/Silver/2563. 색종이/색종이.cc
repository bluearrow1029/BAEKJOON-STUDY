#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int arr[100][100] = { 0 };

	int x, y = 0;
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> x >> y;

		for (int j = x; j < x + 10; j++)
		{
			for (int k = y; k < y + 10; k++)
			{
				if (arr[j][k] == 0)
				{
					arr[j][k] = 1;
					result += 1;
				}
			}
		}
	}
	cout << result;
	return 0;
}