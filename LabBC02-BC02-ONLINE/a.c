#include <stdio.h>

int main() {

    int t;
    scanf("%d", &t);

    for (int test = 0; test < t; test++)
    {
        double a, b, c, d;
        scanf("%lf %lf %lf %lf", &a, &b, &c, &d);

        printf("%.2lf\n", a*2 + b*2 + c*4/3 + d/2);
    }
        

    return 0;

}