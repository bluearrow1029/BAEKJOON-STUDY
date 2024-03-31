#include <iostream>
#include <algorithm>
using namespace std;

int N, M;
int arr[100000];

void binarySearch(int a)
{
	int left = 0;
	int mid = 0;
	int right = N - 1;

	while (left <= right)
	{
		mid = (left + right) / 2;

		if (arr[mid] == a)
		{
			cout << 1 << '\n';
			return;
		}
		else if (arr[mid] > a)
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	cout << 0 << '\n';
	return;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	sort(arr, arr + N);

	int temp;
	cin >> M;
	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		binarySearch(temp);
	}

	return 0;
}