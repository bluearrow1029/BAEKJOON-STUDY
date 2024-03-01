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


	for (int i = 0; i < T; i++)
	{
		stack<char> stack;
		string s;
		cin >> s;
		string answer = "YES";
		for (int j = 0; j < s.length(); j++)
		{
			if (s[j] == '(')
			{
				stack.push(s[j]);
			}
			else if (!stack.empty() && stack.top() == '(' && s[j] == ')')
			{
				stack.pop();
			}
			else
			{
				answer = "NO";
				break;
			}
		}

		if (!stack.empty())
		{
			answer = "NO";
		}
		cout << answer << '\n';
	}
	
	return 0;
}