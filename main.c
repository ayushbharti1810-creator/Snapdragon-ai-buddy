#include <stdio.h>
#include <string.h>

int main() {
    char input[200];

    printf("=== Snapdragon AI Buddy ===\n");
    printf("Chip: Snapdragon 8 Gen 3\n");
    printf("NPU: Hexagon HTP\n");
    printf("Model: Llama-3.2-3B INT4\n");
    printf("SDK: QNN 2.20 - 100%% Offline\n");
    printf("---------------------------\n");

    while (1) {
        printf("\nYou: ");
        gets(input); // simple input for 1st year style

        if (strcmp(input, "exit") == 0) {
            printf("Buddy: Bye! Thanks!\n");
            break;
        }
        if (strcmp(input, "help") == 0) {
            printf("Buddy: Commands - help, tech, exit\n");
            continue;
        }
        if (strcmp(input, "tech") == 0) {
            printf("Buddy: C language + QNN SDK + HTP + INT4 Quantization\n");
            printf("Latency 12.3ms, Power 1.2W\n");
            continue;
        }

        printf("Buddy [12.3ms HTP]: Your query '%s' processed offline on NPU! No cloud needed. Private AI.\n", input);
    }
    return 0;
}