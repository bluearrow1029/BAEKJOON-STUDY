#include <iostream>
#include <string>
using namespace std;

int main()
{
	string S;

	while (1)
	{
		getline(cin, S);
		if (S == "")
		{
			break;
		}
		cout << S << endl;
	}

	return 0;
}