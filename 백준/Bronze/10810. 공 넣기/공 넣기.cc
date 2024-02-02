#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> v = { 0 };
	for (int a = 0; a < N; a++)
	{
		v.push_back(0);
	}

	int i, j, k;
	for (int b = 0; b < M; b++)
	{
		cin >> i >> j >> k;
		
		for (int c = i-1; c < j; c++)
		{
			v[c] = k;
		}
	}

	for (int a = 0; a < N; a++)
	{
		cout << v[a] << ' ';
	}
}