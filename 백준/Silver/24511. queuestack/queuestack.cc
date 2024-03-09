#include <iostream>
#include <deque>
using namespace std;

bool arr[100001];

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	int M;
	int x;
	int temp;
	cin >> N;

	deque<int> dq;
	for (int i = 0; i < N; i++)
	{
		cin >> arr[i];
	}

	for (int i = 0; i < N; i++)
	{
		cin >> x;

		if (arr[i] == 0)
		{
			dq.push_back(x);
		}
	}
	
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		dq.push_front(temp);
		cout << dq.back() << ' ';
		dq.pop_back();
	}
	return 0;
}