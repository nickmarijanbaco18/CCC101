#include "stdio.h"
void main() {
    int nick, baco, sum;

    printf("Enter first integer: ");
    scanf("%d", &nick);

    printf("Enter second integer: ");
    scanf("%d", &baco);

    sum = nick + baco;

    printf("The sum of %d and %d is: %d\n", nick, baco, sum);
}