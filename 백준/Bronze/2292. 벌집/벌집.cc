#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int count = 1;
	int layer = 1;

	// find layer
	while (N > count)
	{
		count += layer * 6;
		layer++;
	}
	cout << layer;
	return 0;
}