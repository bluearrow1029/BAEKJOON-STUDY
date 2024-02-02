#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	int A[1000] = { 0 };
	int max = 0;
	float sum = 0.0;
	for (int i = 0; i < N; i++)
	{
		cin >> A[i];
		sum += A[i];
		if (A[i] > max)
		{
			max = A[i];
		}
	}
	
	cout << (sum / max * 100) / N << endl;
}