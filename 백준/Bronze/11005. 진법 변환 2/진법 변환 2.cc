#include <iostream>

using namespace std;

int main()
{
	int N, B;
	cin >> N >> B;

	int temp;
	string result;
	while (N > 0)
	{
		temp = N % B;
		if (temp > 9)
		{
			result += temp + 'A' - 10;
		}
		else
		{
			result += temp + '0';
		}
		N /= B;
	}

	for (int i = result.length() - 1; i >= 0; i--)
	{
		cout << result[i];
	}

	return 0;
}