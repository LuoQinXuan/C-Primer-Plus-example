// convert the long to ma
// I don't know if it is pronunced that hah
#include <iostream>
int distancetoma(int distance);

int main()
{
	using std::cin;
	using std::cout;
	int distance = 0;
	int ma = 0;
	cout << "Please input a distance : ";
	cin >> distance;
	ma = distancetoma(distance);
	cout << "The " << distance << " long is " << ma << " ma.\n";
	return 0;
}

int distancetoma(int distance)
{
	return 220 * distance;
}
