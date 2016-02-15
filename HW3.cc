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

	double result1;
	result1 = x + y;

	double result2;
	result2 = x - y;

	cout << "Hi " << a << ", I've calculated that " << x << " + " << y << " is " << result1 << ", and " << x << " - " << y << " = " << result2 << endl;
}

