/*#include <iostream>
using namespace std;

int main()
{

	int num = 0, start = 0, end=0;
	cout << "Enter starting num ";
	cin >> start;

	cout << "Enter Ending num ";
	cin >> end;

	while (start < end)
	{

		if (start % 2 == 0)
		{
			cout << "Even = " << start << endl;
			start = start + 1;
		}
		else if (start % 2 != 0)
		{
			cout << "Odd = " << start << endl;
			start = start + 1;
		}

	}


	return 0;
}*/


#include <iostream>
using namespace std;

int main()
{

	int num = 0, esum=0,osum=0;
	char choice = 'a';

	

	while (num%2==0)
	{
		cout << "Enter Num ";
		cin >> num;

		if (num % 2 == 0)
		{
			esum = esum + num;
			
		}
		
		
	}


	cout << "Sum  of even = " << esum << endl;
	//cout << "Sum of odd = " << osum << endl;
	return 0;
}