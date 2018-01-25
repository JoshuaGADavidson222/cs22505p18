/*
 * =====================================================================================
 *
 *       Filename:  chars.c
 *
 *    Description:  Practice characters
 *
 *        Version:  1.0
 *        Created:  01/23/2018 08:51:09 AM
 *       Revision:  none
 *       Compiler:  gcc chars.c -o chars -lm
 *
 *         Author:  Joshua Davidson (), joshuadavidson1@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>

// Constants

// Function Prototypes

// Main Function
int main()
{
    char input;
    int age;
    printf("Do you liked to code?:\n");
    scanf("%c", &input);
    printf("1)You entered [%c]\n", input);
    printf("Do you really like to code?:\n");
    //use an empty space becfore %c. this will take care of the previous ENTER char
    scanf(" %c", &input);
    printf("2)You entered [%c]\n", input);
    printf("3)You entered [%c]\n", input);

    printf("Enter your age:\n");
    scanf("%d", &age);
    printf("Your age is [%d]\n", age);
    return 0;
}
// Function Definitions


