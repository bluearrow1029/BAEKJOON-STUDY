#include <iostream>
using namespace std;

int main()
{
	ios::sync_with_stdio(0);
	cin.tie(NULL);
	cout.tie(NULL);

	int X, N;
	int a, b;

	cin >> X;
	cin >> N;

	for (int i = 0; i < N; i++)
	{
		cin >> a >> b;
		X -= (a * b);
	}

	if (X == 0)
	{
		cout << "Yes";
	}
	else
	{
		cout << "No";
	}
}