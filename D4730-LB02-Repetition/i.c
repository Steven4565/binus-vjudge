#include <stdio.h>

void checkPass(const char *name, int average, int score) {
    if (score >= average) {
        printf("%s lolos\n", name);
    } else {
        printf("%s tidak lolos\n", name);
    }
}

int main() {

    int n, jojo, lili, bibi;
    scanf("%d%d%d%d", &n, &jojo, &lili, &bibi);
    
    double average = jojo + lili + bibi;
    for (int i = 0; i < n; i++)
    {
        int buffer;
        scanf("%d", &buffer);
        average += buffer;
    }
    average/=n+3;
    // printf("Average: %lf\n", average);
    checkPass("Jojo", average, jojo);
    checkPass("Lili", average, lili);
    checkPass("Bibi", average, bibi);
    

    return 0;
}