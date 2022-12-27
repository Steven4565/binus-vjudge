#include <stdio.h>
#include <string.h>

typedef struct Entry
{
	int num;
	char name[50];
} Entry;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d%*c", &n);

	Entry entry[n];
	for (int i = 0; i < n; i++)
	{
		scanf("%d#%[^\n]%*c", entry[i].num, entry[i].name);
	}

	return 0;
}