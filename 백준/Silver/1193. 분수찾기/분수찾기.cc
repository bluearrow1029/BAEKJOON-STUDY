#include <iostream>

using namespace std;

int main()
{
	int X;
	cin >> X;

	int a = 1;

	while (X > a)
	{
		X -= a;
		a++;
	}

	if (a % 2 == 0)
	{
		cout << X << "/" << a - X + 1;
	}
	else
	{
		cout << a - X + 1 << "/" << X;
	}

	return 0;
}