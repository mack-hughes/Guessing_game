#include <stdio.h>


int main() {


    // Declaring the variable
    int secretvalue = 42;
    int guess;
    int play_again = 1;


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
        }
        else{
            printf("You missed!\n");
            
            if(guess > secretvalue){
                printf("Your guess was bigger than the secret number\n");
            }
            else{
                printf("Your guess was smaller than the secret number\n");
            }

            printf("Do you wanna play again (1/0)? \n");
            scanf("%d", &play_again);
        }
    }

    printf("End game!");
}
