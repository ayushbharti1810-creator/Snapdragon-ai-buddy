#include <stdio.h>
#include <string.h>

int main() {
    char input[100];

    printf("Welcome to Snapdragon AI Buddy\n");
    printf("This is my  project for Qualcomm Hackathon\n");
    printf("It runs offline on device\n\n");

    while(1) {
        printf("You: ");
        gets(input); // simple input

        if(strcmp(input, "hi") == 0) {
            printf("Buddy: Hello! I am Snapdragon Buddy made by me.\n\n");
        }
        else if(strcmp(input, "bye") == 0) {
            printf("Buddy: Bye bye! Thanks.\n");
            break;
        }
        else if(strcmp(input, "what can you do") == 0) {
            printf("Buddy: I can chat offline. I use Snapdragon NPU so no internet needed.\n\n");
        }
        else {
            printf("Buddy: You said %s, I am still learning this.\n\n", input);
        }
    }
    return 0;
}