#include <iostream>
using namespace std;

int main()
{
	int N[9] = {};
	int max = 0;
	int index = 0;
	for (int i = 0; i < 9; i++)
	{
		cin >> N[i];

		if (N[i] > max)
		{
			max = N[i];
			index = i;
		}
	}

	cout << N[index] << endl;
	cout << index + 1;
}