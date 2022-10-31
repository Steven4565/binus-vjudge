// Playing Snakes and Ladders

#include <bits/stdc++.h>
using namespace std;

int main()
{
	long long ladders[100];
	for (int i = 0; i < 100; i++)
	{
		ladders[i] = 0;
	}

	ladders[9] = 12;
	ladders[33] = 9;
	ladders[76] = 16;
	ladders[53] = -16;
	ladders[80] = -21;
	ladders[97] = -9;

	int n;
	cin >> n;

	long long sum = 0;

	for (int i = 0; i < n; i++)
	{
		long long input;
		cin >> input;
		sum += input;
		// cout << sum << endl;
		if (sum < 100)
		{
			sum += ladders[sum];
		}
	}

	cout << sum << endl;

	return 0;
}