// dowhile.cpp -- exit-condition loop
#include<iostream>
int main()
{
	using namespace std;
	int n;
	
	cout << "Enter numbers in the range 1-10 to find ";
	cout << "My favorite number\n";
	do
	{
		cin >> n;	// execute body
	}while(n != 7);		// then test
	cout << "Yes, 7 is my favorite.\n";
	return 0;
}
