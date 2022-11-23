#include <string.h>
#include <stdio.h>

int main()
{

    int test;
    scanf("%d%*c", &test);

    for (int t = 0; t < test; t++)
    {
        char str[100001];
        scanf("%[^\n]%*c");

        char map[27];
        int countMap[27];
        for (int i = 0; i < 27; i++)
        {
            map[i] = 0;
            countMap[i] = 0;
        }

        int length = strlen(str);
        for (int i = 0; i < length; i++)
        {
            map[str[i] - 'a']++;
        }

        for (int i = 0; i < 26; i++)
        {
            if (map[i] != 0)
            {
                countMap[map[i]]++;
            }
        }

        printf("Case %d: ", t + 1);
    }

    return 0;
}