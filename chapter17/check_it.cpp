// check_it.cpp -- checking for valid input
#include <iostream>

int main()
{
	using namespace std;
	cout << "Enter numbers: ";

	int sum = 0;
	int input;
	while(cin >> input)
	{
		sum += input;
	}

	cout << "Last value entered = " << input << endl;
	cout << "Sum = " << sum << endl;
	return 0;
}
