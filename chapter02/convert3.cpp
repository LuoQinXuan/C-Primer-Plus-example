// convert3.cpp -- use function is this way
#include<iostream>
int stonetolb(int);			// function prototype
int main()
{
	using namespace std;
	int aunt = stonetolb(20);
	int aunts = aunt + stonetolb(10);
	cout << "Ferdie weights " << stonetolb(16) << " pound." << endl;
	return 0;
}

int stonetolb(int sts)
{
	return 14 * sts;
}	
