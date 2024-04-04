#include <iostream>
#include <queue>
using namespace std;

struct comp
{
	bool operator() (int a, int b)
	{
		if (abs(a) == abs(b))
		{
			return a > b;
		}
		else
		{
			return abs(a) > abs(b);
		}
	}
};

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int x;
	priority_queue<int, vector<int>, comp> pQ;
	for (int i = 0; i < N; i++)
	{
		cin >> x;

		if (x == 0)
		{
			if (pQ.empty())
			{
				cout << 0 << '\n';
			}
			else
			{
				cout << pQ.top() << '\n';
				pQ.pop();
			}
		}
		else
		{
			pQ.push(x);
		}
	}

	return 0;
}