/*
 * =====================================================================================
 *
 *       Filename:  random.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:53:00 AM
 *       Revision:  none
 *       Compiler:  gcc
 *
 *         Author:  Joshua Davidson (), joshuadavidson1@mail.weber.edu
 *   Organization:  wsu
 *
 * =====================================================================================
 */
#include <stdio.h>
#include <stdlib.h>// for rand() functions
#include <time.h> // for srand() function: set your random seed

// Constants

// Function Prototypes

// Main Function
int main()
{
    // set your random seed
    srand((int)time(0));
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);
    printf("A random num[%d]\n", rand()%100);



    return 0;

    return 0;
}
// Function Definitions


