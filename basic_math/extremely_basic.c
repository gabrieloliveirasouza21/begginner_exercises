// this program will take the sum of 'a' and 'b' and put it in 'x' variable.
// then it'll print the result.

#include <stdio.h>

int main (void) {

    int a, b, x;

    scanf("%d", &a);
    scanf("%d", &b); 

    x = a + b;

    printf("X = %d\n ", x);

    return 0;
}