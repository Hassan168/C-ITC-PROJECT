#include<iostream>
using namespace std;

int main()
{
	char choice = '\0';
	while (true)
	{

	
	cout << endl <<"A  : Check wether number is Prime or not : " <<'\n';
	cout <<  "B  : Input 2 numbers and fine their LCM : " << '\n';
	cout <<  "C  : Exit from Program : " << '\n';

	cout << "Enter Your Choice : ";
	cin >> choice;

	if (choice == 'A')
	{
		cout << "----------------------------You are here in Prime Code---------------------- " << '\n';

		int N = 0;
		int numberToDisplayPrimes = 0;
		bool isPrime = true;

		cout << "enter a number for which you want to display PRIMES less than that number: ";
		cin >> numberToDisplayPrimes;

		for (int i = 2; i < numberToDisplayPrimes; i++)
		{
			N = i;
			isPrime = true;

			for (int div = 2; div<N && isPrime; div++)
			{
				if (N%div == 0)
				{
					isPrime = false;
				}
			}

			if (isPrime && N>1)
			{
				cout << i << " " ;
			}
		}
	}
	else if (choice == 'B')
	{
		cout << "------------------------------You are here in LCM Code-------------------------- " << '\n';

		int n1 = 0;
		int n2 = 0;
		int LCM = 0;
		int min = 0;

		cout << "Enter two numbers: ";
		cin >> n1 >> n2;

		if (n1<n2)
			min = n1;

		else min = n2;

		for (int i = min; i <= n1*n2; i++)
		{
			if (i%n1 == 0 && i%n2 == 0)
			{
				LCM = i;
				break;
			}
		}

		cout << "LCM = " << LCM << endl;

	}
	else if (choice == 'C')
	{
		cout << "Your Program is terminated " << '\n';
		break;
	}

	else
	{
		cout << "Enter Correct choice Please......." << endl;
	}
	


	}
	return 0;
}