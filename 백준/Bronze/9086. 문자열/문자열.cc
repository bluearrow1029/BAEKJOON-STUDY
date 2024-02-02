#include <iostream>

using namespace std;

int main()
{
	int T;
	cin >> T;

	string S;
	for (int i = 0; i < T; i++)
	{
		cin >> S;
		cout << S[0] << S[S.length()-1] << endl;
	}
	return 0;
}