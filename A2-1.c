//
// Created by uchil on 2021-03-22.
//
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main()
{
    int die1, die2;
    int X, i, sum;//declaring variables
    int frequency[5]={0};//initializing array and setting value to 0
    int cond =0;//initializing condition for input
    do//user input loop
    {
        printf("Enter the number of rolls\n");
        scanf("%d", &X);
        if (X < 10 || X > 1000000)//printing error message if out of bounds
            printf("Please enter a value between 10 and 10^6\n");
        else
            cond = 1;
    } while(cond==0);
    srand(time(NULL));//passing seed to random function
    for (i = 1; i <= X; i++)
    {
        die1 = rand() % 5;//rolling die1
        die1++;//adding 1 to value of die
        die2 = rand() % //rolling die2
        die2++;//adding 1 to value of die
        if (die1 == 2 || die1 == 4 || die1 ==6)
            die1--;//making die with same value on two sides
        else if (die2 == 2 || die2 == 4 || die2 ==6)
            die2--;
        sum = die1+die2;//adding roll from each die
        if (sum == 2)//checking sum and increasing counter
            frequency[0]++;
        else if (sum == 4)
            frequency[1]++;
        else if (sum == 6)
            frequency[2]++;
        else if (sum ==8)
            frequency[3]++;
        else if (sum == 10)
            frequency[4]++;
            }
    printf("Sum\tFrequency\n");//printing results
    printf(" 2\t %4d\n",frequency[0]);
    printf(" 4\t %4d\n",frequency[1]);
    printf(" 6\t %4d\n",frequency[2]);
    printf(" 8\t %4d\n",frequency[3]);
    printf("10\t %4d\n",frequency[4]);
}