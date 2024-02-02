#include <iostream>

using namespace std;

int main()
{
	string S;
	cin >> S;

	bool check = true;
	for (int i = 0; i < S.length() / 2; i++)
	{
		if (S[i] != S[S.length() - 1 - i])
		{
			check = false;
			break;
		}
	}

	if (check)
	{
		cout << 1;
	}
	else
	{
		cout << 0;
	}
}