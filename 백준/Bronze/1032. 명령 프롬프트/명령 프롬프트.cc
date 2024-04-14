#include <iostream>
using namespace std;

int main()
{
	int N;
	cin >> N;

	string s;
	cin >> s;
	
	char c;
	string temp;
	for (int i = 0; i < N-1; i++)
	{
		cin >> temp;
		for (int j = 0; j < temp.length(); j++)
		{
			c = temp[j];
			if (c != s[j])
			{
				s[j] = '?';
			}
		}
	}

	cout << s;
	return 0;
}