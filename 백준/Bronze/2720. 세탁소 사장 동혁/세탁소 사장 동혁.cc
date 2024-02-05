#include <iostream>

using namespace std;

int main()
{
	int T, C;
	int quarter = 0;
	int dime = 0;
	int nickel = 0;
	int penny = 0;

	cin >> T;

	for (int i = 0; i < T; i++)
	{
		cin >> C;

		quarter = C / 25;
		C %= 25;

		dime = C / 10;
		C %= 10;

		nickel = C / 5;
		C %= 5;

		penny = C / 1;

		cout << quarter << ' ' << dime << ' ' << nickel << ' ' << penny << endl;
	}
	return 0;
}