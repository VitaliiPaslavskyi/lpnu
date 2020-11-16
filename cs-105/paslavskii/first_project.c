#include <stdio.h>
#include <stdlib.h>

#define TEXT "You made your first program" /* повідомлення */

void main(void){
    char name[15]; /* змінна для імені */
    system("chcp 1251"); /* підключення кирилиці */
    printf("\n\n What is your name? ");
    gets(name);
    printf("\n Hello, %s! %s", name, TEXT);
    printf("\n\n \tEnter to end program -> ");
    getchar(); /* зартимка результатів */
}