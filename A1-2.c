//Name: Prasad Uchil
//Student ID: 1616764
#include<stdio.h>

int main()
{
    float balance=1000000;
    float withdrawal=100000;
    float int_rate=0.08/12;
    float interest;
    int year=0, month=1;// initializing variables
    while(balance>0)//while loop begins as long as bank balance is greater than 0
    {
        interest=balance*int_rate;//interest is calculated on the money in account
        balance=balance+interest;//new balance is created including the interest calculated
        if(month==6)//checking to see if July
        {
            if((balance-withdrawal)<0)//checking if 100000 cannot be withdrawn
            {
                withdrawal=balance;//storing value of last withdrawal
            }
            balance=balance-withdrawal;//calculating balance after withdrawall
        }
        month++;//changing month number
        if(month>12)//restarting year
        {
            month=1;//restarting year with month 1
            year++;//number of year it takes to empty account
        }
    }
    printf("The number of year it takes to empty the account is: %d\n",year);
    printf("The amount of last withdrawal would be: $%.2f\n",withdrawal);//displaying calculated values
}
