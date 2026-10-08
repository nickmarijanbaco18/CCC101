#include "stdio.h"

void main() {
    float nick, baco, sum;

    printf("Enter first real number: ");
    scanf("%f", &nick);

    printf("Enter second real number: ");
    scanf("%f", &baco);

    sum = nick + baco;

    printf("The sum of %.2f and %.2f is: %.2f\n", nick, baco, sum);
}