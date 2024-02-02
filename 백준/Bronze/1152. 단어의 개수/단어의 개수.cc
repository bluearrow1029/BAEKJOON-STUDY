#include <iostream>
#include <string>
using namespace std;

int main()
{
	string input;
	getline(cin, input);

	int count = 0;
	
	if (input[0] != ' ')
		count++;

	for (int i = 1; i < input.length(); i++)
	{
		if (input[i - 1] == ' ' && input[i] != ' ')
			count++;
	}

	cout << count;
}