#include<iostream>
using namespace std;

int main()
{
	// Square of stars
	/*int N = 0;
	cout << "Enter Number : ";
	cin >> N;

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < N; i++)
		{
			cout << "*";
		}
		cout << endl;
	}*/

	// ultha and seedha triangle
	int N = 0;
	int star = 1;
	cout << "Enter Number : ";
	cin >> N;
	star = N;

	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < star; i++)
		{
			cout << "*";
		}
		cout << endl;
		star--;
	}
		
	return 0;
}