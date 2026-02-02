#include <stdio.h>
#include <stdlib.h>

int main() {
    int choice;

    while (1) {
        printf("\n===== GAME MENU =====\n");
        printf("1. Start Game\n");
        printf("2. Instructions\n");
        printf("3. Settings\n");
        printf("4. Exit\n");
        printf("=====================\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("\n🎮 Game Started!\n");
                break;

            case 2:
                printf("\n📜 Instructions:\n");
                printf("- Use keyboard controls\n");
                printf("- Score points to win\n");
                printf("- Avoid obstacles\n");
                break;

            case 3:
                printf("\n⚙ Settings:\n");
                printf("- Sound: ON\n");
                printf("- Difficulty: Medium\n");
                break;

            case 4:
                printf("\n👋 Exiting Game. Goodbye!\n");
                exit(0);

            default:
                printf("\n❌ Invalid choice! Try again.\n");
        }
    }

    return 0;
}
