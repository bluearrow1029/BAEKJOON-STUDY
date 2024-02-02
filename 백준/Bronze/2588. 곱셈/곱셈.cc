#include <iostream>
using namespace std;

int main()
{
	int a, b;
	cin >> a;
	cin >> b;

	int first_b, second_b, third_b;
	first_b = b / 100;
	second_b = b / 10 % 10;
	third_b = b % 10;

	int result = 0;
	result += a * third_b;
	cout << a * third_b << endl;

	result += a * second_b * 10;
	cout << a * second_b << endl;

	result += a * first_b * 100;
	cout << a * first_b << endl;
	
	cout << result;
}