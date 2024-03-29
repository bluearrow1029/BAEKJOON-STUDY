#include <iostream>
using namespace std;

int dp[101][10] = { 0 };

#define mod 1000000000

int main()
{
	int N;
	cin >> N;

	for (int i = 1; i < 10; i++)
	{
		dp[1][i] = 1;
	}

	for (int i = 2; i <= N; i++)
	{
		for (int j = 0; j <= 9; j++)
		{
			if (j == 0)
			{
				dp[i][0] = dp[i - 1][1];
			}
			else if (j == 9)
			{
				dp[i][9] = dp[i - 1][8];
			}
			else
			{
				dp[i][j] = dp[i - 1][j - 1] + dp[i - 1][j + 1];
			}
			dp[i][j] %= mod;
		}
	}

	int result = 0;
	for (int i = 0; i < 10; i++)
	{
		result += dp[N][i];
		result %= mod;
	}
	cout << result << '\n';

	return 0;
}