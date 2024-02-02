#include <iostream>
using namespace std;

int main()
{
	int N, A;
	int Max = -1000000;
	int Min = 1000000;

	cin >> N;
	
	for (int i = 0; i < N; i++)
	{
		cin >> A;
		
		if (A > Max)
			Max = A;
		
		if (A < Min)
			Min = A;
	}
	cout << Min << ' ' << Max;
}