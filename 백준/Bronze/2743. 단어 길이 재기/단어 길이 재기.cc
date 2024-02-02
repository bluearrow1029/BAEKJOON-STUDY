#include <iostream>

using namespace std;

int main()
{
	char S[101];

	cin >> S;

	int i = 0;
	while (1)
	{
		if (S[i])
			i++;
		else
			break;
	}

	cout << i;
	return 0;
}