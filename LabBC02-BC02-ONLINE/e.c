#include <stdio.h>

int main() {
    int test, a, b;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        scanf("%d %d", &a, &b);
        printf("%d\n", ((a/b) << b));
    }
    

    return 0;
}