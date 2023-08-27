#include <iostream>
using namespace std;

int main()
{
	int number = 0;
	int sum = 0;
	char choice = 'a';

	do
	{
		cout << "Enter a no: ";
		cin >> number;
		if (number % 2 == 1)
			sum = sum + number;
		cout << "Press y to CONTNUE: ";
		cin >> choice;

	} while (choice == 'y');

	cout << "Sum = " << sum << endl;

	return 0;
}