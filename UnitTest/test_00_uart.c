/**
 * @file test_00_uart.c
 * @author cy023
 * @date 2023.02.08
 * @brief 
 * 
 */

#include <stdio.h>
#include "system.h"
#include "systick.h"
#include "delay.h"
#include "uart.h"

int main()
{
    system_init();

    printf("\t ____    ____  ____   ____  ____    ____   ______    _____            __          \n");
    printf("\t|_   \\  /   _||_  _| |_  _||_   \\  /   _|.' ___  |  |_   _|          [  |         \n");
    printf("\t  |   \\/   |    \\ \\   / /    |   \\/   | / .'   \\_|    | |      ,--.   | |.--.     \n");
    printf("\t  | |\\  /| |     \\ \\ / /     | |\\  /| | | |           | |   _ `'_\\ :  | '/'`\\ \\   \n");
    printf("\t _| |_\\/_| |_     \\ ' /     _| |_\\/_| |_\\ `.___.'\\   _| |__/ |// | |, |  \\__/ |_  \n");
    printf("\t|_____||_____|     \\_/     |_____||_____|`.____ .'  |________|\\'-;__/[__;.__.'(_) \n\n");

    printf("System Boot.\n");
    printf("[test00]: uart ...\n");

    char c;
    while (1) {
        printf("Please input a character: \n");
        c = uart0_getc();
        // scanf("%c", &c); // FIXME:
        printf("Your input character is %c\n\n", c);
    }
    return 0;
}
