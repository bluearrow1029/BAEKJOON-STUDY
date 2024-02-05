#include <iostream>

using namespace std;

int main()
{
	int N;
	cin >> N;

	int point = 1;
	for (int i = 0; i < N; i++)
	{
		point *= 2;
	}
	point += 1;
	point *= point;
	
	cout << point;
	return 0;
}