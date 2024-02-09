#include <iostream>

using namespace std;

int arr[100000] = { 0 };

int main()
{
	int n = 0;

	int sum = 0;
	int count = 0;
	while (1)
	{
		cin >> n;

		if (n == -1)
			return 0;
		
		sum = 0;
		count = 0;
		for (int i = 1; i < n; i++)
		{
			if (n % i == 0)
			{
				arr[count] = i;
				sum += i;
				count++;
			}
		}

		if (n == sum)
		{
			cout << n << " = ";

			for (int i = 0; i < count - 1; i++)
			{
				cout << arr[i] << " + ";
			}
			cout << arr[count - 1] << endl;
		}
		else
		{
			cout << n << " is NOT perfect." << endl;
		}
	}
	return 0;
}