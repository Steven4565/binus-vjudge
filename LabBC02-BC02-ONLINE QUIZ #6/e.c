#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#include <ctype.h>
#include <math.h>

int main(int argc, char const *argv[])
{

	int triangles, width;
	scanf("%d%d", &triangles, &width);

	for (int t = 0; t < triangles; t++)
	{

		for (int i = 0; i < width; i++)
		{
			for (int j = 0; j < width; j++)
			{
				printf((i + j >= width - 1) ? "*" : " ");
			}
			puts("");
		}
	}

	return 0;
}
