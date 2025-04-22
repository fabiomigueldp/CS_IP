#include <stdio.h>

int main(void) {
    int A = 2, B = 11, C;
    switch (A) {
        case 1:
            if (B < 3)
                C = B * 3.5;
            else
                C = B * 3.0;
            break;
        case 2:
            if (B <= 5)
                C = B * 4.9;
            else
                C = B * 4.1;
            break;
        case 3:
            if (B <= 7)
                C = B * 2.8;
            else
                C = B * 2.5;
            break;
        case 4:
            C = B * 5.1;
            if (B >= 5)
                C = C - (C * 0.1);
            break;
        case 5:
            C = B * 3.7;
            if (B >= 10)
                C = C - (C * 0.1);
            break;
    }
    printf("%d\n", C);
    return 0;
}
