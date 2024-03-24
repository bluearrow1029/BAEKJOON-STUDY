#include <iostream>
using namespace std;

int Max(int A, int B)
{
	if (A > B)
	{
		return A;
	}
	else
	{
		return B;
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int point[301] = { 0 };
	int result[301] = { 0 };
	for (int i = 1; i <= N; i++)
	{
		cin >> point[i];
	}

	result[1] = point[1];
	result[2] = point[1] + point[2];
	for (int i = 3; i <= N; i++)
	{
		result[i] = Max(result[i - 2] + point[i], result[i - 3] + point[i - 1] + point[i]);
	}
	cout << result[N] << '\n';
}