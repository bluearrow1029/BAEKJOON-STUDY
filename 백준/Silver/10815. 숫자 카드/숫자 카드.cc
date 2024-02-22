#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int binarySearch(vector<int> v, int target, int left, int right)
{
	if (left == right)
	{
		return v[left] == target;
	}

	int mid = (left + right) / 2;

	if (v[mid] == target)
	{
		return 1;
	}

	if (v[mid] < target)
	{
		return binarySearch(v, target, mid + 1, right);
	}
	return binarySearch(v, target, left, mid - 1);
}

int main()
{
	ios::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);

	int N;
	cin >> N;

	int temp = 0;
	vector<int> v;
	for (int i = 0; i < N; i++)
	{
		cin >> temp;
		v.push_back(temp);
	}

	sort(v.begin(), v.end());

	int M;
	cin >> M;

	for (int i = 0; i < M; i++)
	{
		cin >> temp;
		cout << binary_search(v.begin(), v.end(), temp) << ' ';
	}
}