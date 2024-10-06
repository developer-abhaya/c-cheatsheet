#include <stdio.h>

int main()
{
    int day, week, month, year;

    day = 370;

    //    Calculate the day of the following data
    year = day / 365;
    month = (day / 30.4167);
    week = (day % 365) / 7;
    day = ((year * 365) + (week*7));

    // printing the value of the data

    printf("Days : %d\n", day);
    printf("Week: %d\n", week);
    printf(" Month: %d\n", month);
    printf("Year: %d\n", year);

    return 0;
}