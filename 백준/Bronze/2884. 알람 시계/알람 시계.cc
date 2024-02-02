#include <iostream>
using namespace std;

int main()
{
	int H, M;

	cin >> H >> M;

	if (M >= 45)
		cout << H << " " << M - 45;
	else
	{
		if (H - 1 < 0)
			H = 24;
		cout << H - 1 << " " << (M - 45) + 60;
	}
}