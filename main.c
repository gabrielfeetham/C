#include <stdio.h>
#include <stdlib.h>

int main(void)
{
    int i, num;
    printf("Specify number of fibonacci numbers (max value = 40): ");
    while (1) {
        scanf("%d", &num);
        if (num > 40 || num < 0)
        printf("\n\nRe-enter number of fibonacci numbers (max value = 40): ");
            else break;
    }
    long long fib_numbers[num];
    for (i = 0; i < 2; i++) {  //Puts the first two fibonacci numbers in the array, and prints their i'th place.
        fib_numbers[i] = i;
        printf("\n\n %d: %d  ", i, fib_numbers[i]);
    }
    for (i = 2; i < num; i++) {
        fib_numbers[i] = fib_numbers[i - 2] + fib_numbers[i - 1];  //Calculates the fibonacci number in the i'th place.
        printf("\n\n %d: %d  ", i, fib_numbers[i]);
    }

    return 0;
}
