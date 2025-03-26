// use the three function to complete the output
// Just a little bit tedious
#include <iostream>

void showmice();
void showrun();

using std::cout;
int main()
{
	showmice();
	showmice();
	showrun();
	showrun();
	return 0;
}

void showmice()
{
	cout << "Three Blind mice\n";
}

void showrun()
{
	cout << "See how they run\n";
}
