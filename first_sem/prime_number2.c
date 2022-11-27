/* Finding all prime number between 2 to user input */

#include <stdio.h>
#include <math.h>
#include <stdbool.h>

//function for cheaking is it prime or not
bool is_prime(int num) {
    int cheak, root;

    if (num == 2) {
        return true;
    }
    if(num % 2 == 0) {
        return false;
    }

    root = (int)sqrt((double)num);
    for(cheak = 3; cheak <= root; cheak += 2) {
        if (num % cheak == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int i, count, usr_inpt, result;
    count = 1;

    printf("Please enter the last number of the series\nyou want to see all prime: ");
    scanf("%d", &usr_inpt);

    //start loop for count number
    for (i = 2; i <= usr_inpt; i++) {
        //calling function to cheak
        result = is_prime(i);

        //cheaking condition
        if(result == 1) {
            printf("%d no. prime number is %d\n", count, i);
            count++;
        }
    }

    return 0;
}