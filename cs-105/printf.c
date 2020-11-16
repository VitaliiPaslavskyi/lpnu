#include <stdio.h>

int main(){

    //printf("Текст і %специфікатори", змінні);  %d - int, %f - double, float, %c - char, %s - string
    int num = 100; // integer
    char ch = 'A'; // char
    bool answer = true; // bolean
    double dou = 11.2233445566; //double
    char str[10] = "hello!"; // string((
    printf("int is %d and double is %f \n", num, dou); // [%d, %f, %ld, %c, %p] - специфікатори формату
    printf("char is '%c' and string is '%s' \n", ch, str);
    printf("Integer is %d \n", num);
    printf("Values are %d and %f \n", num, dou);
    printf("%%7d displays %7d \n", num); // [%7d] - число буде мати як мінімум 7 розрядів
    printf("%%07 displays %07d \n", num); // [%07d] - вільні розряди заровняться нулями
    printf("Dou is approximately %1.10f \n", dou); // [%.10f] - після крапки буде 10 знаків
    printf("Dou is approximately %1.4f \n", dou);
    printf("Right-aligned %20.3f dou \n", dou); //[%20.3f] - вільні розряди справа
    printf("Right-aligned %.3f dou \n", dou);
    printf("Right-aligned %8.3f dou \n", dou); 
    printf("Right-aligned %-8.3f dou \n", dou);//[-8] - вільні розряди після числа


    // scanf("%специфікатори", &змінні); (в скані силкові параметри xdcd home)))
    int num1, num2;
    char letter;
    printf("Enter symbol: ");
    scanf("%c", &letter);
    printf("You typed - %c \n", letter);
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    printf("You typed - %d and %d \n", num1, num2);
    

    return 0;
}