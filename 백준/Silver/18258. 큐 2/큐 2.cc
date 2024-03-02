#include <iostream>
using namespace std;

int arr[2000000];
int front = 0;
int rear = 0;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string s;
	for (int i = 0; i < N; i++)
	{
		cin >> s;

		if (s == "push")
		{
			int num;
			cin >> num;
			arr[rear++] = num;
		}
		else if (s == "pop")
		{
			if (rear - front == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << arr[front++] << '\n';
			}
		}
		else if (s == "size")
		{
			cout << rear - front << '\n';
		}
		else if (s == "empty")
		{
			if (rear - front == 0)
			{
				cout << 1 << '\n';
			}
			else
			{
				cout << 0 << '\n';
			}
		}
		else if (s == "front")
		{
			if (rear - front == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << arr[front] << '\n';
			}
		}
		else if (s == "back")
		{
			if (rear - front == 0)
			{
				cout << -1 << '\n';
			}
			else
			{
				cout << arr[rear - 1] << '\n';
			}
		}
	}
}