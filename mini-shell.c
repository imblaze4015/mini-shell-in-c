#include <stdio.h>
#include <string.h>

int main (void){
    //Buffer
    char user_input [100];

    while (1) {
        //Prompt
        printf(">> ");

        //Catch user input and put in buffer
        fgets(user_input, 100, stdin);

        //Calculate the index of the "\n" and change it to NULL
        user_input[strcspn(user_input, "\n")] = '\0';

        if (strcmp(user_input, "exit") == 0)
            break;

        //Print back what user typed
        printf("%s\n", user_input);
    }


    return 0;
}
