#include <iostream>
using namespace std;

int w[101] = { 0 };
int v[101] = { 0 };
int dp[101][100001] = { 0 };

int main()
{
	int N;
	cin >> N;

	int K;
	cin >> K;

	for (int i = 1; i <= N; i++)
	{
		cin >> w[i] >> v[i];
	}

	for (int i = 1; i <= N; i++)
	{
		for (int j = 1; j <= K; j++)
		{
			if (w[i] <= j)
			{
				dp[i][j] = max(dp[i - 1][j], dp[i - 1][j - w[i]] + v[i]);
			}
			else
			{
				dp[i][j] = dp[i - 1][j];
			}
		}
	}
	cout << dp[N][K];
	return 0;
}