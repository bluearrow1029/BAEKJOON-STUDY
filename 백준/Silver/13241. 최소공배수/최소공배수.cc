#include <iostream>

using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B;
	cin >> A >> B;

	long long lcm = 1;
	for (int i = 2; i <= A; i++)
	{
		if (A % i == 0 && B % i == 0)
		{
			lcm *= i;
			A /= i;
			B /= i;
			i -= 1;
		}
	}
	lcm *= A * B;

	cout << lcm << '\n';
	return 0;
}