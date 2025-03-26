// convert the celsius to a Faherenheit 
// maybe i typed some words :)
#include <iostream>
int main()
{
	using std::cin;
	using std::cout;
	double celsius = 0.0;
	double Fahrenheit = 0.0;
	cout << "Please enter a Celsius value: ";
	cin >> celsius;
	Fahrenheit = 1.8 * (celsius) + 32.0;
	cout << celsius << " degrees Celsius is " << Fahrenheit << " degrees Fahrenheit.\n";
	return 0;
}
