#include <stdio.h>

void getInput()
{
	int hour1, hour2;
	char a[1000], b[1000], c[1000];
	scanf("%[^ ]%d:%[^-]-%d:%s%*c", &a, &hour1, &b, &hour2, &c);
	printf("%s %02d:%s-%02d:%s\n", a, hour1 - 1, b, hour2 - 1, c);
}

int main()
{
	for (int i = 0; i < 5; i++)
	{
		getInput();
	}
	return 0;
}