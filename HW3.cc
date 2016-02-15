#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string a;
	cout << "Enter your name: ";
	cin >> a;

	int x;
	cout << "Input an integer for x between 0 and 100, x = ";
	cin >> x;

	double y;
	cout << "Input a decimal  for y between -10.00 and 10.00, y = ";
	cin >> y;

	cout << "Hi " << a << ", I've calculated that " << x << " + " << y << " is " << x+y << ", and " << x << " - " << y << " = " << x-y << endl;
}

