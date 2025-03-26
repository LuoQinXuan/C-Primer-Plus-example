// give the hour and the minute just show the time
// you can do this
#include <iostream>
#include <iomanip>
using std::cin;
using std::cout;
using std::setw;
void showtime(int hour, int minute)
{
	cout << "Time:" << setw(2) << hour << ":" << setw(2) << minute << "\n";
}
int main()
{
	using std::cin;
	using std::cout;
	int hour = 0;
	int minute = 0;
	cout << "Enter the number of hours: ";
	cin >> hour;
	cout << "Enter the number of minutes: ";
	cin >> minute;
	showtime(hour, minute);
	return 0;
}
