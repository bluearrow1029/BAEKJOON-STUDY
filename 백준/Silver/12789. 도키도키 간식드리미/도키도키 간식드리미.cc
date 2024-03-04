#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int T;
	cin >> T;

	int N;
	int count = 1;
	stack<int> s;
	while (T > 0)
	{
		cin >> N;

		if (N == count)
		{
			count++;
		}
		else
		{
			s.push(N);
		}

		while (!s.empty() && s.top() == count)
		{
			s.pop();
			count++;
		}

		T -= 1;
	}

	if (s.empty())
	{
		cout << "Nice" << '\n';
	}
	else
	{
		cout << "Sad" << '\n';
	}

}