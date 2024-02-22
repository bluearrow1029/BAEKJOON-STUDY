#include <iostream>
#include <map>
using namespace std;

int main()
{
	cin.tie(NULL);
	ios_base::sync_with_stdio(false);

	int n;
	cin >> n;

	string name;
	string status;
	map<string, string, greater<>> m;
	for (int i = 0; i < n; i++)
	{
		cin >> name >> status;
		m[name] = status;
	}

	// name 출력
	map<string, string>::iterator it;
	for (it = m.begin(); it != m.end(); it++)
	{
		if (it->second == "enter")
		{
			cout << it->first << '\n';
		}
	}

	return 0;
}