#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int dp[101];

int main()
{
	int N;
	cin >> N;
	
	vector<pair<int, int>> v;
	int temp1, temp2;
	for (int i = 0; i < N; i++)
	{
		cin >> temp1 >> temp2;
		v.push_back({ temp1, temp2 });
	}

	sort(v.begin(), v.end());
	int result = 0;
	for (int i = 0; i < N; i++)
	{
		dp[i] = 1;

		for (int j = 0; j < i; j++)
		{
			if (v[i].second > v[j].second)
			{
				dp[i] = max(dp[i], dp[j] + 1);
			}
		}

		result = max(result, dp[i]);
	}

	cout << N - result;
}