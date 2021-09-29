/*this program will verify if the sum of the square of the numbers are
equal to the square of their sum*/

#include <stdio.h>

#include <stdlib.h>

#include <math.h>

int main(void) {

    int a, b, cmp1, cmp2;

    printf("Type a number :");
    scanf("%d", & a);
    printf("Type another number :");
    scanf("%d", & b);

    cmp1 = pow(a, 2) + pow(b, 2);
    cmp2 = pow(a + b, 2);

    if (cmp1 == cmp2) {
        printf("They're equal !\n");
    } else {
        printf("They're not equal\n");
    }

    return 0;
}