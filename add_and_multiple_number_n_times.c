/*This program will take input n time and summition and multiple them.
If any input provide as negative the program will terminate.
And if any input provide as character the program will skip those. */

#include <stdio.h>
#include <windows.h>

int main() {
    int n, i;
    double  num, sum, prod;
    char ch;

    printf("Please enter how many time you want to summition: ");
    scanf("%d", &n);

    system("cls");
    printf("\n (if you input any character program will skip them \n and if you input any negative number then the program will terminate imidiately):\n\n");


    i = 1;
    sum = 0;
    prod = 1;

    while (i <= n) {
        printf("Enter %d(st, nd)th number to summitin and multiplicatin: ", i);
        scanf(" %lf", &num);
        scanf("%c", &ch);


        i++;

        //cheaking for nagative
        if(num < 0) {
            break;
        }
        //cheaking for character
        if((ch >= 'A' && ch <= 'Z') || (ch >= 'a' && ch <= 'z')) {
            continue;
        }
        sum += num;
        prod *= num;
    }
    
    printf("The summition of your providing number is: %.2lf\n", sum);
    printf("The multiplication of your providing number is: %.2lf\n", prod);


    return 0;
}