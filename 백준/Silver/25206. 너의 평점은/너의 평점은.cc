#include <iostream>
using namespace std;

double CheckGrade(string grade)
{
	double temp = 0.0;
	if (grade == "A+")
		temp = 4.5;
	else if (grade == "A0")
		temp = 4.0;
	else if (grade == "B+")
		temp = 3.5;
	else if (grade == "B0")
		temp = 3.0;
	else if (grade == "C+")
		temp = 2.5;
	else if (grade == "C0")
		temp = 2.0;
	else if (grade == "D+")
		temp = 1.5;
	else if (grade == "D0")
		temp = 1.0;
	else
		temp = 0.0;

	return temp;
}

int main()
{
	string name;
	double point;
	string grade;

	double temp = 0.0;
	double result = 0.0;
	double sumPoint = 0.0;

	for (int i = 0; i < 20; i++)
	{

		cin >> name >> point >> grade;

		if (grade == "P")
		{
			continue;
		}
		sumPoint += point;

		if (grade == "F")
		{
			continue;
		}

		temp = CheckGrade(grade);
		result += temp * point;
	}
	cout << result / sumPoint;
	
	return 0;
}