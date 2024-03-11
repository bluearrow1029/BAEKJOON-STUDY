#include <iostream>
#include <set>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int count = 0;
	string name;
	set<string> s;
	for (int i = 0; i < N; i++)
	{
		cin >> name;

		if (name == "ENTER")
		{
			count += s.size();
			s.clear();
		}
		else
		{
			s.insert(name);
		}
	}
	count += s.size();
	cout << count;
	return 0;
}