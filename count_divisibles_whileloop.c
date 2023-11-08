#include <stdio.h>

// Numbers from 100 to 50 that are divisible by 3

int main()
{
    int i, count;                                 // declaring a variable for counting numbers
    i = 100;                                     // setting an initial value to i
    while(i >= 50){                             // boundaries man boundaries
        if(i % 3 == 0){                        // checking if it is divisible by 3
            printf("%d ", i);                 
            count++;                         // counting the divisibles by adding 1 each
        }
        i--;
    }
    printf("\nYou have %d numbers in between 50 and 100 which are divisible by 3 ", count);

    return 0;
}
