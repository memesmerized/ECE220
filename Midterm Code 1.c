//Name: Prasad Uchil
// Student Id: 1616764
#include <stdio.h>
#include <string.h>

#define ARR_MAX 50

int main(void)
{
    char array_value[ARR_MAX]= "This is, maybe, or maybe not, quite nice,,,.";
    int i,c;
    c= 0;
    char a =',';
    char b ='*';
    char new_array[ARR_MAX];//declaring variables and new character array
    /* space for your variables */
    for(i=0;i<strlen(array_value);i++)//declaring for loop to iterate till length of char array
    {
        if(array_value[i] == a)//checking if character at i is a ','
        {
            new_array[i] = b;//replacing character
            c++;//counting number of times replacement takes place

        }
        else//forming new char array to be the same as old one
        {
            new_array[i] = array_value[i];
        }
    }
    printf("\nThe new string is: %s \n", new_array);
    printf("The conversion took place %d times.", c);//printing results








    /* space for your code */

















    return 0;
}
