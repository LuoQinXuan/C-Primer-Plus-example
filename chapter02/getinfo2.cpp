// getinfo2.cpp -- cout uses four times
#include<iostream>

int main()
{
	using namespace std;
	
	int carrots;

	cout << "How many carrots do you have?" << endl;
	cin >> carrots;	// C++ input
	cout << "Here are two more. ";
	carrots = carrots + 2;
// the next line concatenates output
	cout << "Now you have ";
	cout << carrots;
	cout << " carrots.";
	cout << endl;
	return 0;
}
