#include <iostream>
using namespace std;

int digitChange(int num)
{
	int one = num % 10;
	int ten = (num / 10) % 10;
	int hundred = num / 100;
	int result = one * 100 + ten * 10 + hundred;
	return result;
}

int main()
{
	int A, B;
	cin >> A >> B;
	A = digitChange(A);
	B = digitChange(B);

	if (A > B)
		cout << A;
	else
		cout << B;
}