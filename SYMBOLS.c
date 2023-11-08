#include <stdio.h>
void print_square(int side){
    for(int i = 1; i <= side; i++){
        for(int i = 0; i <side; i++)
        printf("*");
        printf("\n");
    }
}

void print_right_triangle(int height){
   for(int i = 1; i <= height; i++){
       for(int j = 1; j<= i ; j++) printf("*");
       printf("\n");
    }
}

void print_number_pattern(int rows){
   for(int i = 1; i <= rows; i++){
       for(int j = 1; j<= i ; j++) printf("%d",i);
       printf("\n");
    }
}

int main()
{
    char type;
    int side, height;
    

    while(1){
        printf("Enter a pattern type:\ns for square\nr for right angled triangle\nn for numbers: ");
        scanf("%c", &type);
        printf("\n");
        
        if(type == 's'){
            printf("Enter a side length: ");
            scanf("%d", &side);
            printf("Here is your %d x %d square:\n\n", side, side );
            print_square(side);
            break;
        }else if(type == 'r'){
            printf("Enter a height: ");
            scanf("%d", &side);
            print_right_triangle(side);
            break;
        }else if(type == 'n'){
            printf("Enter the number of rows: ");
            scanf("%d", &side);
            print_number_pattern(side);
            break;
        }else
            printf("Invalid pattern type\n");
    }
}