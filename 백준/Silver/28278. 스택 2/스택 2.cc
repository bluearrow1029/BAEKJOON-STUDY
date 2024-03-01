#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int order;
	int X;
	stack<int> s;
	for (int i = 0; i < N; i++)
	{
		cin >> order;
		switch (order)
		{
		case 1:
			cin >> X;
			s.push(X);
			break;
		case 2:
			if (s.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << s.top() << '\n';
				s.pop();
			}
			break;
		case 3:
			cout << s.size() << '\n';
			break;
		case 4:
			cout << s.empty() << '\n';
			break;
		case 5:
			if (s.empty())
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << s.top() << '\n';
			}
			break;

		}
	}
}