#include <iostream>
using namespace std;

int main()
{
	int A = 1, B = 1;

	while (A != 0 && B != 0)
	{
		cin >> A >> B;

		if (cin.eof())
			break;

		cout << A + B << endl;
	}
}