#include <iostream>
#include <cmath>
using namespace std;

int calc(int N, int K)
{
	bool check[1001] = { false };
	int count = 0;
	for (int i = 2; i <= N; i++)
	{
		if (check[i] == true)
		{
			continue;
		}

		for (int j = i; j <= N; j += i)
		{
			if (check[j] == false)
			{
				check[j] = true;
				count++;
				if (count == K)
				{
					return j;
				}
			}
		}
	}
	return -1;
}

int main()
{
	int N, K;
	cin >> N >> K;
	
	cout << calc(N, K) << '\n';

	return 0;
}