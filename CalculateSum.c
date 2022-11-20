#include <stdio.h>
#include <time.h>

int main() {
    
    int iterations = 10000000;
    double x = 0;
    
    for (int i = 0; i < iterations; i++)
    {
        x = x + i;
    }
    int tick = clock();
    
    printf("%.16f\n", x);
    printf("%f\n", (float) tick/CLOCKS_PER_SEC);

    return 0;
}
