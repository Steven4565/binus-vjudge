#include <stdio.h>

int main() {

    long long n, sum = 0;
    scanf("%lld", &n);
    for(int i = 0; i < n; i++) {
        long long buffer;
        scanf("%lld", &buffer);

        sum += buffer;
    }

    printf("%lld\n", sum);

    return 0;
}