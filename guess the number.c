#include <stdio.h>
#include <stdlib.h>
int main() {
    srand(time(NULL));
    int guess;
    int random;
     random= rand ()%100+1 ;
    printf("Guess the number (1-100): ");
    scanf("%d",&guess);
    do {

        if (guess >= random)
            printf("To high\n");

        else
                printf("To low\n");
    printf("Guess the number again(1-100): ");
    scanf("%d",&guess);

}while (guess != random);
    printf("congratulation!!!! ");

    return 0;

}