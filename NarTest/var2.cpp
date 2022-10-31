#include <iostream>
using namespace std;

void printSpace(int n)
{
	for (int i = 0; i < n; i++)
	{
		cout << " ";
	}
}

int main()
{
	int n = 3;
	// cin >> n;

	// triangle
	for (int i = 0; i < n; i++)
	{
		for (int j = n - i - 1; j >= 0; j--)
		{
			cout << "  ";
		}
		cout << "* ";

		for (int j = 0; j < i * 2 - 1; j++)
		{
			cout << "  ";
		}

		if (i)
			cout << "* ";

		cout << endl;
	}

	// body
	for (int i = 0; i < n; i++)
	{
		cout << "  * ";
		for (int j = 0; j < n * 2 - 3; j++)
		{
			cout << "  ";
		}
		cout << "* ";
		cout << endl;
	}

	// trapezoid
	for (int i = 0; i < n; i++)
	{
		cout << "  ";
		for (int j = 0; j < i; j++)
		{
			cout << " ";
		}
		cout << "*";

		printSpace((2 * (n - i) - 1));

		cout << "*";
		cout << endl;
	}

	return 0;
}