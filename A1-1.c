//Name: Prasad Uchil
//Student ID: 1616764
#include <stdio.h>

int main()
{
    int num1, num2, bignum, smallnum, i, sumnum;//declaring variables
    sumnum = 0;
    num1 = 1;
    num2 = 1;
    i=0;//initiating values
    while(num1>=0 && num2>=0)//beginning while loop
    {
        printf("Enter a number\n");
        scanf("%d",&num1);
        printf("Enter another number\n");
        scanf("%d",&num2);//accepting two numbers from user
        if(num1<0 || num2<0)//checking and exiting if either number is negatve
            break;
        else if(num1>num2)//finding max value
        {
            bignum = num1;
            smallnum = num2;
        }
        else if(num2>num1)//finding max value
        {
            bignum = num2;
            smallnum = num1;
        }
        else if(num1 == num2)//checking if both numbers are the same and printing error message
        {
            printf("Please use different numbers\n");
            continue;
        }
        for(i=smallnum; i<=bignum;i++)//calculating sum of the range by using for loop
        {
            sumnum= sumnum+i;
        }
        printf("The Maximum value is: %d\n",bignum);
        printf("The Minimum value is: %d\n",smallnum);
        printf("The sum of the range of values is: %d\n",sumnum);//printing values
    }
}
