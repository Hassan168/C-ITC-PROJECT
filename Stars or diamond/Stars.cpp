/*#include<iostream>
using namespace std;
int main()
{
	int N = 0;
	int M = 1;
	cout << "Enter any number : ";
	cin >> N;
	M = N; // this is for Ultah triangle without this line triangle will be seedha
	for (int j = 0; j < N; j++)
	{
		for (int i = 0; i < M; i++)
		{
			cout << "*";
		}
		cout << endl;
		M--;
	}

			
	return 0;
}*/

/*#include <iostream>
using namespace std;

int main()
{
	int N = 0, stars = 1, spaces = 0, output = 1;
	
	cout << "Enter any number : ";
	cin >> N;

	stars = 1;
	spaces = N / 2; 

	for (int lines1 = 0; lines1 < N / 2 + 1; lines1++)
	{

		for (int sp = 0; sp < spaces; sp++)
		{
			cout << " ";
		}

		for (int st = 0; st < stars; st++)
		{
			cout << "*";
			output++;
		}

		cout << endl;
		spaces--;
		stars += 2;

	}


	stars = N - 2;
	spaces = 1;

	for (int lines2 = 0; lines2 < N/2; lines2++)
	{

	
			
		for (int sp = 0; sp < spaces; sp++)
		{
			cout << " ";
		}
		for (int st = 0; st < stars; st++)
		{
			cout << "*";
			output++;
		}

		cout << endl;
		stars -= 2;
		spaces++;

	}

	return 0;
}*/


#include <iostream>
//
//using namespace std;
//int main()
//{
//
//	int i = 1, j = 1, N = 0;
//	cout << "Enter N";
//	cin >> N;
//
//	for (int j = 0; j < N; j++)
//	{
//
//	
//			
//	for (int st = 0; st < N; st++)
//	{
//		cout << "*";
//	}
//	for (int sp = 0; sp < (2*N - 2); sp++)
//	{
//		cout << " ";
//	}
//	for (int st = 0; st < N; st++)
//	{
//		cout << "*";
//	}
//
//	cout << endl;
//
//	}

#include <iostream>
using namespace std;
int main()
{
	int i, j, rows;
	cout << "Please enter the number of rows\n";
	cin >> rows;//get input from user
	//loop for display upper half part of the pattern
	for (i = 1; i <= rows; i++)
	{
		for (j = i; j <= rows; j++)
		{
			cout << "*";//print star
		}
		for (j = 1; j <= (2 * i - 2); j++)
		{
			cout << " ";//print space
		}
		for (j = i; j <= rows; j++)
{
			cout << "*";//print star
		}
		cout << "\n";
	}
	//loop for printing lower half part  of the pattern
	for (i = 1; i <= rows; i++){
		for (j = 1; j <= i; j++){
			cout << "*";//print star
		}
		for (j = (2 * i - 2); j < (2 * rows - 2); j++){
			cout << " ";//print space
		}
		for (j = 1; j <= i; j++){
			cout << "*";
		}
		cout << "\n";//move to next line
	}
	
	return 0;
}