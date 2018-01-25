/*
 * =====================================================================================
 *
 *       Filename:  index.c
 *
 *    Description:  This is about I don't remember january twenty five
 *
 *        Version:  1.0
 *        Created:  01/25/2018 08:42:43 AM
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
    // 1) define two strings
    char fname[20];
    char lname[20];
    // 2) get first name info
    printf("Enter you fname\n");
    scanf("%s", fname);
    // 3) get last name info
    printf("Enter you lname\n");
    scanf("%s", lname);
    // 4) Display initials
    printf("Hello %s %s\n", fname, lname);
    printf("Your initials are [%c%c]\n", fname[0], lname[3]);


    return 0;
}
// Function Definitions


