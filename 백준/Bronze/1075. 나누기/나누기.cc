#include <iostream>
using namespace std;

int main()
{
	int N;
	int F;
	cin >> N >> F;

	N /= 100;
	N *= 100;
	
	int temp = 0;
	while ((N + temp) % F != 0 && temp < 100)
	{
		temp++;
	}

	if (temp < 10)
	{
		cout << '0' << temp << '\n';
	}
	else
	{
		cout << temp << '\n';
	}
}