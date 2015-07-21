#include <stdio.h>
#include <math.h>
void say(int);

const int test = 14;

int main() {
    printf("Hello, World!\n");
    printf("test: %d\n", test);
    double l;
    scanf("%lf", &l);
    printf("L is: %lf\n", sqrt(l));
    say(4);
    return 0;
}

void say(int n)
{
    printf("Say: %d!\n", n);
    printf("Test from say: %d!\n", test);
}
