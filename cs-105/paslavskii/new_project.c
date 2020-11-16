#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define RMIN 1 /* найменше число */
#define RMAX 50 /* найбільше число */
#define K 3 /* кількість спроб */
int main (void)
{
int numb, answ, k;
system("chcp 1251"); /* підключення кирилиці */
srand(time(NULL)); /* запуск генератора випадкових чисел */
numb = RMIN + rand()%(RMAX - RMIN + 1); /* випадкове число */
printf("\n **** There is a given number from interval %d..%d – guess "
"that word. You have %d attempts ****\n\n", RMIN, RMAX, K);
for (k = 1; k <= K; k++) /* цикл вгадування з K спроб */
{
printf("Attemp %d - ",k);
scanf("%d", &answ);
if (answ == numb) /* число вгадано */
{
printf("\n\t *** %d - Congradulation. You guessed!!! ***", numb);
getchar(); getchar(); /* затримка */
return 0; /* завершення програми */
}
if (answ > numb) /* виведення підказки */
printf("\t\t - Too big\n");
else
printf("\t\t - Too small\n");
}
printf("\n\t*** You failed :( That number %d ***", numb);
getchar(); getchar(); /* затримка */
return 0; /* завершення програми */
}