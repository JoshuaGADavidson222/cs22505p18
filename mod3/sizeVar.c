/*
 * =====================================================================================
 *
 *       Filename:  sizeVar.c
 *
 *    Description:  
 *
 *        Version:  1.0
 *        Created:  01/25/2018 09:00:09 AM
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
    int num =1;
    unsigned int unum =1;
    num = num * 10000;
    unum = unum * 10000;
    printf("The size of int is [%ld]\n", sizeof(num));
    printf("The size of uint is [%ld]\n", sizeof(unum));
    //sizeof: returns the size of variables in bytes
    printf("num = [%d]. unum=[%d]\n", num, unum);
    num = num * 10000;
    unum = unum * 10000;
    printf("num = [%d]. unum=[%d]\n", num, unum);
        //what is the range of an integer?
    // 2^32 (that is how many combinations I can have) 
    // ~4294000000 = i combinations
    // Range: -(i/2) to + (i/2-1)
    num = num * 10000;
    unum = unum * 10000;
    printf("num = [%d]. unum=[%u]\n", num, unum);


    return 0;
}
// Function Definitions


