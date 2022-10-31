#include <bits/stdc++.h>
using namespace std;

int main()
{
	int test;
	cin >> test;

	for (int t = 0; t < test; t++)
	{
		int length;
		cin >> length;

		string ans1, ans2;
		cin >> ans1 >> ans2;

		for (int i = 0; i < length; i++)
		{
			if (tolower(ans1[i]) == tolower(ans2[i]))
			{
				cout << "G";
			}
			else
			{
				cout << "B";
			}
		}
		cout << endl;
	}

	return 0;
}