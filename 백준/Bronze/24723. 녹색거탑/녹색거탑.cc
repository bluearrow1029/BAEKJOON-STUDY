#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int result = 1;
	for (int i = 0; i < N; i++)
	{
		result *= 2;
	}

	cout << result;
	return 0;
}