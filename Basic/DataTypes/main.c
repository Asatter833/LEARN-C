// including header library
//
//
#include <stdio.h> /*Staandard input/out header library of C */
int main()
{
    // DECLARE SECTION
    //
    //
    //
    // Integer Value Declare

    int id = 1212, age, regular_Num;           /* Stores at least 2 bytes(16bits), Usually 4 bytes (32bits) of integer data */
    short int sinteger;                        /* Stores 2 bytes(8bits) of integer data */
    long int linteger;                         /* Stores at least 4 bytes(32bits), Usually 8 bytes (64bits) of integer data */
    long long int long_long_int;               /* Stores 8 bytes(64bits) of integer data */
    unsigned int positive_integer;             /* Stores Only positive integer numbers */
    unsigned long int positive_long_int;       /* Stores at least 4 bytes(32bits), Usually 8 bytes (64bits) of positive integer data */
    unsigned long long int positive_long_lint; /* Stores 8 bytes (64bits) of positive integer data */

    // Floating Value Declare

    float salary, decimal_Num = 22.4422; /* Stores 4 bytes(32bits) of decimal floating (.) data */
    double price;                        /* Stores 8 bytes(64bits) of decimal floating (.) data */
    long double Long_double_num;         /* Stores at least 10 bytes(80bits), Usually 12 or 16 bytes (96 or 128 bits) of decimal floating (.) data */

    // Character Value Declare

    char test_character = 'U'; /* Stores 1 bytes(8bit) of character data */
    signed char sCharacter;    /* Stores 1 bytes(7bits of data and 1 bit of sign bit) */
    unsigned char uCharacters; /* Stores 1 bytes (8bits of data no sign bit)*/

    // INPUT & OUTPUT SECTION
    //
    //

    // Integers

    printf("Enter an integer value: ");
    scanf("%d", &regular_Num);
    scanf("%i", &age);

    printf("Enter a short integer value: ");
    scanf("%hd", &sinteger);

    printf("Enter a long integer value: ");
    scanf("%ld", &linteger); //%ld, %li

    printf("Enter a long long integer value: ");
    scanf("%lld", &long_long_int); //%lld, %lli

    printf("Enter an unsigned integer: ");
    scanf("%u", &positive_integer);

    printf("Enter an unsigned long integer value: ");
    scanf("%lu", &positive_long_int);

    printf("Enter an unsigned long long integer: ");
    scanf("%llu", &positive_long_lint);

    // Float

    printf("Enter a floating value: ");
    scanf("%f", &salary);

    printf("Enter a double value: ");
    scanf("%lf", &price);

    printf("Enter a long double value: ");
    scanf("%llf", &Long_double_num);

    // Characters

    printf("Enter a character: ");
    scanf("%c", &test_character);
    printf("You entered %c", test_character);

    printf("Enter a signed character: ");
    // scanf("")
}