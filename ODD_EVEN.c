#include <stdio.h>
#include <stdlib.h>

int main(void) {
    int num, temp;

    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input.\n");
        return 1;
    }

    // Work with the absolute value to handle negative numbers correctly
    temp = abs(num);

    // Repeatedly subtract 2 using a loop until the value is less than 2
    while (temp >= 2) {
        temp -= 2;
    }

    // Evaluate the remaining value (0 = Even, 1 = Odd)
    if (temp == 0) {
        printf("%d is EVEN.\n", num);
    } else {
        printf("%d is ODD.\n", num);
    }

    return 0;
}