#include <iostream>

using namespace std;

int main()
{
	int a, b, c, d, e, f;
	cin >> a >> b >> c >> d >> e >> f;

	int x = -999;
	int y = -999;
	for (int i = 0; i <= 999 * 2; i++)
	{
		for (int j = 0; j <= 999 * 2; j++)
		{
			if ((a * (x + i)) + (b * (y + j)) == c && (d * (x + i)) + (e * (y + j)) == f)
			{
				cout << x + i << " " << y + j;
					return 0;
			}
		}
	}
}