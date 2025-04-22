#include <stdio.h>

int main(void) {
    int A = 4, B = 19;

    if (A > 10) {
        A -= 10;
    } else {
        A += B;
    }

    if (B > 10) {
        B -= 10;
    }

    if (B < 10) {
        B += A;
    }

    printf("%d", A + B);
    return 0;
}
