//Name: Prasad Uchil
//Student ID: 1616764
#include <stdio.h>
int main ()
{
    int num, low_lim, up_lim, avg, ctr, user_in; //declaring variables
    ctr = 0;//initializing counter variable
    printf("Guess a number\n");//Prompting user to guess a number
    printf("Enter a lower limit\n");//Prompting user to input a lower limit to the range
    scanf("%d", &low_lim);//Accepting lower limit of guessing range
    printf("Enter an upper limit\n");//Prompting user to input an upper limit to the range
    scanf("%d", &up_lim);//Accepting upper limit of guessing range
    do//initiating do while loop
    {
        avg = (low_lim+up_lim)/2;//calculating average of the upper and lower limits
        ctr++;//counting number of tries it takes to guess a number
        printf("%d\n",avg);//printing guess
        printf("Is this number\n1.Too Large\n2.Too Small\n3.The correct guess\n");//Asking user if guess is correct
        scanf("%d",&user_in);//Accepting input description of number from user
        if(user_in == 1)//checking if number guessed was too large
            up_lim = avg;//changing upper limit for average calculation
        else if(user_in == 2)//checking if number guessed was too small
            low_lim = avg;//changing lower limit for average calculation
        else if(user_in == 3)//checking if guessed number was correct
            printf("Found the number!\n");//Informing user that number was guessed correctly
        else//case for invalid input from user
        {
            printf("Invalid input, try again\n");//prompting user to try again
            ctr--;//reducing from counter to consider invalid input
        }
    }while(user_in != 3);//exits loop only when user input is 3, ie: number has been found
    printf("Guessing took %d tries.", ctr);//prints number of tries it took to guess the number correctly
}//program ends