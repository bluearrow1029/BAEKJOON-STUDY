#include <iostream>
using namespace std;

int main()
{
	int A, B, C;
	cin >> A >> B >> C;

	int result;

	if (A == B && B == C)
		result = 10000 + A * 1000;
	else if (A == B || B == C || A == C)
	{
		if (B == C)
			result = 1000 + B * 100;
		else
			result = 1000 + A * 100;
	}
	else
	{
		if (A >= B && A >= C)
			result = A * 100;
		else if (B >= A && B >= C)
			result = B * 100;
		else
			result = C * 100;
	}

	cout << result;
}