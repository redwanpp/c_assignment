/*calculete summition of a series with sqr */

#include <stdio.h>
#include <math.h>

int main() {
    int i, n, sum;
    sum = 0;

    printf("Please enter the last number or your series: ");
    scanf("%d", &n);

    for(i = 1; i <= n; i++) {
        sum += pow(i, 2);
    }
    printf("The semmition of series is: %d\n", sum);

    return 0;
}