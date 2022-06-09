/* Examing is the user input is a prime or not ? */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool is_prime(int inpt) {
    int i, root;

    if(inpt == 2) {
        return true;
    }
    if(inpt % 2 == 0) {
        return false;
    }
    
    root = sqrt(inpt);
    for(i = 3; i <= root; i += 2 ) {
        if(inpt % i == 0) {
            return false;
        }   
    }
    return true;
} 

int main() {
    int inpt, result;

    printf("Please enter a number to cheak is it prime or not? ");
    scanf("%d", &inpt);

    result = is_prime(inpt);


    if(result == 1) {
        printf("%d is a prime number.\n", inpt);
    }
    else {
        printf("%d is not a prime number.\n", inpt);
    }

    return 0;
}