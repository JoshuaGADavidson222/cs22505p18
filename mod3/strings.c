/*
 * =====================================================================================
 *
 *       Filename:  strings.c
 *
 *    Description:  first use of strings
 *
 *        Version:  1.0
 *        Created:  01/23/2018 10:04:38 AM
 *       Revision:  none
 *       Compiler:  gcc
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
    char name[10];  //allocate 20 chars + null char
    printf("Enter your name:\n");
    // string is a %s
    scanf("%s", name);
    printf("Your name is [%s]\n", name);
    // this one has a special rule. if you use an array (string) 
    // do not use the address operator (&) 

    return 0;
}
// Function Definitions


