/*#include<iostream>
using namespace std;
int main()
{
	int a = 0, count = 0;
	cout << "Enter a to continue the Program ";
	cin >> a;

	if (a % 2 == 0)
	{
		cout << "Enter ODD number " << endl;;
	}
	else
	{
		while (count < 10)
		{
			count++;
			cout << a << endl;
			a = a + 2;
		}
	}
	return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int a = 0, count = 0;
	cout << "Enter Even number ";
	cin >> a;
	if (a % 2 != 0)
		cout << "Emter Even number pleas : " << endl;
	else
	{
		while (count < 10)
		{
			count++;
			cout << a << endl;
			a = a + 2;

		}
	}

	return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int num = 0, first = 0, second = 0, third = 0,sum=0;
	cout << "Enter 3 Digits number ";
	cin >> num;

	if (num > 99 && num < 1000)
	{
		third = num % 10;
		num = num / 10;

		second = num % 10;
		num = num / 10;

		first = num % 10;
		num = num / 10;

		sum = first + second + third;
		cout << "Sum of 3 Digits is " << sum << endl;
	}
	else
	{
	
	cout << "Not a 3 Digits number  "  << endl;
	}


	return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
int a = 0, count = 0;
cout << "Enter a to continue the Program ";
cin >> a;


while (count <= 10)
{
	a++;
    //cout << a << endl;
    count++;

	if (a % 2 == 0 || a % 3 == 0)
	{
		cout << a << endl;
	}

}
return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int X = 0, Y = 0;

	cout << "X = ";
	cin >> X;

	cout << "Y = ";
	cin >> Y;

	while (X >= Y)
	{
		cout << X << endl;
		X = X - 1;
	}

	return 0;
}*/



/*#include<iostream>
using namespace std;
int main()
{
	int N = 0, count = 0;
	cout << "Enter a no: ";
	cin >> N;

	while (count < N)
	{
		count = count + 5;
		cout << count << endl;
	}

	return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int N = 0, count = 1;
	cout << "Enter a no: ";
	cin >> N;

	while (count < N)
	{
		count = count + 2;
		cout << count << endl;
	}

	return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int num = 0, sum = 0, count = 1;
	cout << "Enter num ; ";
	cin >> num;
	while (count <= num)
	{
		sum = count*count;
		cout << sum << endl;
		count++;
	}
	return 0;
}*/


/*#include<iostream>
using namespace std;
int main()
{
	int num = 0, fact = 1, count = 1;
	cout << "Enter num ";
	cin >> num;

	while (count <= num)
	{
		fact = fact*count;
		count = count + 1;
		
	}
	cout << "Factorial of " << num << " is " << fact << endl;

	if (num > 17)
	{
		cout << "Error" << endl;
	}
	return 0;
}*/


#include<iostream>
using namespace std;
int main()
{
	int num = 0, count = 1, N = 0;
	cout << "Enter num ";
	cin >> num;

	cout << "Enter num ";
	cin >> N;

	while (count <= N)
	{
		cout << num << " X " << count << " = " << num*count << endl;
		count = count + 1;

	}


	return 0;
}
