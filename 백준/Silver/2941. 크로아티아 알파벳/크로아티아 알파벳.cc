#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<string> vec = { "c=", "c-", "dz=", "d-", "lj", "nj", "s=", "z=" };
	
	int index = 0;
	string input;
	cin >> input;

	for (int i = 0; i < vec.size(); i++)
	{
		index = input.find(vec[i]);
		for (; index != -1; index = input.find(vec[i]))
		{
			input.replace(index, vec[i].length(), "!");
		}
	}
	cout << input.length();
}