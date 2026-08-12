#include <stdio.h>

int main(void) {
    int x, y, temp;

    printf("Enter values for x and y: ");
    if (scanf("%d %d", &x, &y) != 2) {
        printf("Invalid input.\n");
        return 1;
    }

    printf("Before swap: x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;

    printf("After swap: x = %d, y = %d\n", x, y);
    return 0;
}
