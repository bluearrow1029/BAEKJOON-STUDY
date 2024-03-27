#include <iostream>
using namespace std;

int house[1001][3] = {0};

int main()
{
	int N;
	cin >> N;

	int R, G, B;
	for (int i = 1; i <= N; i++)
	{
		cin >> R >> G >> B;
		house[i][0] = min(house[i - 1][1], house[i - 1][2]) + R;
		house[i][1] = min(house[i - 1][0], house[i - 1][2]) + G;
		house[i][2] = min(house[i - 1][0], house[i - 1][1]) + B;
	}
	cout << min(min(house[N][0], house[N][1]), house[N][2]);

	return 0;
}