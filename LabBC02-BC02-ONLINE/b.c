#include <stdio.h>

int main() {

    long long a;
    scanf("%lld", &a);

    long long un = 100 + (a-1)*50;
    printf("%lld\n", (a) * (100+un)/2);
         

    return 0;

}