#include <iostream>

using namespace std;

void swap(int& a, int& b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

int gcd(int a, int b)
{
	int temp;
	if (a < b)
	{
		swap(a, b);
	}

	while (b != 0)
	{
		temp = a % b;
		a = b;
		b = temp;
	}

	return a;
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	long long A, B, C, D, E, F;
	cin >> A >> B >> C >> D;

	E = A * D + C * B;
	F = B * D;
	
	long long GCD = gcd(E, F);
	E /= GCD;
	F /= GCD;
	cout << E << ' ' << F << '\n';

	return 0;
}