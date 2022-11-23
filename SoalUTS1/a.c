#include <stdio.h>
#include <math.h>
#include <stdbool.h>

int main()
{
    double total = 0;
    double buffer;
    for (int i = 0; i < 12; i++)
    {
        double buffer;
        scanf("%lf,", &buffer);
        total += buffer;
    }
    printf("%lf", total);

    double a = total * 7 / 100;
    a = floor(a);
    double b = total * 5 / 100;
    b = floor(b);

    printf("%.2lf %.2lf %.2lf\n", a, b, total - a - b);

    return 0;
}

/*10.00, 10.10, 10.20, 10.30, 10.40, 10.50, 10.60, 10.70, 10.80, 10.90, 11.00, 11.10*/