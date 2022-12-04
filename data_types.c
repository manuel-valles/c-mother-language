#include <stdio.h>

int main(){
    int number = 1000;
    printf("%d\n", number);
    printf("%d\n", sizeof(int));
   
    // U or u is Used for Unsigned int in C.
    int unsignedInt = 89U;
    // L or l is used for long int in C.
    long int longInt = 99998L;
    printf("Integer value with an unsigned int data: %u\n", unsignedInt);
    printf("Integer value with an long int data: %ld\n", longInt);

    /*
        c is assigned ASCII values which corresponds to the character 'c'
        a-->97 b-->98 c-->99
    */ 
    char aChar = 'a';
    printf("Value of a: %c\n", aChar);
    char cChar;
    aChar++;
    printf("Value of a after increment is: %c\n", aChar);
    cChar = 99;
    printf("Value of c: %c\n", cChar);

    float floatNumber1 = 9.0f;
    float floatNumber2 = 2E-4f;
    printf("%f\n",floatNumber1);
    printf("%f\n",floatNumber2);

    double doubleNumber1 = 12.293123;
    double doubleNumber2 = 2312312312.123123;
    printf("%lf\n", doubleNumber1);
    printf("%lf\n", doubleNumber2);

    int val = 30;
    void *ptr = &val;
    printf("%d", *(int *)ptr);

    return 0;
}