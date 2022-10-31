#include <bits/stdc++.h>
using namespace std;

vector<vector<int>> board;
vector<int> snakeX;
vector<int> snakeY;
// I'm sorry, I forgot the function for random T^T
vector<int> apple = {6, 6};

// PROTOTYPES

bool snakeHasCoords(vector<int> coordsToBeChecked);
void setNewApple();
void init();
bool overlapsApple(vector<int> headCoords);
vector<int> getHeadCoords();
void elongateSnake(vector<int> destinationVector);
void moveSnake(vector<int> destinationVector);
vector<int> getInput();
void clearScreen();
void printBoard();

// FUNCTIONS

void printBoard()
{
	// border top
	for (int i = 0; i < 22; i++)
	{
		cout << "#";
	}
	cout << endl;

	// playing area + side paddings
	for (int i = 0; i < 20; i++)
	{
		// padding left
		cout << "#";

		// playing area (each row)
		for (int j = 0; j < 20; j++)
		{
			bool printSnake = false;
			for (int snakeC = 0; snakeC < snakeX.size() - 1; snakeC++)
			{
				if (snakeY[snakeC] == i && snakeX[snakeC] == j)
				{
					printSnake = true;
				}
			}

			if (printSnake)
			{
				cout << "o";
			}
			else if (i == snakeY[snakeY.size() - 1] && j == snakeX[snakeX.size() - 1])
			{
				cout << "0";
			}
			else if (i == apple[1] && j == apple[0])
			{
				cout << "x";
			}
			else
			{
				cout << " ";
			}
		}

		// padding right
		cout << "#" << endl;
	}

	// border bottom
	for (int i = 0; i < 22; i++)
	{
		cout << "#";
	}
	cout << endl;
}

void clearScreen()
{
	for (int i = 0; i < 30; i++)
	{
		cout << endl;
	}
}

vector<int> getInput()
{
	vector<int> headCoords = getHeadCoords();

	cout << "Move snake [wasd]: ";
	cout << "head coords: " << headCoords[0] << " " << headCoords[1] << endl;
	char input;
	cin >> input;
	switch (input)
	{
	case 'w':
		headCoords[1]--;
		cout << "output w" << endl;
		break;
	case 'a':
		headCoords[0]--;
		break;
	case 's':
		headCoords[1]++;
		break;
	case 'd':
		headCoords[0]++;
		break;
	default:
		break;
	}
	return headCoords;
}

void moveSnake(vector<int> destinationVector)
{
	int destX = destinationVector[0];
	int destY = destinationVector[1];

	for (int i = 0; i < snakeY.size() - 1; i++)
	{
		snakeX[i] = snakeX[i + 1];
		snakeY[i] = snakeY[i + 1];
	}

	snakeX[snakeX.size() - 1] = destX;
	snakeY[snakeY.size() - 1] = destY;
}

// UTIL FUNCTIONS

void elongateSnake(vector<int> destinationVector)
{
	snakeX.push_back(destinationVector[0]);
	snakeY.push_back(destinationVector[1]);
	setNewApple();
}

vector<int> getHeadCoords()
{
	int headX = snakeX[snakeX.size() - 1];
	int headY = snakeY[snakeX.size() - 1];

	vector<int> headCoords = {headX, headY};
	return headCoords;
}

bool overlapsApple(vector<int> headCoords)
{
	return ((apple[0] == headCoords[0] && apple[1] == headCoords[1]) ? true : false);
}

void init()
{
	vector<int> buffer(20, 0);
	for (int j = 0; j < 20; j++)
	{
		board.push_back(buffer);
	}

	snakeX.push_back(8);
	snakeY.push_back(8);
	snakeX.push_back(9);
	snakeY.push_back(8);
	snakeX.push_back(10);
	snakeY.push_back(8);
	snakeX.push_back(11);
	snakeY.push_back(8);
	printBoard();
}

bool snakeHasCoords(vector<int> coordsToBeChecked)
{
	for (int i = 0; i < snakeX.size(); i++)
	{
		if (snakeX[i] == coordsToBeChecked[0] && snakeY[i] == coordsToBeChecked[1])
		{
			return true;
		}
	}

	return false;
}

void setNewApple()
{
	while (true)
	{
		// pls replace 10 10 with a random number in the playing area TT
		vector<int> newAppleCoords({10, 10});
		if (!snakeHasCoords(newAppleCoords))
		{
			apple = newAppleCoords;
			break;
		}
	}
}

// MAIN

int main()
{
	init();
	while (true)
	{
		vector<int> input = getInput();
		if (overlapsApple(input))
		{
			elongateSnake(input);
		}
		moveSnake(input);
		clearScreen();
		printBoard();
	}

	return 0;
}