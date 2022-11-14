#include <stdio.h>
#include <math.h>

int main() {


    // Declaring the variable
    int secretvalue = 42;
    int guess;
    int play_again = 1;
    int number_of_attempts = 1;
    double punctuation = 1000;

    // Header
    printf("********************************\n");
    printf("* Welcome to our guessing game *\n");
    printf("********************************\n");


    while(play_again){
        // Getting the guess of the player
        printf("What is your guess? ");
        scanf("%d", &guess);


        if(guess == secretvalue){
            printf("Congratulations! You nailed it\n");
            printf("You played on the %d time\n", number_of_attempts);
            printf("Your punctuation is %.1f\n", punctuation);
            break;
        }
        else{
            printf("You missed!\n");
            
            if(guess > secretvalue){
                printf("Your guess was bigger than the secret number\n");
            }
            else{
                printf("Your guess was smaller than the secret number\n");
            }
            
            punctuation = punctuation - (double)(guess-secretvalue)/2;

            if(punctuation <= 0){
                printf("Your punctuation is already zero. You can not play anymore");
                break;
            }
            else{
                printf("Do you wanna play again (1/0)? \n");
                scanf("%d", &play_again);
            }

        }
        number_of_attempts++;
    }
    printf("End game!\n");
}
