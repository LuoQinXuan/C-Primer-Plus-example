// C++ provide a old school method to start a new line : C programming function \n:
#include <iostream>
int main()
{
	using std::cout;
	using std::endl;
	cout << "What's next?\n";			// \n means start a new line

	cout << "Pluto is a dwarf planet.\n";		// show text, go to next line
	cout << "Pluto is a drarf planet." << endl;	// show text, go to next line

	cout << "\n";		// start a new line
	cout << endl;		// start a new line
	return 0;
}
