// pow.cpp -- using the pow() function

#include<iostream>
#include<cmath>	// or math.h

int main()
{
	using namespace std;
	
	int number;
	int expc;
	cout << "Enter the number, and your excp, of your want: ";
	cin >> number;
	cin >> expc;
	int result;
	result = pow(number, expc);	// function call with a list of arguments
	cout << "the " << number << "'s " << expc << " times " << " is " << result << endl;
	cout << "How fascinating!" << endl;
	return 0;
}
