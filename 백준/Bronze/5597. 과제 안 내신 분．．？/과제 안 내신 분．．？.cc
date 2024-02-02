#include <iostream>
using namespace std;

int main()
{
	int n;
	int arr[30] = {};
	for (int i = 0; i < 28; i++)
	{
		cin >> n;
		arr[n-1] = 1;
	}

	for (int i = 0; i < 30; i++)
	{
		if (arr[i] == 0)
			cout << i+1 << endl;
	}
	
	return 0;
}