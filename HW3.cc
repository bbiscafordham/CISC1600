#include <iostream>
#include <string>
using namespace std;

int main ()
{
	string a;
	cout << "Enter your name: ";
	cin >> a;

	float x;
	cout << "Input x = ";
	cin >> x;

	float y;
	cout << "Input y = ";
	cin >> y;

	cout << "Hi " << a << ", I've calculated that " << x << " + " << y << " is " << x+y << ", and " << x << " - " << y << " = " << x-y << endl;
}

