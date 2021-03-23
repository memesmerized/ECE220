#include <stdio.h>
#define DAYS_PER_WEEK 7

int main(void)
{

    int days; // this variable should be used to store a number of days
    // entered by the user
    int weeks, days_rem;
    printf("\nEnter the number of days (<=0 to quit): ");
    scanf("%d", &days);

    while (days > 0)
    {
        /* space for your code */
        weeks = (days/7);//calculating umber of weeks
        days_rem = days-(weeks*7);//calculating number of days remaining
        printf("Number of weeks: %d\n",weeks);
        printf("Number of days remaining: %d\n",days_rem);// prints results















        printf("\nEnter the number of days (<=0 to quit): ");
        scanf("%d", &days);
    }
    return 0;
}

//
// Created by uchil on 2021-02-24.
//

