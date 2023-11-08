/* Try to make a chessboard like this

Take a number to make a chessboard: (ex) 3

* *
 *           3x3 chessboard (* = black ones, "(space)" = white ones )
* *

*/

#include <stdio.h>

int main()
{
    int num;
    printf("Enter a number to make a chess playground: ");
    scanf("%d", &num);
    
    for(int i = 1; i <= num; i++){
        for(int j = 1; j <= num; j++){
            if( (i+j) % 2 == 0) printf("*");
            else printf(" ");
        }
        printf("\n");
    }
    return 0;
}
