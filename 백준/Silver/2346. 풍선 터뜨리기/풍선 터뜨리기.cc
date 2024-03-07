#include <iostream>
#include <deque>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int temp;
	deque<pair<int, int>> dq;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		dq.push_back(make_pair(i + 1, temp));
	}

	while (1)
	{
		cout << dq.front().first << ' ';
		int current = dq.front().second;
		dq.pop_front();

		if (dq.empty())
		{
			break;
		}

		if (current > 0)
		{
			for (int i = 0; i < current - 1; i++)
			{
				dq.push_back(dq.front());
				dq.pop_front();
			}
		}
		else
		{
			for (int i = 0; i < (-1) * current; i++)
			{
				dq.push_front(dq.back());
				dq.pop_back();
			}
		}
	}
	return 0;
}