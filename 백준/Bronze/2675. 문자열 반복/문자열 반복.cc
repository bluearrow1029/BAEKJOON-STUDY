#include <iostream>
using namespace std;

int main()
{
	int T;
	cin >> T;


	for (int i = 0; i < T; i++)
	{
		int R;
		cin >> R;

		string S;
		cin >> S;

		for (int j = 0; j < size(S); j++)
		{
			for (int k = 0; k < R; k++)
			{
				cout << S[j];
			}
		}
		cout << endl;
	}
}