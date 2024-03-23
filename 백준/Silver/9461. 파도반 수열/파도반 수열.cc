#include <iostream>

using namespace std;

long long arr[101] = { 0, 1, 1 };
long long P(int N)
{
	if (N < 3)
	{
		return arr[N];
	}
	else if (arr[N] == 0)
	{
		arr[N] = P(N - 2) + P(N - 3);
	}
	return arr[N];
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	int N;
	for (int i = 0; i < T; i++)
	{
		cin >> N;
		cout << P(N) << '\n';
	}

	return 0;
}