#include <stdio.h>

int main() {
    int vote;

    printf("Vote for your favorite:\n");
    printf("1. Candidate A\n");
    printf("2. Candidate B\n");
    printf("3. Candidate C\n");
    printf("Enter your choice (1-3): ");
    scanf("%d", &vote);

    switch (vote) {
        case 1:
            printf("You voted for Candidate A.\n");
            break;
        case 2:
            printf("You voted for Candidate B.\n");
            break;
        case 3:
            printf("You voted for Candidate C.\n");
            break;
        default:
            printf("Invalid vote.\n");
    }

    return 0;
}
