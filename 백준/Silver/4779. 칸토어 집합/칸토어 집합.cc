#include <iostream>
#include <cmath>
using namespace std;

void cantor(int N)
{
	if (N == 0)
	{
		cout << "-";
		return;
	}
	
	cantor(N - 1);
	for (int i = 0; i < pow(3, N-1); i++)
	{
		cout << " ";
	}
	cantor(N - 1);
}

int main()
{
	int N;
	while (cin >> N)
	{
		cantor(N);
		cout << '\n';
	}
	return 0;
}