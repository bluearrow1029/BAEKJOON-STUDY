#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int x, y;
	int maxX, maxY, minX, minY;

	cin >> x >> y;
	maxX = x;
	minX = x;
	maxY = y;
	minY = y;
	for (int i = 0; i < N-1; i++)
	{
		cin >> x >> y;

		if (maxX < x)
		{
			maxX = x;
		}
		if (minX > x)
		{
			minX = x;
		}

		if (maxY < y)
		{
			maxY = y;
		}
		if (minY > y)
		{
			minY = y;
		}
	}
	cout << (maxX-minX) * (maxY-minY);
	return 0;
}