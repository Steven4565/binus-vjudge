#include <stdio.h>

int main() {

    int a,b,c;
    scanf("%d%d%d", &a, &b, &c);
    printf("%d\n%d\n%d\n", (a/10) % 10, (b/10) % 10, (c/10) % 10);
         

    return 0;

}