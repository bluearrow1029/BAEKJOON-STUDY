#include <iostream>
using namespace std;

long long arr[100000];
long long distances[100000];

long long gcd(long long a, long long b)
{
	long long temp = a % b;
	if (temp == 0)
	{
		return b;
	}
	else
	{
		return gcd(b, temp);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N - 1; i++)
	{
		distances[i] = arr[i + 1] - arr[i];
	}
	
	int GCD = distances[0];
	for (int i = 0; i < N - 1; i++)
	{
		GCD = gcd(GCD, distances[i]);
	}

	int count = 0;
	for (int i = 0; i < N - 1; i++)
	{
		count += distances[i] / GCD - 1;
	}

	cout << count;
	return 0;
}