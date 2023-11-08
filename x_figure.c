/* Take a font size: 5 (example), then make it like this (5x5 "X" FIGURE)

*   *
 * * 
  *             
 * * 
*   *

*/

#include <stdio.h>

int main()
{
    int size;
    printf("Please enter a font size (only odd numbers): ");
    scanf("%d", &size);
    if(size % 2){
        for(int i = 1; i <= size; i++){                                //interval of i and substraction formula
            for(int j = 1; j <= size; j++){                            //interval of i and substraction formula
                if( i + j == size + 1 || i == j) printf("*");          // two possibilities of places with *
                else printf(" ");
            }
            printf("\n");
        }
    }
    return 0;
}


/* 
if we make a i,j table we can see that:

for (i,j) -> (1,1), (2,2) ... (size, size)
                   and
(1,size),(2,size-1)...(size,1) is filled with asterix.


i,j  1	 2	 3	 4	 5
1	1,1	1,2	1,3	1,4	1,5
2	2,1	2,2	2,3	2,4	2,5
3	3,1	3,2	3,3	3,4	3,5    table of (i,j)
4	4,1	4,2	4,3	4,4	4,5
5	5,1	5,2	5,3	5,4	5,5


So I formulize it in the if statement up there

*/