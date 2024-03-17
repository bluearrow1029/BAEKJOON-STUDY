#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	int a, b;
	int result;
	for (int i = 0; i < T; i++)
	{
		result = 1;
		cin >> a >> b;

		for (int j = 0; j < b; j++)
		{
			result *= a;
			result %= 10;
		}

		if (result == 0)
		{
			cout << 10 << '\n';
		}
		else
		{
			cout << result << '\n';
		}
	}
	return 0;
}