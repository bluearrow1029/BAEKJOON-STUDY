#include <iostream>
using namespace std;

int main()
{
	string input;
	cin >> input;

	int dial[] = { 2, 2, 2, 3, 3, 3, 4, 4, 4, 5, 5, 5, 6, 6, 6, 7, 7, 7, 7, 8, 8, 8, 9, 9, 9, 9 };
	int time = 0;
	for(int i = 0; i < input.length(); i++)
	{
		time += dial[input[i] - 'A'] + 1;
	}

	cout << time;
}