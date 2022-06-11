/* printing pattern make pyramid
            *
           ***
         ******
       ********** 
      */

#include <stdio.h>

int main() {
    int row, space, sym, row_no;

    printf("Please enter how many do you want to print: ");
    scanf("%d", &row);

    //calculating row
    for(row_no = 1; row_no <= row; row_no++) {
        //printing space
        for(space = 1; space <= (row - row_no); space++) {
            printf(" ");
        }
        for(sym = 1; sym <= ((2*row_no) - 1); sym++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}