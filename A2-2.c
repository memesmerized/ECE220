//
// Created by uchil on 2021-03-22.
//

#include <stdio.h>
#define NO_ELEMENTS 6//defining function
int main()
{
    int i,n;
    char j;//declaring variables
    char last_char [NO_ELEMENTS] = {'b','d','e','g','c','f'};//creating array
    char array[NO_ELEMENTS][26] ={};//creating empty 2d array
    for (i = 0;i<NO_ELEMENTS;i++)//looping through 2d array
    {
        for (j='a';j<=last_char[i];j++)//looping thrugh 1d array
        {
            array[i][j-'a']=j;//character from last_char of 1d array
        }
    }
    for (n = 0;n<NO_ELEMENTS;n++)//printing each array on a new line
        printf("%s\n",array[n]);

}