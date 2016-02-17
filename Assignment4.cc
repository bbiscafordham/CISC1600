#include <iostream>
using namespace std;
int main ()
{	
	int a;	
	cout << "How many numbers would you like to add?" <<endl;
	cin >> a;
	
	cout << "Input " << a << " numbers" <<endl;
	int i = 0;
	double sum;

	while (i < a)
	{
		double b;
		cin >> b;
		sum += b;
		i++;
	}

	cout << "The sum of these " << a << " numbers is " << sum << ".";

	return 0;
}
