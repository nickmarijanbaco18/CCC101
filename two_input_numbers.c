#include "stdio.h"

void main() {
    int nick;
    float baco;
    printf("Enter two numbers: ");
    scanf("%d %f", &nick, &baco);

    if (nick > 0) {
        printf("The first number %d is positive\n", nick);
    } else if (nick < 0) {
        printf("The first number %d is negative\n", nick);
    } else {
        printf("The first number is neutral\n");
    }
    if (baco > 0) {
        printf("The second number %f is positive\n", baco);
    } else if (baco < 0) {
        printf("The second number %f is negative\n", baco);
    } else {
        printf("The second number is neutral\n");
    }
}
