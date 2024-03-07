#include <iostream>
#include <string>
#include <stack>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	string temp;
	bool check = true;
	while (1)
	{
		getline(cin, temp);

		if (temp == ".")
		{
			break;
		}

		stack<char> s;
		bool check = true;
		for (int i = 0; i < temp.length(); i++)
		{
			if (temp[i] == '(' || temp[i] == '[')
			{
				s.push(temp[i]);
			}

			if (temp[i] == ')')
			{
				if (!s.empty() && s.top() == '(')
				{
					s.pop();
				}
				else
				{
					check = false;
					break;
				}
			}
			else if (temp[i] == ']')
			{
				if (!s.empty() && s.top() == '[')
				{
					s.pop();
				}
				else
				{
					check = false;
					break;
				}
			}
		}
		
		if (s.empty() && check == true)
		{
			cout << "yes" << '\n';
		}
		else
		{
			cout << "no" << '\n';
		}
	}
	
	return 0;
}