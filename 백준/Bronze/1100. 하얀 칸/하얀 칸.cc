#include <iostream>
using namespace std;

int main()
{
	char chess[8][8];

	int count = 0;
	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			cin >> chess[i][j];
			if (chess[i][j] == 'F')
			{
				if (i % 2 == 0 && j % 2 == 0)
				{
					count++;
				}
				else if (i % 2 == 1 && j % 2 == 1)
				{
					count++;
				}
			}
		}
	}

	cout << count << '\n';
	return 0;
}