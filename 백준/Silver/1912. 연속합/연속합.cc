#include <iostream>
using namespace std;

int arr[100001] = { 0 };
int sum[100001] = { 0 };
int main()
{
	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
		sum[i] = arr[i];
	}

	int result = sum[0];

	for (int i = 1; i < N; i++)
	{
		sum[i] = max(sum[i], sum[i - 1] + arr[i]);
		if (sum[i] > result)
		{
			result = sum[i];
		}
	}

	cout << result << '\n';
	return 0;
}