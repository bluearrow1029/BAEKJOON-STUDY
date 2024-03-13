#include <iostream>
#include <map>
using namespace std;

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	string A;
	string B;
	map<string,bool> m;
	for (int i = 0; i < N; i++)
	{
		cin >> A >> B;
		
		if (A == "ChongChong")
		{
			m.insert({ A,true });
		}
		else if (B == "ChongChong")
		{
			m.insert({ B,true });
		}

		if (m[A] == true)
		{
			m[B] = true;
		}
		else if (m[B] == true)
		{
			m[A] = true;
		}
	}

	int count = 0;
	for (auto& iter : m)
	{
		if (iter.second == true)
		{
			count++;
		}
	}

	cout << count;
    return 0;
}