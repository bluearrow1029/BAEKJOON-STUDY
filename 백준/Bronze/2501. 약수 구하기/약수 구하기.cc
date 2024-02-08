#include <iostream>

using namespace std;

int main()
{
	int N, K;
	cin >> N >> K;

	int arr[10000] = {};

	int index = 0;
	int count = 0;
	
	for (int i = 1; i <= N; i++)
	{
		if (N % i == 0)
		{
			arr[index] = i;
			index++;
			count++;
		}
	}
	
	if (count < K)
	{
		cout << 0;
	}
	else
	{
		cout << arr[K - 1];
	}

	return 0;
}