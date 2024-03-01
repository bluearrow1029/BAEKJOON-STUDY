#include <iostream>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int K;
	cin >> K;

	int N;
	int sum = 0;
	stack<int> s;
	for (int i = 0; i < K; i++)
	{
		cin >> N;

		if (N == 0)
		{
			sum -= s.top();
			s.pop();
		}
		else
		{
			s.push(N);
			sum += N;
		}
	}

	cout << sum;
	return 0;
}