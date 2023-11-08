/* Trying to get this output  ---- It's really a good one, suggestyou to try it
1 2 3 4 5 6 7 8 9 10 
2 4 6 8 10 12 14 16 18 20 
3 6 9 12 15 18 21 24 27 30 
4 8 12 16 20 24 28 32 36 40 
5 10 15 20 25 30 35 40 45 50 
6 12 18 24 30 36 42 48 54 60 
7 14 21 28 35 42 49 56 63 70 
8 16 24 32 40 48 56 64 72 80 
9 18 27 36 45 54 63 72 81 90 
10 20 30 40 50 60 70 80 90 100 */

#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++){              // at first for we are getting i = 1 and then going to the 2nd for loop
        for(int j = 1; j <= 10; j++)           // then we are taking the j = 1 from the second loop
            printf("%d ", i*j);                //finally we are printing i * j = 1 but we are still in the second for loop so we are doing this till 10 ->>>> 1*1 1*2 1*3 ... 1*10
        printf("\n");                          //then we are going to the 2nd line and go back to first loop again and taking i+1 = 1 + 1 = 2 then do these steps for i = 2 too. 
    }
    return 0;
}