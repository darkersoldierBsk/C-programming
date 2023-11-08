/* printing this value on the screen

 5 99 1
10 89 2
15 79 3
  ...
50 9 10

*/
#include <stdio.h>

int main()
{
    for(int i = 1; i <= 10; i++){
        printf("%d %d %d\n", 5*i, 100 - ((i-1)*10 + 1), i);
    }

    return 0;
}
