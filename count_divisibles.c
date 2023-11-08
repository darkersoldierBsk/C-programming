#include <stdio.h>

// Numbers from 100 to 50 that are divisible by 3

int main()
{
    int count;                                 // declaring a variable for counting numbers
    for(int i = 100; i >= 50; i--){           //writing initial value, interval and repeated formula
        if(i % 3 == 0){                      //checking if divisible by 3
            printf("%d ", i);
            count++;                       // counting by adding 1
        }
    }
    
    printf("\nYou have %d numbers in between 50 and 100 which are divisible by 3 ", count);

    return 0;
}

