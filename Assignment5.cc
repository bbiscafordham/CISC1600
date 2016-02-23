#include <iostream>
#include <string>
using namespace std;

int main ()
{
	int correctNum = 5;
	int guess;
	cout<<"Let's play a guessing game!"<<endl;

	while (correctNum!=guess)
		{
			cout<<"Guess a number between 0 and 10: ";
			cin >> guess;

			if(correctNum<guess)
			{
				cout<<"Oops! The correct number is lower."<<endl;
			}
		
			else if (correctNum>guess)
			{
				cout<<"Oops! The correct number is higher."<<endl;
			}
		}

	cout<<"Congrats, the number was "<<correctNum<<endl;

	return 0;
}

