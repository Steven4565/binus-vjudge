#include <stdio.h>
#include <string.h>

void swap(char *a, char *b)
{
	char temp = *a;
	*a = *b;
	*b = temp;
}

void reverse(char *arr, int start, int end)
{
	for (int i = 0; i < ((end - start) / 2) + 1; i++)
	{
		swap(&arr[start + i], &arr[end - i]);
	}
}

int main()
{

	int test;
	scanf("%d%*c", &test);

	for (int t = 0; t < test; t++)
	{
		int n;
		scanf("%d%*c", &n);
		char str[2000];
		scanf("%[^\n]%*c", str);

		for (int i = 0; i < n; i++)
		{
			int start, end;
			scanf("%d %d%*c", &start, &end);
			start--;
			end--;

			reverse(str, start, end);
		}
		printf("Case #%d: %s\n", t + 1, str);
	}

	return 0;
}