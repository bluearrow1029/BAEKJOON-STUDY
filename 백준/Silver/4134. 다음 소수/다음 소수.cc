#include <iostream>
#include <cmath>
using namespace std;


bool isPrime(long long n)
{
	for (int i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			return false;
		}
	}

	return true;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	long long n;

	for (int i = 0; i < T; i++)
	{
		cin >> n;

		if (n < 3)
		{
			cout << 2 << '\n';
		}
		else if (n == 3)
		{
			cout << 3 << '\n';
		}
		else
		{
			while (!(isPrime(n)))
			{
				n++;
			}
			cout << n << '\n';
		}
	}
	return 0;
}