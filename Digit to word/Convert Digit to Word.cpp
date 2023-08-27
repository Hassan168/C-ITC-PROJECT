#include <iostream>
using namespace std;
int main()
{
	int N = 0, rev = 0;
	cout << "Enter a number: ";
	cin >> N;
	//originalN = N;

	while (true)
	{
		rev = (rev * 10) + (N % 10);
		N = N / 10;
		if (N == 0)
			break;
	}

	cout << "Reverse = " << rev << endl;

	if (originalN == N)
		cout << "Palindrome\n";
	else
		cout << "Not Palindrome\n";

	return 0;
}
