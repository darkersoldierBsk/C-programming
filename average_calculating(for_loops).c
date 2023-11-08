#include <stdio.h>

int main()
{
    int num, sum;                               //variables
    
    for( int i = 1; i <= 10; i++){              //initial value, max value, repeated formula
        printf("Enter the number %d: ", i);
        scanf("%d", &num);                      //taking the numbers from user
        sum += num;                             //calculating the sum
    }
    
    float avg = sum / 10.0;                     //calculating average
    printf("Your average is: %.2f", avg);
    return 0;
}
