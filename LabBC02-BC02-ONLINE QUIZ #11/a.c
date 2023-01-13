#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

int count[8][8];
int destX, destY;
int minTurns = -1;

int xCoords[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int yCoords[] = {-2, -2, -1, -1, 1, 1, 2, 2};

void fill(int curX, int curY, int turnCount)
{
	for (int i = 0; i < 8; i++)
	{
		int newY = curY + yCoords[i];
		int newX = curX + xCoords[i];

		if (newY >= 8 || newX >= 8 || newX < 0 || newY < 0 || minTurns != -1 || (count[newY][newX] != -1 && count[newY][newX] <= turnCount))
		{
			continue;
		}

		if (count[destY][destX] != -1 && count[destY][destX] <= turnCount)
			continue;

		count[newY][newX] = turnCount;
		if (newY == destY && newX == destX)
			return;

		fill(newX, newY, turnCount + 1);
	}
}

void testcase(int test)
{
	char input[3];
	char input2[3];
	scanf(" %s %s", input, input2);
	destX = input2[0] - 'A';
	destY = input2[1] - '1';
	int startX = input[0] - 'A';
	int startY = input[1] - '1';

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			count[i][j] = -1;
		}
	}
	count[startY][startX] = 0;
	fill(startX, startY, 1);

	printf("Case #%d: %d\n", test + 1, count[destY][destX]);
}

int main(int argc, char const *argv[])
{

	int test;
	scanf("%d", &test);
	for (int i = 0; i < test; i++)
	{
		testcase(i);
	}

	return 0;
}
