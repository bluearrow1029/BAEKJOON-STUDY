#include <iostream>
using namespace std;

int main()
{
	string S;
	cin >> S;
	
	for (int i = 0; i < 26; i++)
	{
		cout << (int)S.find('a' + i) << ' ';
	}
}