#include <iostream>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	int test;
	cin >> test;

	for (int t = 0; t < test; t++)
	{

		int n;
		cin >> n;
		string answer, key;
		cin >> answer >> key;

		double correctAnswers = 0;
		for (int i = 0; i < n; i++)
		{
			if (answer[i] == key[i])
			{
				correctAnswers++;
			}
		}

		cout << "Case #" << t + 1 << ": ";
		cout << int(floor(correctAnswers * 100.0 / n)) << endl;
	}

	return 0;
}