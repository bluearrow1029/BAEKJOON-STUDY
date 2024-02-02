#include <iostream>
#include <vector>

using namespace std;

void swap(int *a, int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}

int main()
{
	int N, M;
	cin >> N >> M;
	
	vector<int> v = {  };
	for (int a = 0; a < N; a++)
	{
		v.push_back(a+1);
	}

	int i, j;
	int temp;
	for (int a = 0; a < M; a++)
	{
		cin >> i >> j;
		swap(v[i - 1], v[j - 1]);
	}

	for (int a = 0; a < N; a++)
	{
		cout << v[a] << ' ';
	}

	return 0;
}