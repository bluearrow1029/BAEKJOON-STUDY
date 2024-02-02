#include <iostream>
using namespace std;

int main()
{
	int A = 0;
	int B[42] = { 0 };
	for (int i = 0; i < 10; i++)
	{
		cin >> A;
		B[A % 42] += 1;
	}

	int count = 0;
	for (int i = 0; i < 42; i++)
	{
		if (B[i] > 0)
			count++;
	}

	cout << count << endl;
}