#include <stdio.h>

int sum = 100;

int main(){
    extern int sum; 
    printf("Sum is %d", sum);

    extern int num;
    printf("Num is %d", num); 

    char ch; //char

    int number; //integer
    // short int num {–32.768 to +32.767}
    // long int num {–2.147.483.648 to +2.147.483.647} - standart int
    // unsigned short int {0 to 65.535}
    // unsigned long int {0 to 4.294.967.295}

    float dot; //float

    double dou; //double 

    char str[10] = "Some text"; //string

    sizeof(num); // повертає обсяг памяті зарезервованої під змінну
    return 0;
}