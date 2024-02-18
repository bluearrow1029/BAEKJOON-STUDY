#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int temp = 0;
	int sum = 0;
	for (int i = 0; i < N; i++)
	{
		temp = i;
		sum = i;

		while (temp != 0)
		{
			sum += temp % 10;
			temp /= 10;
		}

		if (sum == N)
		{
			cout << i;
			return 0;
		}
	}

	cout << 0;
	return 0;
}