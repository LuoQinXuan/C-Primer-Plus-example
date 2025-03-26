// according the number of the age to the months
#include <iostream>
int main()
{
	using std::cin;
	using std::cout;
	int age = 0;
	int months = 0;
	cout << "Please input the you age (if you think that is a little privacy that you can enter 0)\n";
	cin >> age;
	months = 12 * age;
	cout << "Your age in months is " << months << ".\n";
	return 0;
}
