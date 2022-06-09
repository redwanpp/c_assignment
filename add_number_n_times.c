/*This program will take input n time and summition them.
If any input provide as negative the program will terminate.
And if any input provide as character the program will skip those. */

#include <stdio.h>

int main() {
    int n, i;
    double  num, sum;

    printf("Please how many time you want to summition: ");
    scanf("%d", &n);

    i = 1;
    sum = 0;

    while (i <= n) {
        printf("Enter %d(st, nd)th number to sum: ", i);
        scanf(" %lf", &num);

        i++;

        //cheaking for nagative
        if(num < 0) {
            break;
        }
        //cheaking for character
        if((char)num >= 'A' && (char)num <= 'Z' || (char)num >= 'a' && (char)num <= 'z') {
            continue;
        }
        sum += num;
    }
    
    printf("The summition of your providing number is: %.2lf\n", sum);


    return 0;
}