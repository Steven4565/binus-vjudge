#include <stdio.h>

int main() {
    char a[1000], b[1000];
    int foo;

    scanf("%[^\n] ",a);
    scanf("%[^\n]\n",b);
    char endl = getchar();
    // printf("%c", endl);
    // printf("test");
    printf("%s", a);
    printf("%s", b);


    return 0;
}