#include <stdio.h>
#include <stdbool.h>
#include <math.h>
#include <string.h>

char arr[101][101];
int row, col;
int count = 0;

bool isValid(int curX, int curY)
{
	if (arr[curY][curX] == '#' || arr[curY][curX] == '0')
		return false;

	if (curY >= row || curX >= col || curX < 0 || curY < 0)
		return false;

	return true;
}

void fill(int curX, int curY)
{
	if (!isValid(curX, curY))
	{
		return;
	}

	if (arr[curY][curX] == '.')
	{
		arr[curY][curX] = '0';
	}
	else if (arr[curY][curX] == '*')
	{
		count++;
		arr[curY][curX] = '0';
	}

	fill(curX + 1, curY);
	fill(curX - 1, curY);
	fill(curX, curY + 1);
	fill(curX, curY - 1);
}

void testcase(int test)
{
	scanf("%d %d%*c", &row, &col);

	int sourceX, sourceY;
	count = 0;

	for (int i = 0; i < row; i++)
	{
		scanf("%[^\n]%*c", arr[i]);
		for (int j = 0; j < col; j++)
		{
			if (arr[i][j] == 'P')
			{
				sourceX = j;
				sourceY = i;
			}
		}
	}
	fill(sourceX, sourceY);

	printf("Case #%d: %d\n", test + 1, count);
}

int main(int argc, char const *argv[])
{

	int test;
	scanf("%d%*c", &test);
	for (int i = 0; i < test; i++)
	{
		testcase(i);
	}

	return 0;
}
