#include <stdio.h>
#include <stdbool.h>

int main()
{

	int n;
	scanf("%d", &n);

	bool found = false;

	for (int i = 0; i < n; i++)
	{
		int buffer;
		scanf("%d", &buffer);
		if (buffer)
		{
			found = true;
			break;
		}
	}

	puts((found ? "not easy" : "easy"));

	return 0;
}