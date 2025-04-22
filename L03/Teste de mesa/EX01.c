#include <stdio.h>

int main () {
    int H = 54, E = 31, N = 57, R, Y;

    R = E + N;
    Y = E - N;

    if (H > R) {
        R = H - R;
    } else if (H > Y) {
        R -= H;
        Y = H - Y;
    } else {
        Y -= H;
    }

    printf ( "%d %d", R, Y);

    return 0;
}