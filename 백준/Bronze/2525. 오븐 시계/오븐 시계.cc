#include <iostream>
using namespace std;

int main()
{
	int A, B, C;

	cin >> A >> B;
	cin >> C;

	B += C;

	if (B / 60 > 0)
	{
		A = A + B / 60;
		if (A > 23)
			A = A - 24;
	
		B = B % 60;
	}

	cout << A << " " << B;
}