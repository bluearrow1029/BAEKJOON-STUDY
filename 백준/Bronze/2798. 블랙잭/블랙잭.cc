#include <iostream>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;

	int arr[100] = { 0 };
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int answer = 0;
	for (int i = 0; i < N-2; i++)
	{
		for (int j = i + 1; j < N-1; j++)
		{
			for (int k = j + 1; k < N; k++)
			{
				if (arr[i] + arr[j] + arr[k] <= M && arr[i] + arr[j] + arr[k] > answer)
				{
					answer = arr[i] + arr[j] + arr[k];
				}
			}
		}
	}

	cout << answer;
	return 0;
}