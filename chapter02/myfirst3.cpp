// myfirst3.cpp -- just use the using std::name :)

#include<iostream>					// a PREPROCESSOR directive
int main()						// function header
{							// start of function body
	using std::cout;
	using std::endl;
	cout << "Come up and C++ me some time.";	// message
	cout << endl;					// start a new line
	cout << "You won't regret it!" << endl;		// more output	
	return 0;					// terminate main()
}
