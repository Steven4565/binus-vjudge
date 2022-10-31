#include <bits/stdc++.h>
using namespace std;

bool checkIfNum(string phone)
{
	for (int i = 0; i < phone.length(); i++)
	{
		if (!isdigit(phone[i]))
		{
			return false;
		}
	}
	return true;
}

int main()
{

	cout << "Welcome to JhatimeD Memberships Registration!" << endl;
	cout << "=============================================" << endl;
	cout << "1. Registration as a member" << endl;
	cout << "2. Benefit JhatimeD memberships" << endl;
	cout << "3. exit" << endl;

	string name, membership, phoneNum;

	int input;
	cin >> input;
	switch (input)
	{
	case 1:
		do
		{
			cout << "Please input your name [not more than 25]: ";
			cin >> name;
		} while (name.length() > 25);

		do
		{
			cout << "Input membership type you want [Reguler | Premium]: ";
			cin >> membership;
		} while (!(membership == "Reguler" || membership == "Premium"));

		do
		{
			cout << "Input phone number [must be numeric]: ";
			cin >> phoneNum;
		} while (!checkIfNum(phoneNum));

		cout << "You successfully become an official member!" << endl;
		break;
	case 2:
		cout << "About JhatimeD memberships" << endl;
		cout << "==========================" << endl;
		cout << "+Reguler+" << endl;
		cout << "- Get Free Birthday Drinks!" << endl;
		cout << "- Earn points to get more free drinks!" << endl;
		cout << "+Premium+" << endl;
		cout << "- Triple point gain!" << endl;
		cout << "- Get more exclusive gifts in certain events" << endl;
		cout << "Press enter to continue...";
		getchar();
		break;
	case 3:
		cout << "Thank you for using the program!" << endl;
		break;
	default:
		break;
	}

	return 0;
}