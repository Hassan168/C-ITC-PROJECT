#include<iostream>
using namespace std; 

int main()
{

	//..............12 is the multiple of 6...........

	/*int num1 = 0, num2 = 0;
	cout << "Enter first number ";
	cin >> num1;

	cout << "Enter second number ";
	cin >> num2;

	if (num1%num2 == 0)
	{
		cout << num1 << " is multiple of " << num2 << endl;
	}
	else
	{
		cout << num1 << " is not the multiple of " << num2 << endl;
	}*/

// 5-digit number as input and outputs the same number but in words..............

	int pay;
	int sum;
	cout << "please enter your income" << endl;
	cin >> pay;


	if (pay <= 600000)
	{
		cout << "NO Tax is applied ";
	}
	else if (pay>600000 && pay <= 1200000)
	{
		sum = pay*0.05;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>1200000 && pay <= 1800000)
	{
		sum = pay*0.1;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>1800000 && pay <= 2500000)
	{
		sum = pay*0.15;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>2500000 && pay <= 3500000)
	{
		sum = pay*0.175;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>3500000 && pay <= 5000000)
	{
		sum = pay*0.2;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>5000000 && pay <= 8000000)
	{
		sum = pay*0.225;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>8000000 && pay <= 12000000)
	{
		sum = pay*0.25;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>12000000 && pay <= 30000000)
	{
		sum = pay*0.275;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>30000000 && pay <= 50000000)
	{
		sum = pay*0.3;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>50000000 && pay <= 75000000)
	{
		sum = pay*0.325;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	else if (pay>75000000)
	{
		sum = pay*0.35;
		cout << "Total Income with Tax " << sum + pay << endl;
	}
	
	cout << "Tax is " << sum << endl;



	return 0;
}