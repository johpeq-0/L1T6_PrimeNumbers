#include <iostream>
#include <iomanip> /* Input Output Manipulation
 Needed to fix whitespace problem. Makes it possible to adjust size of
the stream */
using namespace std;

void welcome_message()
{
	cout << "This program prints the first n prime numbers.\n";
}

int number_of_prints()
{
	int n;
	cout << "Enter a value for n: ";
	cin >> setw(1) >> n; //Only one argument allowed

	//Checks if the user has made a correct imput.
	while (cin.good() == false) //Can also be written !cin.good()
	{
		//Clears the stream
		cin.clear();
		cin.ignore(INT_MAX, '\n');
		cout << "Incorrect input. Only numberals allowed. \n";
		cout << "Enter a value for n: ";
		cin >> setw(1) >> n; //Only one argument allowed
	}
	//Clears the stream
	cin.clear();
	cin.ignore(INT_MAX, '\n');

	return n;
}

void print_prime_numbers(int number)
{
	if (number < 0)
	{
		cout << "n can not be a negetive number";
	}
	cout << "The prime numbers in the range from 0 to " << number << " are:\n";
	int j;
	for (int i = 2; i <= number; i++)
	{
		for (j = 2; j <= i; j++)
		{
			if (i % j == 0)
			{
				break;
			}
		}
		if (i == j)
		{
			cout << i << endl;
		}
	}
}
int main()
{
	welcome_message();
	int number = number_of_prints();
	print_prime_numbers(number);
	cin.get();  /* This makes the program pause. A recommended alternative to
				System("pause"). */
	return 0;
}