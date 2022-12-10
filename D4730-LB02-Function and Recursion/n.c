#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

char h1[8][8];
bool valid = false;
int turns;

int xCoords[] = {-1, 1, -2, 2, -2, 2, -1, 1};
int yCoords[] = {-2, -2, -1, -1, 1, 1, 2, 2};

bool isValid(int curX, int curY)
{
	if (curY >= 8 || curX >= 8 || curX < 0 || curY < 0)
		return false;

	return true;
}

void fillH1(int curX, int curY, int turns)
{
	if (curY >= 8 || curX >= 8 || curX < 0 || curY < 0 || turns < 0 || h1[curY][curX] != '.')
	{
		return;
	}

	h1[curY][curX] = turns + '1';
	// printf("i: , x: %d | y: %d\n", curX, curY);

	for (int i = 0; i < 8; i++)
	{
		if (turns - 1 >= 0)
			fillH1(curX + xCoords[i], curY + yCoords[i], turns - 1);
	}
}

void fillH2(int curX, int curY, int turns)
{
	if (curY >= 8 || curX >= 8 || curX < 0 || curY < 0 || turns < 0 || valid)
	{
		return;
	}

	if (h1[curY][curX] != '.')
	{
		// printf("x: %d | y: %d\n", curX, curY);
		valid = true;
	}

	for (int i = 0; i < 8; i++)
	{
		fillH2(curX + xCoords[i], curY + yCoords[i], turns - 1);
	}
}

void testcase(int test)
{
	char input[3];
	char input2[3];
	scanf(" %d", &turns);
	scanf(" %s %s", input, input2);

	for (int i = 0; i < 8; i++)
	{
		for (int j = 0; j < 8; j++)
		{
			h1[i][j] = '.';
		}
	}
	valid = false;

	fillH1(input[0] - 'A', input[1] - '1', turns);
	fillH2(input2[0] - 'A', input2[1] - '1', turns);

	printf("Case #%d: %s\n", test + 1, valid ? "YES" : "NO");
	// for (int i = 0; i < 8; i++)
	// {
	// 	for (int j = 0; j < 8; j++)
	// 	{
	// 		printf("%c", h1[i][j]);
	// 	}
	// 	puts("");
	// }
	// puts("");
	// for (int i = 0; i < 8; i++)
	// {
	// 	for (int j = 0; j < 8; j++)
	// 	{
	// 		printf("%c", h2[i][j]);
	// 	}
	// 	puts("");
	// }
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
