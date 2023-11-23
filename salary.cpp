#include<iostream>
#include<string>
using namespace std;

int main()
{
	float current_salary;
	int i, option, year;
	cout << "Enter the salary of the Employee:";
	cin >> current_salary;
	cout << "How many years of increment do you want(should be greater than 0):";
	cin >> year;
	cout << "Does your employee have outstanding rating?\n press 1 if yes and 2 if no:";
	cin >> option;

	switch (option)
	{
	case 1:

		for (i = 1; i <= year; i++)
		{
			current_salary = current_salary + (current_salary * 5 / 100);
			current_salary = current_salary + (current_salary * 2 / 100);
			cout << "The current salary after" << i << "year/year is:" << current_salary << endl;
		}
		break;
	case 2:
		for (i = 1; i <= year; i++)
		{
			current_salary = current_salary + (current_salary * 5 / 100);
			cout << "The current salary after" << i << "year/year is:" << current_salary << endl;
		}
		break;
	}
	return 0;
}
