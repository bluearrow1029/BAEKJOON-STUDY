#include <iostream>
#include <string>
using namespace std;

string result;

void change(string x)
{
	if (x == "black")
	{
		result += "0";
	}
	else if (x == "brown")
	{
		result += "1";
	}
	else if (x == "red")
	{
		result += "2";
	}
	else if (x == "orange")
	{
		result += "3";
	}
	else if (x == "yellow")
	{
		result += "4";
	}
	else if (x == "green")
	{
		result += "5";
	}
	else if (x == "blue")
	{
		result += "6";
	}
	else if (x == "violet")
	{
		result += "7";
	}
	else if (x == "grey")
	{
		result += "8";
	}
	else if (x == "white")
	{
		result += "9";
	}
}

long long calc(string x)
{
	long long a = 0;
	if (x == "black")
	{
		a = 1;
	}
	else if (x == "brown")
	{
		a = 10;
	}
	else if (x == "red")
	{
		a = 100;
	}
	else if (x == "orange")
	{
		a = 1000;
	}
	else if (x == "yellow")
	{
		a = 10000;
	}
	else if (x == "green")
	{
		a = 100000;
	}
	else if (x == "blue")
	{
		a = 1000000;
	}
	else if (x == "violet")
	{
		a = 10000000;
	}
	else if (x == "grey")
	{
		a = 100000000;
	}
	else if (x == "white")
	{
		a = 1000000000;
	}

	a *= stoi(result);
	return a;
}

int main()
{
	string a, b, c;
	cin >> a >> b >> c;

	change(a);
	change(b);
	cout << calc(c);
}