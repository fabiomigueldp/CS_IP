#include <stdio.h>

int main(void) {
    int M = 41;
    int H = 3, A = 15;
    int T;

    T = ((M % 2) + 1) * (M * H) - (M * A);

    if (T % 2)
        T++;

    if (T < 0)
        T = -T;

    printf("%d", T);
    return 0;
}
