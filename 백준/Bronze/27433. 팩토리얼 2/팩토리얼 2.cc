#include <iostream>
using namespace std;

long long factorial(int n)
{
	if (n == 0)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	cout << factorial(N);
}