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

#define COLOR_RESET   "\033[0m"
#define COLOR_RED     "\033[1;31m"
#define COLOR_GREEN   "\033[1;32m"
#define COLOR_YELLOW  "\033[1;33m"
#define COLOR_BLUE    "\033[1;34m"
#define COLOR_MAGENTA "\033[1;35m"
#define COLOR_CYAN    "\033[1;36m"
#define COLOR_WHITE   "\033[1;37m"

void print_custom_face(int is_blinking, const char* color) {
    printf("%s", color);
    printf("                                                .............:::::..\n");
    printf("                                            ...::::::........:^~~!!!~^.....\n");
    printf("                                         ...:::^~^^^::::::..:::^^~~~!~^.\n");
    printf("                                        .:::^^^^^^^^::::::......:::^~!~^.\n");
    printf("                                      .^~~~~~^^^^^^:::::....:.....::^~~^::::::...\n");
    printf("                                     :~!~~~~~~~^^::::::::.:::..:.....^~^::::::^^^::...\n");
    printf("                                   .~!~~~~~~!!~^^^^^^::::^^::::::::...^^^::::::^^^^:::...\n");
    printf("                                  .^~^^!!~~!!~^^~~~!~~^^~~~^^^^^^^::^^^^^:::..:^^^^:::::....\n");
    printf("                                 .^~^^~!!~!!~~~!!77?!~~~~!!~~~~~~~^^~~~^^^^:...:::::::::::::.\n");
    printf("                                .^~~~^^~!~~!~~!!??77~~!!77!!~~!!7!~~~~^^!~~~^:.....:::::::...\n");
    printf("                                :~~~~~~~^^~!!!7???7!!77???77!7777!!!~^^~!!~~~^::...::::::::..\n");
    printf("                                ^!~~~~~~^~~!!77??77?J?JJJ?777777??7!~~!!!!!~!!^:.:::^^::::::\n");
    printf("                                .~~~^~~^^~~!77777?YYJJYYJ??777???J?77!!77!!~!!~:.:::^^::::::\n");
    printf("                                 ^~~^^~~~^~77!!!7?J?7????JJ7777?????7!!!!!!~~!~^..::::..::..\n");
    printf("                                 ^~~~^^~~^~7!!77!!7!~!!!7?J7!7J?7!!~~^^^^^~^^!!^:::::......\n");
    if (is_blinking) {
        printf("                                   .^^~~~~~7??-------------!-----------~~~~^~~:::.......\n");
        printf("                                   .^^^^^!\\GBBBG---------!!-----------77777!!7~:::.....\n");
        printf("                                   :^~^Y####GB---------~------------^^~~!!7777!::^:...\n");
    } else {
        printf("                                   .^^~~~~~7??J5YJ7JJJ77??JJYY7!?J?7!!!!!!!~~~~^~~:::.......\n");
        printf("                                   .^^^^^!\\GBBBGPYJJ?\\!77?J5PY77?7777777777777!!7~:::.....\n");
        printf("                                   :^~^Y####GPYJY!^^~77J5PGGY7!7?777^^^~~!!7777!::^:...\n");
    }
    printf("                                    :!~P&&&&###BG5YJYY5GBBBGPYJ????\\!~!7!!77????^:^:..\n");
    printf("                                     ~7G&&&&&###BBBBB##&&&#BG5YJJYYYYYYYYYYJJJJ?^:::.\n");
    printf("                                     .7G&&&@@&##BB###&&&###BGP5JJY5555PPP555YJJ?^:::.\n");
    printf("                                      :G&&&@@@&########&&&##BGP5JJ5555PPPPP55YJ7^:\n");
    printf("                                       5#&&&&@&&&###BB#BP5PP5YJJYYY555PPPP555Y?7^.\n");
    printf("                                       J#&&&&&&&&&###BGYY5P55Y??JJYPPPPPP555YY?!.\n");
    printf("                                       B#&&&&&&&&&&&##B##\\BGBP5YYY55PPPP555YY?\\!\n");
    printf("                                        Y#&&&&&&&&&@&&&&##GPBG555555555555YYJ7~.\n");
    printf("                                        ^B##&&&&&&&&&&#BGP5PYYJJY55Y5555YYJJ?^\n");
    printf("                                         7#########BG55YYJJJ????7?YYYYYYJJJJ!\n");
    printf("                                         J#######BBGGGGGGP5P5JJ?7JJJYYJJJJ!\n");
    printf("                                          J#########BBGP5YYYYJJJJYYJJJJJ?^\n");
    printf("                                           !G#######BBGPP555555YYYJJJ??7:\n");
    printf("                                    ......  5BBB#######BBGGGP555YYJJ?\\!.\n");
    printf("                               .:^^:.....~G#BBBBB###BBGGGPP55YYJJ?7?! ....\n");
    printf("                        ..::.......:^^^:.....:!#####BGGGGGPPPP55YYJ??????7:.......\n");
    printf("                  ....:::::...:....:::::.....:^^P#####BGGP5YYJJ??????JJJJ??^..........         ........\n");
    printf("                ..^^:::::::...:::....::.....:^^^~G#BBBBBBGGP5YYJJJJYYJJ?!^............................\n");
    printf("               ::..::::::::....::....::.....:^^^^~5GBBBBGGGPP5YYYJJYYYJJJ7!:..........................:....\n");
    printf("           .:::....:^::::.:..... ...::.:...::^^^^^J5GBBBGGPP5YYYYYYYYYYJ7~:...::............................\n");
    printf("          .^:......:^:...:......   ..:. ::.:..:^^^^^7YPBBGGGPPP555YYY55YJ~:...:::..............................\n");
    printf("          ::...:....::.......:..   .::. .::...:::^^^^!J5PGGGGGGGGP55555J~:...::::..............................\n");
    printf("          ::....:...^:.......:..  .... ..::..:::::::::^!J5PGGBBBBBGPPPJ^::..:::::............:.:..........:....\n");
    printf("          ^::. ....::::......:.   .... ..::..:::..:::::::^7J5GB#BBBGP?^:::::::::... .........::...........:....\n");
    printf("          ^:... ..::..:.... .:.   ... ...::...::.....:::::::^!?YYJ!~:.:^:::::::..    ........:.:::.............:\n");
    printf("          :. ...   ... ...    :.. ........::....:::.....::::::..... ....:::::::..    .........::::.............::\n");
    printf("          :.   ...   .. ...   .:.  .........:.....:::.......:::::........::::::...   .........::::..........::.::.\n");
    printf("          :..  .... . ...   .:.  ... .....:.......::.......::::::....:::::.....    .........:::..............:..\n");
    printf("          :..     ... ..    .:. .... .....::........:...................::....    ...::..:.:::........... ..:...\n");
    printf("%s", COLOR_RESET);
}

void print_fireworks(int frame) {
    const char* colors[] = {COLOR_RED, COLOR_YELLOW, COLOR_CYAN, COLOR_MAGENTA, COLOR_GREEN};
    const char* c = colors[frame % 5];

    if (frame % 2 == 0) {
        printf("%s   *  .  *   .   *   .  *   .  *%s\n", c, COLOR_RESET);
        printf("%s .   \\  |  /   .   \\  |  /   .%s\n", c, COLOR_RESET);
        printf("%s    -- BOOM! --   -- BANG! -- %s\n", c, COLOR_RESET);
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

    for (i = 5; i > 0; i--) {
        clear_screen();
        printf("\n\n=======================================================================\n");
        printf("                     NEW YEAR COUNTDOWN BEGINS...                      \n");
        printf("=======================================================================\n\n");
        printf(COLOR_RED "                               [ %d ]                 \n\n" COLOR_RESET, i);
        print_custom_face(i % 2 == 0, COLOR_CYAN);
        sleep_ms(800);
    }

    for (j = 0; j < 30; j++) {
        clear_screen();
        const char* current_color = text_colors[j % num_colors];
        print_fireworks(j);
        printf("\n");
        printf("%s***********************************************************************%s\n", current_color, COLOR_RESET);
        printf("%s***                      HAPPY NEW YEAR 2026!                      ***%s\n", current_color, COLOR_RESET);
        printf("%s***                  HAPPY NEW YEAR EVERYONE, HAPPY BLESSINGS!                  ***%s\n", current_color, COLOR_RESET);
        printf("%s***********************************************************************%s\n\n", current_color, COLOR_RESET);
        print_custom_face(j % 2 == 0, current_color);
        sleep_ms(350);
    }

    clear_screen();
    printf(COLOR_GREEN "\n=== CELEBRATION COMPLETED! HAPPY NEW YEAR! ===\n\n" COLOR_RESET);
    return 0;
}