#include <iostream>
using namespace std;

int arr[10] = { 0 };

int main()
{
	int N, K;
	cin >> N >> K;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	int count = 0;
	for (int i = N-1; i >= 0;i--)
	{
		if (arr[i] <= K)
		{
			count = count + K / arr[i];
			K = K % arr[i];
		}

		if (K == 0)
		{
			break;
		}
	}

	cout << count << '\n';
	return 0;
}