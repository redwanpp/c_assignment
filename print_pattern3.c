/* printing pattern make pyramid
            *
          * * *
        * * * * *
      * * * * * * * 
      */

#include <stdio.h>

int main() {
    int row, space, sym, row_no;

    printf("Please enter how many do you want to print: ");
    scanf("%d", &row_no);

    //calculating row
    for(row = 1; row <= row_no; row++) {
        //printing space
        for(space = 1; space <= (row_no - row); space++) {
            printf(" ");
        }
        for(sym = 1; sym <= ((2*row) - 1); sym++) {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}