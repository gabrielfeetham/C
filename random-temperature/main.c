#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

int main(void)
{
    srand((unsigned) time(NULL)); //Prevents the program giving the same values to the hours in each day.

    int temperature_readings[31][25], hour, day, max_temp;
    float sum_daily_temp = 0, average_daily_sum = 0;

    printf("Specify the maximum (integer) temperature experienced in any day of the month: ");
    while (1) {
            scanf("%d", &max_temp);
            if (max_temp >= 60) {
                printf("Temperature entered is too high!!\n\nSpecify the maximum (integer) temperature experienced in any day of the month: ");
            }
            else if (max_temp < 1) {
                printf("Temperature entered is too low!!\n\nSpecify the maximum (integer) temperature experienced in any day of the month: ");
            }
            else break;
    }

    for (day = 1; day < 31; day++) {
            for (hour = 1; hour < 25; hour++) {
                    temperature_readings[day][hour] = (rand() % max_temp);  //Fills the values in the array with random temperatures from 0°C and max_temp°C.
            }
    }

    for (day = 1; day < 31; day++) {
        for (hour = 1; hour < 25; hour++) {
            sum_daily_temp += temperature_readings[day][hour];
        }
        average_daily_sum += (sum_daily_temp / 24); //Sums the average temperatures of each day.
        sum_daily_temp = 0;
    }

    printf("\nAverage month temperature = %.1f degrees C", average_daily_sum / 30);

    return 0;
}
