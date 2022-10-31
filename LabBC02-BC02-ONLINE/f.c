#include <stdio.h>

int main() {
    int test;
    double a, b;
    scanf("%d", &test);

    for (int t = 0; t < test; t++)
    {
        scanf("%lf %lf", &a, &b);
        printf("%.2lf\n", a*b/100);
    }
    

    return 0;
}