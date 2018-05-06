#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

int main(void)
{
    bool digit_seen[10] = {false}, digit_repeated[10] = {false};
    int digit;
    long n;

    printf("Enter a number: ");
    scanf("%ld", &n);

    while (n > 0) {
		digit = n % 10;
		if (digit_seen[digit])
			digit_repeated[digit] = true;
		digit_seen[digit] = true;
		n /= 10;
    }

	while (1) {
            for (digit = 0; digit < 10; digit++) {
                if (digit_repeated[digit] == true)
                goto repeat;
    }
        printf("No repeated digits\n");
        return 0;
    }

    repeat:
	printf("Repeated digit(s)");
	for (digit = 0; digit < 10; digit++) {
        if (digit_repeated[digit])
            printf("  %d", digit);
	}
	printf("\n");

    return 0;

}
