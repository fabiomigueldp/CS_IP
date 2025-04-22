#include <stdio.h>

int main(void) {
    int H = 77, E = 73, L = 48;
    int M, S;

    M = S = H;

    if (E / L > 0) {
        M += H % 5;
        S = 5 * (H / 5);
    } else if (E < 50) {
        E = L;
    }

    if (E < 50)
        M += E;

    printf("%d %d", M, S);
    return 0;
}
