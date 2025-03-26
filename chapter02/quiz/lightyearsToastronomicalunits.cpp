// convert the light years to astronomical units.
// maybe the author really can look the sky. That is also cool
#include <iostream>
int main()
{
	using std::cin;
	using std::cout;
	double lightyears = 0;
	double astronomicalunits = 0;
	cout << "Enter the number of light years: ";
	cin >> lightyears;
	astronomicalunits = 63240 * lightyears;
	cout << lightyears << " light years = " << astronomicalunits << " astronomical units.\n";
	return 0;
}
