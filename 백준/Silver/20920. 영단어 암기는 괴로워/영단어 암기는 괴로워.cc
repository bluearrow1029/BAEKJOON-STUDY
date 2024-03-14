#include <iostream>
#include <map>
#include <vector>
#include <algorithm>
using namespace std;

map<string, int> words;
vector<string> v;

bool compare(string a, string b)
{
	if (words[a] != words[b])
	{
		return words[a] > words[b];
	}
	else if (a.size() != b.size())
	{
		return a.size() > b.size();
	}
	else
		return a < b;
}


int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N, M;
	cin >> N >> M;

	string s;

	for (int i = 0; i < N; i++)
	{
		cin >> s;

		if (s.size() < M)
		{
			continue;
		}

		if (words.find(s) == words.end())
		{
			words[s] = 0;
			v.push_back(s);
		}
		words[s] += 1;
	}

	sort(v.begin(), v.end(), compare);

	for (auto& val : v)
	{
		cout << val << '\n';
	}
	return 0;
}