// twofile2.cpp -- variable with internal and external linkage
#include<iostream>
extern int tom;		// tom defined elsewhere
static int dick = 10;	// overrides external dick
int harry = 200;	// no conflict with twofile2 harry

void remote_access()
{
	using namespace std;
	cout << "remote_access() reports the following addresses:\n";
	cout << &tom << " = &tom, " << &dick << " = &dick, ";
	cout << &harry << " = &harry\n";
}
