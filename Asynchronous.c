#include <stdio.h>
#include <stdlib.h>

#if defined(_WIN32) || defined(_WIN64)
    #include <windows.h>
    void sleep_ms(int milliseconds) {
        Sleep(milliseconds);
    }
    void clear_screen(void) {
        system("cls");
    }
#else
    #include <unistd.h>
    void sleep_ms(int milliseconds) {
        usleep(milliseconds * 1000);
    }
    void clear_screen(void) {
        printf("\033[H\033[J");
    }
#endif

/* ANSI Escape Color Codes */
#define COLOR_RESET   "\033[0m"
#define COLOR_RED     "\033[1;31m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_CYAN    "\033[1;36m"
#define COLOR_WHITE   "\033[1;37m"

/* Function to print ASCII Face with Blinking Eyes */
void print_face(int is_blinking, const char* color) {
    printf("%s", color);
    printf("         .-'''''-.         \n");
    printf("       .'  ______ '.       \n");
    printf("      /   /      \\  \\      \n");
    printf("     :   |         |   :    \n");
    if (is_blinking) {
    printf("     |   |   -   -  |   |   <-- (Blinking!)\n");
    } else {
    printf("     |   |   o   o  |   |   \n");
    }
    printf("     |   |    ^     |   |   \n");
    printf("     :   |  \\___/   |   :    \n");
    printf("      \\   \\______/  /      \n");
    printf("       '.        .'        \n");
    printf("         '-....-'          \n");
    printf("%s", COLOR_RESET);
}

/* Function to render Fireworks Sparkles */
void print_fireworks(int frame) {
    const char* colors[] = {COLOR_RED, COLOR_YELLOW, COLOR_CYAN, COLOR_MAGENTA, COLOR_GREEN};
    const char* c = colors[frame % 5];

    if (frame % 2 == 0) {
        printf("%s   *  .  *   .   *   .  *   .  *%s\n", c, COLOR_RESET);
        printf("%s .   \\  |  /   .   \\  |  /   .%s\n", c, COLOR_RESET);
        printf("%s    -- SPOOM! --   -- BANG! -- %s\n", c, COLOR_RESET);
        printf("%s .   /  |  \\   .   /  |  \\   .%s\n", c, COLOR_RESET);
        printf("%s   *  '  *   '   *   '  *   '  *%s\n", c, COLOR_RESET);
    } else {
        printf("%s .   *   .   *   .   *   .   * %s\n", c, COLOR_RESET);
        printf("%s   \\   |   /       \\   |   /   %s\n", c, COLOR_RESET);
        printf("%s  -- BOOM! --     -- FLASH! -- %s\n", c, COLOR_RESET);
        printf("%s   /   |   \\       /   |   \\   %s\n", c, COLOR_RESET);
        printf("%s .   *   .   *   .   *   .   * %s\n", c, COLOR_RESET);
    }
}

int main(void) {
    int i, j;
    const char* text_colors[] = {COLOR_YELLOW, COLOR_CYAN, COLOR_GREEN, COLOR_MAGENTA, COLOR_RED, COLOR_WHITE};
    int num_colors = 6;

    /* Countdown Animation Loop */
    for (i = 5; i > 0; i--) {
        clear_screen();
        printf("\n\n");
        printf("=========================================\n");
        printf("       NEW YEAR COUNTDOWN BEGINS...      \n");
        printf("=========================================\n\n");
        
        printf(COLOR_RED "                 [ %d ]                 \n\n" COLOR_RESET, i);
        
        print_face(i % 2 == 0, COLOR_CYAN);
        sleep_ms(800);
    }

    /* Celebration & Dynamic Blinking Loop */
    for (j = 0; j < 30; j++) {
        clear_screen();
        
        const char* current_color = text_colors[j % num_colors];
        
        print_fireworks(j);
        
        printf("\n");
        printf("%s*****************************************%s\n", current_color, COLOR_RESET);
        printf("%s***       HAPPY NEW YEAR 2026!        ***%s\n", current_color, COLOR_RESET);
        printf("%s***   MAY YOUR CODE ALWAYS COMPILE!   ***%s\n", current_color, COLOR_RESET);
        printf("%s*****************************************%s\n\n", current_color, COLOR_RESET);

        int is_blinking = (j % 3 == 0);
        print_face(is_blinking, current_color);

        sleep_ms(250);
    }

    clear_screen();
    printf(COLOR_GREEN "\n=== CELEBRATION COMPLETED! HAPPY NEW YEAR! ===\n\n" COLOR_RESET);
    return 0;
}