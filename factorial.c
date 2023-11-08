#include <stdio.h>

// finding factorial
int main()
{
    int num, fact;
    printf("Enter a number: ");
    scanf("%d", &num);
    fact = 1;
    
    for(int i = 1; i <= num; i++){
        fact = fact*i;
    }
    printf("The factorial of %d is %d", num, fact);
    return 0;
}
