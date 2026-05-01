#include <stdio.h>
#include <string.h>

#define MAX_INPUT 1024

int main (void){
    //This is where the raw input of the user goes
    char buffer [MAX_INPUT];
    char *input;

    while (1) 
    {
        //Prompt
        printf(">> ");

        //Catch user input
        input = fgets(buffer, MAX_INPUT, stdin);

        //If user press CTRL + D then exit
        if (input == NULL) 
        {
            printf("\n");
            break;
        }

        //Calculate the index of the "\n" and change it to NULL
        input[strcspn(input, "\n")] = '\0';

        //If user typed exit then exit the program
        if (strcmp(input, "exit") == 0)
        {
            break;
        }

        //Print back what user typed
        printf("%s\n", input);
    }


    return 0;
}