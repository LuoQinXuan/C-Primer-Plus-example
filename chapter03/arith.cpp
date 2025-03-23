// arith.cpp -- some C++ arithmetic
#include<iostream>
int main()
{
	using namespace std;
	float hats = 0.0;
	float heads = 0.0;
	
	cout.setf(ios_base::fixed, ios_base::floatfield);	// fixed-point
	cout << "Please Enter a number:";
	cin >> hats;
	cout << "Enter another number: ";
	cin >> heads;

	cout << "hats = " << hats << "; heads = " << heads << endl;
	cout << "hats + heads = " << hats + heads << endl;
	cout << "hats - heads = " << hats - heads << endl;
	cout << "hats * heads = " << hats * heads << endl;
	cout << "hats / heads = " << hats / heads << endl;
	return 0;
}
